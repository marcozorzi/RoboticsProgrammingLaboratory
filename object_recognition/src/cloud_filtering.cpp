/*
 * cloud_filtering.cpp
 *
 *  Created on: Nov 28, 2015
 *      Author: antoine
 */

#include <object_recognition/cloud_filtering.h>


pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtering::downsample(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudFiltering_downsample_parameters& params)
{
  std::cout << "PointCloud before downsampling has: " << cloud->size () << " data points." << std::endl;

  // Create the filtering object and downsample the dataset using a given leaf size
  pcl::VoxelGrid<pcl::PointXYZ> vg;
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_downsampled (new pcl::PointCloud<pcl::PointXYZ>);
  vg.setInputCloud (cloud);
  vg.setLeafSize (params.voxelGrid_leaf_size, params.voxelGrid_leaf_size, params.voxelGrid_leaf_size);
  vg.filter (*cloud_downsampled);

  std::cout << "PointCloud after downsampling has: " << cloud_downsampled->size ()  << " data points." << std::endl;
  return cloud_downsampled;
}


pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtering::filter(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudFiltering_filter_parameters& params)
{
  std::cout << "PointCloud before filtering has: " << cloud->size () << " data points." << std::endl;

  // Create the filtering object and filter out every point of the dataset which is not within the filter limits
  pcl::PassThrough<pcl::PointXYZ> pass;
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered (new pcl::PointCloud<pcl::PointXYZ>);
  pass.setInputCloud (cloud);
  pass.setFilterFieldName ("z");
  pass.setFilterLimits (params.passThrough_lower_limit, params.passThrough_upper_limit);
  pass.filter (*cloud_filtered);

  std::cout << "PointCloud after filtering has: " << cloud_filtered->size ()  << " data points." << std::endl;
  return cloud_filtered;
}


