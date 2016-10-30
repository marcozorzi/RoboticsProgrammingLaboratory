/*
 * cloud_segmentation_parameters.h
 *
 * Structs containing the cloud segmentation parameters.
 *
 *  Created on: Nov 28, 2015
 *      Author: antoine
 */

#ifndef T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_SEGMENTATION_PARAMETERS_H_
#define T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_SEGMENTATION_PARAMETERS_H_


struct cloudSegmentation_planar_segmentation_parameters
{
	int sacSegmentation_max_iterations;
	double sacSegmentation_distance_threshold;
	double sacSegmentation_point_ratio;
};


struct cloudSegmentation_extract_clusters_parameters
{
	double euclideanClusterExtraction_cluster_tolerance;
	int euclideanClusterExtraction_min_cluster_size;
	int euclideanClusterExtraction_max_cluster_size;
};


#endif /* T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_SEGMENTATION_PARAMETERS_H_ */
