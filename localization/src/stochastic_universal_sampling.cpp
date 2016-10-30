/*
 * stochastic_universal_sampling.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#include <localization/stochastic_universal_sampling.h>


void StochasticUniversalSampling::resample(weightedParticle* weightedParticles, const int& numberOfParticles)
{
	// Compute the mean weight.
	int i;
	double meanWeight = 0;
	for (i = 0; i < numberOfParticles; ++i)
	{
		meanWeight += weightedParticles[i].weight;
	}
	meanWeight /= i;

	// Perform Stochastic Universal Sampling.
	int j = 0;
	double summedWeight = 0;
	double iterator = meanWeight / 2;
	for (i = 0; i < numberOfParticles; ++i, iterator += meanWeight)
	{
		while (!(iterator >= summedWeight && iterator < summedWeight + weightedParticles[j].weight))
		{
			summedWeight += weightedParticles[j].weight;
			++j;
		}
		weightedParticles[i].particle = weightedParticles[j].particle;

		if (j >= numberOfParticles)
		{
			ROS_ERROR_STREAM("Index j in stochastic_universal_sampling.cpp is bigger than the number of particles: j = " << j << ".");
		}
	}
}


