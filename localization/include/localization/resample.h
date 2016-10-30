/*
 * resample.h
 *
 * Abstract class for the resampling.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_RESAMPLE_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_RESAMPLE_H_


#include <localization/weighted_particle.h>


class Resampling
{
public:
	virtual ~Resampling() {}
	virtual void resample(weightedParticle* weightedParticles, const int& numberOfParticles) =0;
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_RESAMPLE_H_ */
