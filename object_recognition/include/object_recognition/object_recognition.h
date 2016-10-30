/*
 * object_recognition.h
 *
 * Node for the object recognition.
 *
 *  Created on: Nov 20, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_OBJECT_RECOGNITION_H_
#define SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_OBJECT_RECOGNITION_H_


#include <ros/ros.h>
#include <pcl_ros/point_cloud.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Float32.h>
#include <object_recognition/cloud_filtering.h>
#include <object_recognition/cloud_segmentation.h>
#include <object_recognition/marker_generator.h>
#include <object_recognition/spin_image.h>
#include <object_recognition/model_library.h>
#include <object_recognition/parameters.h>


typedef pcl::PointCloud<pcl::PointXYZ> PointCloud;


class object_recognition
{
public:
	ros::NodeHandle nh;
	ros::Subscriber camera_sub;
	ros::Subscriber request_sub;
	ros::Publisher cloud_pub;
	ros::Publisher marker_pub;
	ros::Publisher request_pub;
	ros::Publisher answer_pub;
	ros::Publisher human_counter_pub;
	parameters params;
	std::vector<assigned_descriptors> models;
	std_msgs::Bool request, answer;
	std_msgs::Float32 human_counter;
	int number_of_markers_published;

	object_recognition();
	void camera_callback(const sensor_msgs::PointCloud2::ConstPtr& msg);
	void request_callback(const std_msgs::Bool::ConstPtr& msg);
};


#endif /* SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_OBJECT_RECOGNITION_H_ */
