/*
 * particles_publisher.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: antoine
 */

#include <localization/particles_publisher.h>


void ParticlesPublisher::publish(const geometry_msgs::Pose* particles, const int& numberOfParticles, const ros::Publisher& particles_pub, const std::string& particles_topic)
{
	// Publish the particles using a "geometry_msgs::PoseArray" message.
	geometry_msgs::PoseArray poseArray;
	poseArray.header.frame_id = particles_topic;
	poseArray.header.stamp = ros::Time::now();
	for (int i = 0; i < numberOfParticles; ++i)
		poseArray.poses.push_back(particles[i]);
	particles_pub.publish(poseArray);
}


