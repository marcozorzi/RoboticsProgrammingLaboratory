/*
 * parameters.h
 *
 * Struct containing the parameters.
 *
 *  Created on: Nov 26, 2015
 *      Author: antoine
 */

#ifndef T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_PARAMETERS_H_
#define T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_PARAMETERS_H_


#include <object_recognition/cloud_filtering_parameters.h>
#include <object_recognition/cloud_segmentation_parameters.h>
#include <object_recognition/spin_image_parameters.h>


struct parameters
{
	std::string camera_topic;
	std::string request_topic;
	std::string answer_topic;
	std::string human_counter_topic;
	std::string models_directory_path;
	std::string marker_frame_id;
	cloudFiltering_downsample_parameters cloudFiltering_downsample_params;
	cloudFiltering_filter_parameters cloudFiltering_filter_params;
	cloudSegmentation_planar_segmentation_parameters cloudSegmentation_planar_segmentation_params;
	cloudSegmentation_extract_clusters_parameters cloudSegmentation_extract_clusters_params;
	spinImage_compute_descriptors_parameters spinImage_compute_descriptors_params;
	spinImage_recognition_parameters spinImage_recognition_params;
};


#endif /* T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_PARAMETERS_H_ */
