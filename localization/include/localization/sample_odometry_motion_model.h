/*
 * sample_odometry_motion_model.h
 *
 * Class implementing the Sample Odometry Motion Model.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_SAMPLE_ODOMETRY_MOTION_MODEL_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_SAMPLE_ODOMETRY_MOTION_MODEL_H_


#include <ros/ros.h>
#include <geometry_msgs/Pose.h>
#include <tf/transform_datatypes.h>
#include <localization/motion_update.h>
#include <localization/motion_update_parameters.h>


class SampleOdometryMotionModel: public MotionUpdate
{
private:
	double sample(const double& b2);
public:
	geometry_msgs::Pose updateMotion(const geometry_msgs::Pose& previousPose, const geometry_msgs::Pose& previousOdometry, const geometry_msgs::Pose& currentOdometry, const motionUpdateParameters& params);
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_SAMPLE_ODOMETRY_MOTION_MODEL_H_ */
