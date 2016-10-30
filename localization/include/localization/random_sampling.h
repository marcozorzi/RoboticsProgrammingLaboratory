/*
 * random_sampling.h
 *
 * Class implementing the random particle replacement to deal with unaccurate pose prediction or the kidnapped robot problem.
 *
 *  Created on: Dec 6, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_RANDOM_SAMPLING_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_RANDOM_SAMPLING_H_


#include <ros/ros.h>
#include <tf/transform_datatypes.h>
#include <localization/weighted_particle.h>


class RandomSampling
{
public:
	void replace(weightedParticle* weightedParticles, const int& numberOfParticles, const int& numberOfRandomlyReplacedParticles);
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_RANDOM_SAMPLING_H_ */
