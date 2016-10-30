/*
 * localization_node.cpp
 *
 * Node for the localization.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#include <ros/ros.h>
#include <localization/particle_filter_localization.h>
#include <localization/particles_publisher.h>
#include <localization/parameters.h>


void parse(ros::NodeHandle &nh, parameters &params)
{
	// Parse the parameters.
	if (nh.getParam("map_topic", params.mapTopic) &&
		nh.getParam("scan_topic", params.scanTopic) &&
		nh.getParam("odometry_topic", params.odometryTopic) &&
		nh.getParam("particles_topic", params.particlesTopic) &&
		nh.getParam("local_map_topic", params.localMapTopic) &&
		nh.getParam("odometry2_topic", params.odometry2Topic) &&
		nh.getParam("flag_topic", params.flagTopic) &&
		nh.getParam("start_topic", params.startTopic) &&
		nh.getParam("spin_frequency", params.spinFrequency) &&
		nh.getParam("number_of_particles", params.localizationParams.numberOfParticles) &&
		nh.getParam("number_of_randomly_replaced_particles", params.localizationParams.numberOfRandomlyReplacedParticles) &&
		nh.getParam("particles_spreading_threshold", params.localizationParams.particlesSpreadingThreshold) &&
		nh.getParam("particles_spreading_counter", params.localizationParams.particlesSpreadingCounter) &&
		nh.getParam("alpha1", params.localizationParams.motionUpdateParams.alpha1) &&
		nh.getParam("alpha2", params.localizationParams.motionUpdateParams.alpha2) &&
		nh.getParam("alpha3", params.localizationParams.motionUpdateParams.alpha3) &&
		nh.getParam("alpha4", params.localizationParams.motionUpdateParams.alpha4))
	{
		ROS_INFO("Parameters imported.");
	}
	else
	{
		ROS_ERROR("An error occurred while importing the parameters. Please check the parameter file.");
	}
}


int main(int argc, char** argv)
{
	// Initialize ROS and create the localization instance.
	ros::init(argc, argv, "localization");
	ros::NodeHandle nh;
	parameters params;
	parse(nh, params);
	ParticleFilterLocalization particleFilterLocalization(params.localizationParams);
	ParticlesPublisher particlesPublisher;
	geometry_msgs::Pose* particles;

	// Create the subscribers and publishers.
	ros::Subscriber map_sub = nh.subscribe(params.mapTopic, 1, &ParticleFilterLocalization::mapCallback, &particleFilterLocalization);
	ros::Subscriber scan_sub = nh.subscribe(params.scanTopic, 1, &ParticleFilterLocalization::scanCallback, &particleFilterLocalization);
	ros::Subscriber odometry_sub = nh.subscribe(params.odometryTopic, 1, &ParticleFilterLocalization::odometryCallback, &particleFilterLocalization);
	ros::Publisher particles_pub = nh.advertise<geometry_msgs::PoseArray>(params.particlesTopic, 1);
	ros::Publisher local_map_pub = nh.advertise<nav_msgs::OccupancyGrid>(params.localMapTopic, 1);
	ros::Publisher odometry_pub = nh.advertise<nav_msgs::Odometry>(params.odometry2Topic, 1);
	ros::Publisher flag_pub = nh.advertise<std_msgs::Bool>(params.flagTopic, 1, true);
	ros::Publisher start_pub = nh.advertise<geometry_msgs::PoseStamped>(params.startTopic, 1, true);

	// Spin at the given frequency.
	ros::Rate loopRate(params.spinFrequency); // [Hz]
	while (ros::ok())
	{
		particles = particleFilterLocalization.localize(local_map_pub, odometry_pub, flag_pub, start_pub);
		particlesPublisher.publish(particles, params.localizationParams.numberOfParticles, particles_pub, params.mapTopic);

		ros::spinOnce();
		loopRate.sleep();
	}
	return 0;
}


