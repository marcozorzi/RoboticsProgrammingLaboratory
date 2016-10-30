/*
 * model_library.cpp
 *
 *  Created on: Nov 23, 2015
 *      Author: antoine
 */

#include <object_recognition/model_library.h>


std::vector<assigned_descriptors> model_library::generate_library(const std::string& path, const cloudFiltering_downsample_parameters& cf_params, const spinImage_compute_descriptors_parameters& si_params)
{
	// Create the PCD reader and all objects and containers needed to build the model library.
	pcl::PCDReader reader;
	pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
	cloud_filtering cf;
	spin_image si;
	std::vector<assigned_descriptors> a_descriptors_vector;
	assigned_descriptors a_descriptors;

	// Iterate in the directory structure and create the library.
	boost::filesystem::directory_iterator end_it; // default construction yields past-the-end
	for (boost::filesystem::directory_iterator it(path); it != end_it; ++it)
	{
		if (is_directory(it->status()))
		{
			if (it->path().string().find("man") != std::string::npos || it->path().string().find("woman") != std::string::npos || it->path().string().find("firefighter") != std::string::npos)
			{
				a_descriptors.obj = human;
				for (boost::filesystem::directory_iterator itr(it->path()); itr != end_it; ++itr)
				{
					reader.read (itr->path().string(), *cloud);
					cloud = cf.downsample(cloud, cf_params);
					a_descriptors.descriptors = si.compute_descriptors(cloud, si_params);
					a_descriptors_vector.push_back(a_descriptors);

					ROS_INFO_STREAM("Read model " << itr->path() << " is human (" << a_descriptors.obj << ").");
				}
			}
			else
			{
				ROS_WARN("Unknown class of object.");
			}
		}
		else
		{
			ROS_ERROR("Please check your ~/data/humans directory structure.");
		}
	}

	return a_descriptors_vector;
}


