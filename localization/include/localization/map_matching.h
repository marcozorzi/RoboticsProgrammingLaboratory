/*
 * map_matching.h
 *
 * Class implementing the Map Matching and returning the particle weight.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_MAP_MATCHING_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_MAP_MATCHING_H_


#include <ros/ros.h>
#include <geometry_msgs/Pose.h>
#include <sensor_msgs/LaserScan.h>
#include <nav_msgs/OccupancyGrid.h>
#include <tf/transform_datatypes.h>
#include <localization/sensor_update.h>


class MapMatching: public SensorUpdate
{
private:
	void initializeLocalMap(int* localMap, const geometry_msgs::Pose& pose, const sensor_msgs::LaserScan& scan, const nav_msgs::OccupancyGrid& map);
	double computeCorrelation(const int* localMap, const nav_msgs::OccupancyGrid& map);
public:
	double updateSensor(const geometry_msgs::Pose& pose, const sensor_msgs::LaserScan& scan, const nav_msgs::OccupancyGrid& map, const ros::Publisher& local_map_pub, const int nb);
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_MAP_MATCHING_H_ */
