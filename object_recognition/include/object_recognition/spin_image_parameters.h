/*
 * spin_image_parameters.h
 *
 * Structs containing the spin image parameters.
 *
 *  Created on: Nov 26, 2015
 *      Author: antoine
 */

#ifndef T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_SPIN_IMAGE_PARAMETERS_H_
#define T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_SPIN_IMAGE_PARAMETERS_H_


struct spinImage_compute_descriptors_parameters
{
	double normalEstimation_radius_search;
	double spinImageEstimation_radius_search;
	int spinImageEstimation_image_width;
};


struct spinImage_recognition_parameters
{
	double recognition_threshold;
	int recognition_human_counter_threshold;
	int recognition_models_descriptors_step;
	int recognition_current_descriptors_step;
};


#endif /* T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_SPIN_IMAGE_PARAMETERS_H_ */
