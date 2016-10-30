/*
 * cloud_filtering_parameters.h
 *
 * Structs containing the cloud filtering parameters.
 *
 *  Created on: Nov 28, 2015
 *      Author: antoine
 */

#ifndef T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_FILTERING_PARAMETERS_H_
#define T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_FILTERING_PARAMETERS_H_


struct cloudFiltering_downsample_parameters
{
	float voxelGrid_leaf_size;
};


struct cloudFiltering_filter_parameters
{
	float passThrough_lower_limit;
	float passThrough_upper_limit;
};


#endif /* T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_FILTERING_PARAMETERS_H_ */
