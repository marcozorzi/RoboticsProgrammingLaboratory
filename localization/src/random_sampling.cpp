/*
 * random_sampling.cpp
 *
 *  Created on: Dec 6, 2015
 *      Author: antoine
 */

#include <localization/random_sampling.h>


void RandomSampling::replace(weightedParticle* weightedParticles, const int& numberOfParticles, const int& numberOfRandomlyReplacedParticles)
{
	// Replace randomly n particles.
	int particleIndex;
	for (int i = 0; i < numberOfRandomlyReplacedParticles; ++i)
	{
		particleIndex = rand() % numberOfParticles;  // random number between 0 and (numberOfParticles - 1)
		weightedParticles[particleIndex].particle.position.x = 0.01 * (rand() % 200); // random number between 0 and 1.99
		weightedParticles[particleIndex].particle.position.y = 0.01 * (rand() % 200); // random number between 0 and 1.99
		weightedParticles[particleIndex].particle.orientation = tf::createQuaternionMsgFromYaw(0.01 * (rand() % 200) * M_PI); // random number between 0 and 2pi
	}
}


