/*
 * model_library.h
 *
 * Class generating the model library from the PCD files.
 *
 *  Created on: Nov 23, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_MODEL_LIBRARY_H_
#define SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_MODEL_LIBRARY_H_


#include <ros/ros.h>
#include <pcl/io/pcd_io.h>
#include <boost/filesystem.hpp>
#include <object_recognition/cloud_filtering.h>
#include <object_recognition/cloud_filtering_parameters.h>
#include <object_recognition/spin_image.h>
#include <object_recognition/spin_image_parameters.h>
#include <object_recognition/assigned_descriptors.h>


class model_library
{
public:
	std::vector<assigned_descriptors> generate_library(const std::string& path, const cloudFiltering_downsample_parameters& cf_params, const spinImage_compute_descriptors_parameters& si_params);
};


#endif /* SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_MODEL_LIBRARY_H_ */
