/*
 * motion_update.h
 *
 * Abstract class for the motion update.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_MOTION_UPDATE_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_MOTION_UPDATE_H_


#include <geometry_msgs/Pose.h>
#include <localization/motion_update_parameters.h>


class MotionUpdate
{
public:
	virtual ~MotionUpdate() {}
	virtual geometry_msgs::Pose updateMotion(const geometry_msgs::Pose& previousPose, const geometry_msgs::Pose& previousOdometry, const geometry_msgs::Pose& currentOdometry, const motionUpdateParameters& params) =0;
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_MOTION_UPDATE_H_ */
