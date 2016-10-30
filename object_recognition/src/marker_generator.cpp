/*
 * marker_generator.cpp
 *
 *  Created on: Nov 21, 2015
 *      Author: antoine
 */

#include <object_recognition/marker_generator.h>


visualization_msgs::Marker marker_generator::generate_marker(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cluster, const std::string& frame_id, int id, marker_color& color)
{
  pcl::PointXYZ min, max;
  pcl::getMinMax3D(*cluster, min, max);

  visualization_msgs::Marker marker;

  // Set the frame ID and timestamp.
  marker.header.frame_id = frame_id;
  marker.header.stamp = ros::Time::now();

  // Set the namespace and id for this marker.
  // Any marker sent with the same namespace and id will overwrite the old one
  marker.ns = "object_recognition";
  marker.id = id;

  // Set the marker type.
  marker.type = visualization_msgs::Marker::CUBE;

  // Set the marker action.
  marker.action = visualization_msgs::Marker::ADD;

  // Set the pose of the marker.
  marker.pose.position.x = (max.x + min.x) / 2;
  marker.pose.position.y = (max.y + min.y) / 2;
  marker.pose.position.z = (max.z + min.z) / 2;
  marker.pose.orientation.x = 0.0;
  marker.pose.orientation.y = 0.0;
  marker.pose.orientation.z = 0.0;
  marker.pose.orientation.w = 1.0;

  // Set the scale of the marker.
  marker.scale.x = (max.x - min.x);
  marker.scale.y = (max.y - min.y);
  marker.scale.z = (max.z - min.z);

  // Set the color
  marker.color.r = color.r;
  marker.color.g = color.g;
  marker.color.b = color.b;
  marker.color.a = 1.0; // must be non-zero!

  marker.lifetime = ros::Duration();

  return marker;
}


visualization_msgs::Marker marker_generator::clear_all_markers()
{
  visualization_msgs::Marker marker;

  // Set the marker action (3 stands for DELETEALL).
  marker.action = 3;

  return marker;
}


