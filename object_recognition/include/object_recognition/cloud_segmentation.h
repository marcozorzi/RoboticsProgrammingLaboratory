/*
 * cloud_segmentation.h
 *
 * Class implementing the cloud segmentation methods.
 *
 *  Created on: Nov 28, 2015
 *      Author: antoine
 */

#ifndef T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_SEGMENTATION_H_
#define T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_SEGMENTATION_H_


#include <pcl/filters/extract_indices.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/segmentation/extract_clusters.h>
#include <object_recognition/cloud_segmentation_parameters.h>


class cloud_segmentation
{
public:
	pcl::PointCloud<pcl::PointXYZ>::Ptr planar_segmentation(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudSegmentation_planar_segmentation_parameters& params);
	std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> extract_clusters(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudSegmentation_extract_clusters_parameters& params);
};


#endif /* T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_SEGMENTATION_H_ */
