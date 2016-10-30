/*
 * object_recognition.cpp
 *
 *  Created on: Nov 20, 2015
 *      Author: antoine
 */

#include <object_recognition/object_recognition.h>


object_recognition::object_recognition()
{
  // Parse the parameters.
  if (nh.getParam("camera_topic", params.camera_topic) &&
	  nh.getParam("request_topic", params.request_topic) &&
	  nh.getParam("answer_topic", params.answer_topic) &&
	  nh.getParam("human_counter_topic", params.human_counter_topic) &&
	  nh.getParam("models_directory_path", params.models_directory_path) &&
	  nh.getParam("marker_frame_id", params.marker_frame_id) &&

	  nh.getParam("voxelGrid_leaf_size", params.cloudFiltering_downsample_params.voxelGrid_leaf_size) &&

	  nh.getParam("passThrough_lower_limit", params.cloudFiltering_filter_params.passThrough_lower_limit) &&
	  nh.getParam("passThrough_upper_limit", params.cloudFiltering_filter_params.passThrough_upper_limit) &&

	  nh.getParam("sacSegmentation_max_iterations", params.cloudSegmentation_planar_segmentation_params.sacSegmentation_max_iterations) &&
	  nh.getParam("sacSegmentation_distance_threshold", params.cloudSegmentation_planar_segmentation_params.sacSegmentation_distance_threshold) &&
	  nh.getParam("sacSegmentation_point_ratio", params.cloudSegmentation_planar_segmentation_params.sacSegmentation_point_ratio) &&

	  nh.getParam("euclideanClusterExtraction_cluster_tolerance", params.cloudSegmentation_extract_clusters_params.euclideanClusterExtraction_cluster_tolerance) &&
	  nh.getParam("euclideanClusterExtraction_min_cluster_size", params.cloudSegmentation_extract_clusters_params.euclideanClusterExtraction_min_cluster_size) &&
	  nh.getParam("euclideanClusterExtraction_max_cluster_size", params.cloudSegmentation_extract_clusters_params.euclideanClusterExtraction_max_cluster_size) &&

	  nh.getParam("normalEstimation_radius_search", params.spinImage_compute_descriptors_params.normalEstimation_radius_search) &&
	  nh.getParam("spinImageEstimation_radius_search", params.spinImage_compute_descriptors_params.spinImageEstimation_radius_search) &&
	  nh.getParam("spinImageEstimation_image_width", params.spinImage_compute_descriptors_params.spinImageEstimation_image_width) &&

	  nh.getParam("recognition_threshold", params.spinImage_recognition_params.recognition_threshold) &&
	  nh.getParam("recognition_human_counter_threshold", params.spinImage_recognition_params.recognition_human_counter_threshold) &&
	  nh.getParam("recognition_models_descriptors_step", params.spinImage_recognition_params.recognition_models_descriptors_step) &&
	  nh.getParam("recognition_current_descriptors_step", params.spinImage_recognition_params.recognition_current_descriptors_step))
  {
	  ROS_INFO("Parameters imported.");
  }
  else
  {
	  ROS_ERROR("An error occurred while importing the parameters. Please check the parameter file.");
  }

  // Subscribe to and advertise the different topics.
  camera_sub = nh.subscribe (params.camera_topic, 1, &object_recognition::camera_callback, this);
  request_sub = nh.subscribe (params.request_topic, 1, &object_recognition::request_callback, this);
  cloud_pub = nh.advertise<PointCloud> ("processed_cloud", 1);
  marker_pub = nh.advertise<visualization_msgs::Marker>("visualization_marker", 1);
  request_pub = nh.advertise<std_msgs::Bool>(params.request_topic, 1, true);
  answer_pub = nh.advertise<std_msgs::Bool>(params.answer_topic, 1, true);
  human_counter_pub = nh.advertise<std_msgs::Float32>(params.human_counter_topic, 1, true);

  // Build the model library.
  model_library library;
  models = library.generate_library(params.models_directory_path, params.cloudFiltering_downsample_params, params.spinImage_compute_descriptors_params);

  // Initialize the counter of the published markers and the detected humans.
  number_of_markers_published = 0;
  human_counter.data = 0;
}


void object_recognition::camera_callback(const sensor_msgs::PointCloud2::ConstPtr& msg)
{
  // Process the incoming point cloud data if requested through a flag message.
  if (request.data)
  {
	  ROS_INFO("-------------------- NEW CALLBACK --------------------");

	  // Reset the flag and publish it.
	  request.data = false;
	  request_pub.publish(request);

	  // Convert the sensor_msgs to PCL data type.
	  PointCloud::Ptr cloud (new PointCloud);
	  pcl::fromROSMsg(*msg, *cloud);

	  // Filter the converted point cloud: first by downsampling it, then by applying a pass through filter.
	  cloud_filtering cf;
	  cloud = cf.downsample(cloud, params.cloudFiltering_downsample_params);
	  cloud = cf.filter(cloud, params.cloudFiltering_filter_params);

	  // Segment the filtered point cloud: first remove the planar elements, then extract the clusters.
	  cloud_segmentation cs;
	  std::vector<PointCloud::Ptr> clu_vec;
	  cloud = cs.planar_segmentation(cloud, params.cloudSegmentation_planar_segmentation_params);
	  clu_vec = cs.extract_clusters(cloud, params.cloudSegmentation_extract_clusters_params);

	  // Compute the spin image of each cluster, match it with the model library and publish the markers.
	  object current_obj;
	  spin_image si;
	  marker_color color;
	  marker_generator mar_gen;
	  int i = 0;
	  for (std::vector<PointCloud::Ptr>::const_iterator it = clu_vec.begin (); it != clu_vec.end (); ++it, ++i)
	  {
	    current_obj = si.recognition(si.compute_descriptors(*it, params.spinImage_compute_descriptors_params), models, params.spinImage_recognition_params);
	    if (current_obj == human)
	    {
	    	if (human_counter.data < 2)
	    	{
	    		human_counter.data += 1;
	    		human_counter_pub.publish(human_counter);
	    	}
	    	color.r = 0.0f;
	        color.g = 1.0f;
	        color.b = 0.0f;
	    }
	    else // unknown
	    {
	    	color.r = 1.0f;
	        color.g = 0.0f;
	        color.b = 0.0f;
	    }
	    marker_pub.publish(mar_gen.generate_marker(*it, params.marker_frame_id, number_of_markers_published + i, color));
	  }
	  number_of_markers_published += i;
	  ROS_INFO_STREAM("number_of_markers_published: " << number_of_markers_published);

	  // Publish the processed cloud.
	  cloud_pub.publish(*cloud);

	  // Set the flag and publish it.
	  answer.data = true;
	  answer_pub.publish(answer);
  }
}


void object_recognition::request_callback(const std_msgs::Bool::ConstPtr& msg)
{
	// Store the flag message.
	request = *msg;
}


int main(int argc, char** argv)
{
  // Initialize ROS and create the object recognition instance.
  ros::init(argc, argv, "object_recognition");
  object_recognition obj_rec;
  ros::spin();
  return 0;
}


