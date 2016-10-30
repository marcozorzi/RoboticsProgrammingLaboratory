/*
 * localization.h
 *
 * Abstract class for localization algorithm.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_LOCALIZATION_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_LOCALIZATION_H_


#include <geometry_msgs/Pose.h>


class Localization
{
public:
	virtual ~Localization() {}
	virtual geometry_msgs::Pose* localize(const ros::Publisher& local_map_pub, const ros::Publisher& odometry_pub, const ros::Publisher& flag_pub, const ros::Publisher& start_pub) =0;
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_LOCALIZATION_H_ */
