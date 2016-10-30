/*
 * spin_image.h
 *
 * Class implementing the calculations for the spin images.
 *
 *  Created on: Nov 23, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_SPIN_IMAGE_H_
#define SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_SPIN_IMAGE_H_


#include <ros/ros.h>
#include <pcl/features/normal_3d.h>
#include <pcl/features/spin_image.h>
#include <object_recognition/assigned_descriptors.h>
#include <object_recognition/spin_image_parameters.h>


class spin_image
{
public:
	pcl::PointCloud<SpinImage>::Ptr compute_descriptors(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const spinImage_compute_descriptors_parameters& params);
	object recognition(pcl::PointCloud<SpinImage>::Ptr descriptors, std::vector<assigned_descriptors> models, const spinImage_recognition_parameters& params);
	double compute_correlation(SpinImage p, SpinImage q);
};


#endif /* SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_SPIN_IMAGE_H_ */
