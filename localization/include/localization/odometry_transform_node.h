/*
 * odometry_transform_node.h
 *
 * Node publishing a new odometry taking into account the start pose found by the localization.
 *
 *  Created on: Dec 16, 2015
 *      Author: antoine
 */

#ifndef T_MEN_LOCALIZATION_INCLUDE_LOCALIZATION_ODOMETRY_TRANSFORM_NODE_H_
#define T_MEN_LOCALIZATION_INCLUDE_LOCALIZATION_ODOMETRY_TRANSFORM_NODE_H_


#include <ros/ros.h>
#include <tf/transform_datatypes.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/PoseStamped.h>
#include <localization/sample_odometry_motion_model.h>


class odometryTransform
{
public:
	ros::NodeHandle nh;
	ros::Subscriber odometry_sub;
	ros::Subscriber start_sub;
	ros::Publisher new_odometry_pub;

	SampleOdometryMotionModel motionUpdate;

	std::string odometryTopic, newOdometryTopic, startTopic;
	geometry_msgs::PoseStamped start;
	nav_msgs::Odometry newOdometry, previousOdometry;
	bool startReceived, firstNewOdometry;

	odometryTransform();
	void odometryCallback(const nav_msgs::Odometry::ConstPtr& msg);
	void startCallback(const geometry_msgs::PoseStamped::ConstPtr& msg);
};


#endif /* T_MEN_LOCALIZATION_INCLUDE_LOCALIZATION_ODOMETRY_TRANSFORM_NODE_H_ */
