/*
 * localization_parameters.h
 *
 * Struct containing the localization parameters.
 *
 *  Created on: Dec 6, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_LOCALIZATION_PARAMETERS_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_LOCALIZATION_PARAMETERS_H_


#include <localization/motion_update_parameters.h>


struct localizationParameters
{
	int numberOfParticles;
	int numberOfRandomlyReplacedParticles;
	double particlesSpreadingThreshold;
	int particlesSpreadingCounter;
	motionUpdateParameters motionUpdateParams;
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_LOCALIZATION_PARAMETERS_H_ */
