/*
 * particles_publisher.h
 *
 * Class implementing the particles publisher.
 *
 *  Created on: Dec 5, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARTICLES_PUBLISHER_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARTICLES_PUBLISHER_H_


#include <ros/ros.h>
#include <geometry_msgs/PoseArray.h>
#include <localization/publisher.h>


class ParticlesPublisher: public Publisher
{
public:
	void publish(const geometry_msgs::Pose* particles, const int& numberOfParticles, const ros::Publisher& particles_pub, const std::string& particles_topic);
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARTICLES_PUBLISHER_H_ */
