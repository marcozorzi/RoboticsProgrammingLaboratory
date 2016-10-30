/*
 * cloud_segmentation.cpp
 *
 *  Created on: Nov 28, 2015
 *      Author: antoine
 */

#include <object_recognition/cloud_segmentation.h>


pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_segmentation::planar_segmentation(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudSegmentation_planar_segmentation_parameters& params)
{
  std::cout << "PointCloud before planar_segmentation has: " << cloud->size () << " data points." << std::endl;

  // Create the segmentation object for the planar model and set all the parameters
  pcl::SACSegmentation<pcl::PointXYZ> seg;
  pcl::PointIndices::Ptr inliers (new pcl::PointIndices);
  pcl::ModelCoefficients::Ptr coefficients (new pcl::ModelCoefficients);
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_segmented (new pcl::PointCloud<pcl::PointXYZ>), cloud_plane (new pcl::PointCloud<pcl::PointXYZ>);
  seg.setOptimizeCoefficients (true);
  seg.setModelType (pcl::SACMODEL_PLANE);
  seg.setMethodType (pcl::SAC_RANSAC);
  seg.setMaxIterations (params.sacSegmentation_max_iterations);
  seg.setDistanceThreshold (params.sacSegmentation_distance_threshold);

  *cloud_segmented = *cloud;
  int nr_points = (int) cloud_segmented->size ();
  while (cloud_segmented->size () > params.sacSegmentation_point_ratio * nr_points)
  {
    // Segment the largest planar component from the remaining cloud
    seg.setInputCloud (cloud_segmented);
    seg.segment (*inliers, *coefficients);
    if (inliers->indices.size () == 0)
    {
      std::cout << "Could not estimate a planar model for the given dataset." << std::endl;
      break;
    }

    // Extract the planar inliers from the input cloud
    pcl::ExtractIndices<pcl::PointXYZ> extract;
    extract.setInputCloud (cloud_segmented);
    extract.setIndices (inliers);
    extract.setNegative (false);

    // Get the points associated with the planar surface
    extract.filter (*cloud_plane);
    std::cout << "PointCloud representing the planar component: " << cloud_plane->size () << " data points." << std::endl;

    // Remove the planar inliers, extract the rest
    extract.setNegative (true);
    extract.filter (*cloud_segmented);
  }

  std::cout << "PointCloud after planar_segmentation has: " << cloud_segmented->size ()  << " data points." << std::endl;
  return cloud_segmented;
}


std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> cloud_segmentation::extract_clusters(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const cloudSegmentation_extract_clusters_parameters& params)
{
  // Creating the KdTree object for the search method of the extraction
  pcl::search::KdTree<pcl::PointXYZ>::Ptr tree (new pcl::search::KdTree<pcl::PointXYZ>);
  tree->setInputCloud (cloud);

  std::vector<pcl::PointIndices> cluster_indices;
  pcl::EuclideanClusterExtraction<pcl::PointXYZ> ec;
  ec.setClusterTolerance (params.euclideanClusterExtraction_cluster_tolerance);
  ec.setMinClusterSize (params.euclideanClusterExtraction_min_cluster_size);
  ec.setMaxClusterSize (params.euclideanClusterExtraction_max_cluster_size);
  ec.setSearchMethod (tree);
  ec.setInputCloud (cloud);
  ec.extract (cluster_indices);

  std::vector<pcl::PointCloud<pcl::PointXYZ>::Ptr> cluster_vector;
  int j = 0;
  for (std::vector<pcl::PointIndices>::const_iterator it = cluster_indices.begin (); it != cluster_indices.end (); ++it, ++j)
  {
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_cluster (new pcl::PointCloud<pcl::PointXYZ>);
    for (std::vector<int>::const_iterator pit = it->indices.begin (); pit != it->indices.end (); ++pit)
      cloud_cluster->push_back (cloud->at(*pit));
    cloud_cluster->width = cloud_cluster->size ();
    cloud_cluster->height = 1;
    cloud_cluster->is_dense = true;
    cluster_vector.push_back(cloud_cluster);

    std::cout << "PointCloud representing cluster_" << j << " has: " << cloud_cluster->size () << " data points." << std::endl;
  }

  std::cout << "Number of clusters found: " << cluster_vector.size() << std::endl;
  return cluster_vector;
}


