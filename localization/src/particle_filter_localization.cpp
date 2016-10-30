/*
 * particle_filter_localization.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#include <localization/particle_filter_localization.h>


void ParticleFilterLocalization::mapCallback(const nav_msgs::OccupancyGrid::ConstPtr& msg)
{
	// Store the map.
	map = *msg;
}


void ParticleFilterLocalization::scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg)
{
	// Store the scan and set the newScanCallback flag to true.
	scan = *msg;
	newScanCallback = true;
}


void ParticleFilterLocalization::odometryCallback(const nav_msgs::Odometry::ConstPtr& msg)
{
	// Store the odometry and deal with the different flags.
	odometry = *msg;
	newOdometryCallback = true;
	if (firstOdometryCallback)
	{
		previousOdometry = odometry;
		localizationOdometry = odometry;
		firstOdometryCallback = false;
	}
	if (!firstOdometryChangeOccured && (odometry.pose.pose.position.x != previousOdometry.pose.pose.position.x || odometry.pose.pose.position.y != previousOdometry.pose.pose.position.y || tf::getYaw(odometry.pose.pose.orientation) != tf::getYaw(previousOdometry.pose.pose.orientation)))
	{
		firstOdometryChangeOccured = true;
	}
}


ParticleFilterLocalization::ParticleFilterLocalization(const localizationParameters& localizationParams)
{
	// Store the parameters and initialize the flags.
	params = localizationParams;
	firstOdometryCallback = true;
	firstOdometryChangeOccured = false;
	newOdometryCallback = false;
	newScanCallback = false;
	replace = false;
	flag.data = false;

	// Random initialization of the particles.
	particles = new geometry_msgs::Pose[params.numberOfParticles];
	for (int i = 0; i < params.numberOfParticles; ++i)
	{
		particles[i].position.x = 0.01 * (rand() % 100); // random number between 0 and 0.99
		particles[i].position.y = 0.01 * (rand() % 100); // random number between 0 and 0.99
		particles[i].orientation = tf::createQuaternionMsgFromYaw(0.01 * (rand() % 200) * M_PI); // random number between 0 and 2pi
	}

	// Declaration of the weighted particles array.
	weightedParticles = new weightedParticle[params.numberOfParticles];
}


ParticleFilterLocalization::~ParticleFilterLocalization()
{
	delete [] particles;
	particles = 0;
	delete [] weightedParticles;
	weightedParticles = 0;
}


geometry_msgs::Pose* ParticleFilterLocalization::localize(const ros::Publisher& local_map_pub, const ros::Publisher& odometry_pub, const ros::Publisher& flag_pub, const ros::Publisher& start_pub)
{
	if (newOdometryCallback && newScanCallback && !firstOdometryCallback && firstOdometryChangeOccured)
	{
		// Update the flag values.
		newOdometryCallback = false;
		newScanCallback = false;
		replace = true;

		// Particle filter localization algorithm.
		for (int i = 0; i < params.numberOfParticles; ++i)
		{
			// Motion update
			weightedParticles[i].particle = motionUpdate.updateMotion(particles[i], previousOdometry.pose.pose, odometry.pose.pose, params.motionUpdateParams);
			// Sensor update
			weightedParticles[i].weight = sensorUpdate.updateSensor(weightedParticles[i].particle, scan, map, local_map_pub, i);
			if (weightedParticles[i].weight > 0.6 && replace)
			{
				replace = false;
			}
		}
		// Resampling
		resample.resample(weightedParticles, params.numberOfParticles);
		// Replace randomly some particles to handle the kidnapped robot problem.
		if (replace)
		{
			replaceRandomly.replace(weightedParticles, params.numberOfParticles, params.numberOfRandomlyReplacedParticles);
		}

		compute_location(odometry_pub, flag_pub, start_pub);

		for (int i = 0; i < params.numberOfParticles; ++i)
		{
			particles[i] = weightedParticles[i].particle;
		}

		previousOdometry = odometry;
	}

	return particles;
}


void ParticleFilterLocalization::compute_location(const ros::Publisher& odometry_pub, const ros::Publisher& flag_pub, const ros::Publisher& start_pub)
{
	// Find the particle with the maximal weight and store its index.
	double maxWeight = 0;
	int indexBestParticle = 0;
	int i;
	for (i = 0; i < params.numberOfParticles; ++i)
	{
		if (weightedParticles[i].weight > maxWeight)
		{
			maxWeight = weightedParticles[i].weight;
			indexBestParticle = i;
		}
	}

	// Count the number of outliers.
	int counter = 0;
	i = 0;
	while (counter < params.particlesSpreadingCounter && i < params.numberOfParticles && maxWeight > 0)
	{
		if (fabs(weightedParticles[indexBestParticle].particle.position.x - weightedParticles[i].particle.position.x) > params.particlesSpreadingThreshold || fabs(weightedParticles[indexBestParticle].particle.position.y - weightedParticles[i].particle.position.y) > params.particlesSpreadingThreshold)
		{
			++counter;
		}
		++i;
	}

	// Publish the localization odometry using the best particle pose if the localization is good or by updating the motion otherwise.
	localizationOdometry.header.stamp = ros::Time::now();
	localizationOdometry.header.frame_id = odometry.header.frame_id;
	if (counter < params.particlesSpreadingCounter)
	{
		// Publish the start pose and the localization flag if we are localized for the first time.
		// Note: localization only possible after half a turn in order to improve the accuracy.
		if (!flag.data && fabs(tf::getYaw(previousOdometry.pose.pose.orientation) - tf::getYaw(odometry.pose.pose.orientation)) > 1)
		{
			geometry_msgs::PoseStamped start;
			start.header.stamp = ros::Time::now();
			start.header.frame_id = odometry.header.frame_id;
			start.pose = weightedParticles[indexBestParticle].particle;
			std::cout << "theta: " << tf::getYaw(weightedParticles[indexBestParticle].particle.orientation) << std::endl;
			start_pub.publish(start);

			flag.data = true;
			flag_pub.publish(flag);
		}
		localizationOdometry.pose.pose = weightedParticles[indexBestParticle].particle;
	}
	else
	{
		motionUpdateParameters p;
		p.alpha1 = 0;
		p.alpha2 = 0;
		p.alpha3 = 0;
		p.alpha4 = 0;
		localizationOdometry.pose.pose = motionUpdate.updateMotion(localizationOdometry.pose.pose, previousOdometry.pose.pose, odometry.pose.pose, p);
	}
	odometry_pub.publish(localizationOdometry);
}


