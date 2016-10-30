/*
 * parameters.h
 *
 * Struct containing the parameters.
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARAMETERS_H_
#define SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARAMETERS_H_


#include <localization/localization_parameters.h>


struct parameters
{
	std::string mapTopic;
	std::string scanTopic;
	std::string odometryTopic;
	std::string particlesTopic;
	std::string localMapTopic;
	std::string odometry2Topic;
	std::string flagTopic;
	std::string startTopic;
	double spinFrequency;
	localizationParameters localizationParams;
};


#endif /* SEEWERA_LOCALIZATION_INCLUDE_LOCALIZATION_PARAMETERS_H_ */
