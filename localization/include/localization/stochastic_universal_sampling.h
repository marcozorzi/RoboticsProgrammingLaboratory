/*
 * stochastic_universal_sampling.h
 *
 * Class implementing the Stochastic Universal Sampling method.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_STOCHASTIC_UNIVERSAL_SAMPLING_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_STOCHASTIC_UNIVERSAL_SAMPLING_H_


#include <ros/ros.h>
#include <localization/resample.h>
#include <localization/weighted_particle.h>


class StochasticUniversalSampling: public Resampling
{
public:
	void resample(weightedParticle* weightedParticles, const int& numberOfParticles);
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_STOCHASTIC_UNIVERSAL_SAMPLING_H_ */
