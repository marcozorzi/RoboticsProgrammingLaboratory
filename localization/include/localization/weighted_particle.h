/*
 * weighted_particle.h
 *
 * Struct containing a particle and its weight.
 *
 *  Created on: Dec 5, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_WEIGHTED_PARTICLE_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_WEIGHTED_PARTICLE_H_


#include <geometry_msgs/Pose.h>


struct weightedParticle
{
	geometry_msgs::Pose particle;
	double weight;
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_WEIGHTED_PARTICLE_H_ */
