/*
 * odometry_transform_node.cpp
 *
 *  Created on: Dec 16, 2015
 *      Author: antoine
 */

#include <localization/odometry_transform_node.h>


odometryTransform::odometryTransform()
{
	// Parse the parameters.
	if (nh.getParam("odometry_topic", odometryTopic) &&
		nh.getParam("new_odometry_topic", newOdometryTopic) &&
		nh.getParam("start_topic", startTopic))
	{
		ROS_INFO("Parameters imported.");
	}
	else
	{
		ROS_ERROR("An error occurred while importing the parameters. Please check the parameter file.");
	}

	// Create the subscribers and publishers.
	odometry_sub = nh.subscribe(odometryTopic, 1, &odometryTransform::odometryCallback, this);
	start_sub = nh.subscribe(startTopic, 1, &odometryTransform::startCallback, this);
	new_odometry_pub = nh.advertise<nav_msgs::Odometry>(newOdometryTopic, 1);

	// Initialize the boolean variables.
	startReceived = false;
	firstNewOdometry = true;
}


void odometryTransform::odometryCallback(const nav_msgs::Odometry::ConstPtr& msg)
{
	// Publish, as soon as the start pose is received from the localization, the new odometry, using the motion update.
	if (startReceived)
	{
		newOdometry.header.stamp = ros::Time::now();
		newOdometry.header.frame_id = msg->header.frame_id;
		if (firstNewOdometry)
		{
			firstNewOdometry = false;
			newOdometry.pose.pose = start.pose;
		}
		else
		{
			motionUpdateParameters p;
			p.alpha1 = 0;
			p.alpha2 = 0;
			p.alpha3 = 0;
			p.alpha4 = 0;
			newOdometry.pose.pose = motionUpdate.updateMotion(newOdometry.pose.pose, previousOdometry.pose.pose, msg->pose.pose, p);
		}
		new_odometry_pub.publish(newOdometry);
		previousOdometry = *msg;
	}
}


void odometryTransform::startCallback(const geometry_msgs::PoseStamped::ConstPtr& msg)
{
	// Store the start pose.
	start = *msg;
	if (!startReceived)
	{
		startReceived = true;
	}
}


int main(int argc, char** argv)
{
	// Initialize ROS and create the odometry transform instance.
	ros::init(argc, argv, "odometry_transform");
	odometryTransform odometryTF;
	ros::spin();
	return 0;
}


