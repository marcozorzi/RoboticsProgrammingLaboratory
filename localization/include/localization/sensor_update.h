/*
 * sensor_update.h
 *
 * Abstract class for the sensor update.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_SENSOR_UPDATE_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_SENSOR_UPDATE_H_


#include <geometry_msgs/Pose.h>
#include <sensor_msgs/LaserScan.h>
#include <nav_msgs/OccupancyGrid.h>


class SensorUpdate
{
public:
	virtual ~SensorUpdate() {}
	virtual double updateSensor(const geometry_msgs::Pose& pose, const sensor_msgs::LaserScan& scan, const nav_msgs::OccupancyGrid& map, const ros::Publisher& map_pub, const int nb) =0;
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_SENSOR_UPDATE_H_ */
