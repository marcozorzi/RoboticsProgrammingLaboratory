/*
 * particle_filter_localization.h
 *
 * Class implementing the Particle Filter Localization algorithm.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARTICLE_FILTER_LOCALIZATION_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARTICLE_FILTER_LOCALIZATION_H_


#include <ros/ros.h>
#include <std_msgs/Bool.h>
#include <nav_msgs/OccupancyGrid.h>
#include <sensor_msgs/LaserScan.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Pose.h>
#include <tf/transform_datatypes.h>
#include <math.h>
#include <localization/localization.h>
#include <localization/sample_odometry_motion_model.h>
#include <localization/map_matching.h>
#include <localization/stochastic_universal_sampling.h>
#include <localization/random_sampling.h>
#include <localization/weighted_particle.h>
#include <localization/localization_parameters.h>


class ParticleFilterLocalization: public Localization
{
private:
	nav_msgs::OccupancyGrid map;
	sensor_msgs::LaserScan scan;
	nav_msgs::Odometry odometry, previousOdometry, localizationOdometry;

	SampleOdometryMotionModel motionUpdate;
	MapMatching sensorUpdate;
	StochasticUniversalSampling resample;
	RandomSampling replaceRandomly;

	localizationParameters params;
	bool firstOdometryCallback, firstOdometryChangeOccured, newOdometryCallback, newScanCallback, replace;
	std_msgs::Bool flag;
	geometry_msgs::Pose* particles;
	weightedParticle* weightedParticles;

	void compute_location(const ros::Publisher& odometry_pub, const ros::Publisher& flag_pub, const ros::Publisher& firstLocation_pub);
public:
	ParticleFilterLocalization(const localizationParameters& localizationParams);
	~ParticleFilterLocalization();
	void mapCallback(const nav_msgs::OccupancyGrid::ConstPtr& msg);
	void scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg);
	void odometryCallback(const nav_msgs::Odometry::ConstPtr& msg);
	geometry_msgs::Pose* localize(const ros::Publisher& local_map_pub, const ros::Publisher& odometry_pub, const ros::Publisher& flag_pub, const ros::Publisher& start_pub);
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARTICLE_FILTER_LOCALIZATION_H_ */
