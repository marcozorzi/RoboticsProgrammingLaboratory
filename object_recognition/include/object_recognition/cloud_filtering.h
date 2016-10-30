/*
 * cloud_filtering.h
 *
 * Class implementing the cloud filtering methods.
 *
 *  Created on: Nov 28, 2015
 *      Author: antoine
 */

#ifndef T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_FILTERING_H_
#define T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_FILTERING_H_


#include <pcl/point_types.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/passthrough.h>
#include <object_recognition/cloud_filtering_parameters.h>


class cloud_filtering
{
public:
	pcl::PointCloud<pcl::PointXYZ>::Ptr downsample(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudFiltering_downsample_parameters& params);
	pcl::PointCloud<pcl::PointXYZ>::Ptr filter(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudFiltering_filter_parameters& params);
};


#endif /* T_MEN_OBJECT_RECOGNITION_INCLUDE_OBJECT_RECOGNITION_CLOUD_FILTERING_H_ */
