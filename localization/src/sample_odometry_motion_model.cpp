/*
 * sample_odometry_motion_model.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#include <localization/sample_odometry_motion_model.h>


geometry_msgs::Pose SampleOdometryMotionModel::updateMotion(const geometry_msgs::Pose& previousPose, const geometry_msgs::Pose& previousOdometry, const geometry_msgs::Pose& currentOdometry, const motionUpdateParameters& params)
{
	geometry_msgs::Pose currentPose;
	float x_p = previousPose.position.x, y_p = previousPose.position.y, theta_p = tf::getYaw(previousPose.orientation);
	float x_o = currentOdometry.position.x, y_o = currentOdometry.position.y, theta_o = tf::getYaw(currentOdometry.orientation);
	float x_po = previousOdometry.position.x, y_po = previousOdometry.position.y, theta_po = tf::getYaw(previousOdometry.orientation);

	// Recover relative motion parameters from the robot control.
	double d_rot1 = atan2(y_o - y_po, x_o - x_po) - theta_po;
	double d_trans = sqrt(pow(x_po - x_o, 2) + pow(y_po - y_o, 2));
	double d_rot2 = theta_o - theta_po - d_rot1;

	// Perturb the motion parameters by noise in robot motion.
	double dh_rot1 = d_rot1 - sample(params.alpha1 * pow(d_rot1, 2) + params.alpha2 * pow(d_trans, 2));
	double dh_trans = d_trans - sample(params.alpha3 * pow(d_trans, 2) + params.alpha4 * pow(d_rot1, 2) + params.alpha4 * pow(d_rot2, 2));
	double dh_rot2 = d_rot2 - sample(params.alpha1 * pow(d_rot2, 2) + params.alpha2 * pow(d_trans, 2));

	// Update the output pose using the sample motion parameters.
	currentPose.position.x = x_p + dh_trans * cos(theta_p + dh_rot1);
	currentPose.position.y = y_p + dh_trans * sin(theta_p + dh_rot1);
	currentPose.orientation = tf::createQuaternionMsgFromYaw(theta_p + dh_rot1 + dh_rot2);

	return currentPose;
}


double SampleOdometryMotionModel::sample(const double& b2)
{
	// Sample using an approximate normal distribution.
	double b = sqrt(b2);
	double sum = 0;
	for (int i = 0; i < 12; ++i)
	{
		sum += b * (0.02 * (rand() % 100) - 1); // random number between -b and b.
	}

	return sum / 2;
}


