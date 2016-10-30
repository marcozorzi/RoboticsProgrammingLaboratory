/*
 * marker_generator.h
 *
 * Class dealing with the marker messages used to display the bounded boxes around recognized objects.
 *
 *  Created on: Nov 21, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_MARKER_GENERATOR_H_
#define SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_MARKER_GENERATOR_H_


#include <pcl_ros/point_cloud.h>
#include <pcl/common/common.h>
#include <visualization_msgs/Marker.h>
#include <object_recognition/marker_color.h>


class marker_generator
{
public:
	visualization_msgs::Marker generate_marker(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cluster, const std::string& frame_id, int id, marker_color& color);
	visualization_msgs::Marker clear_all_markers();
};


#endif /* SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_MARKER_GENERATOR_H_ */
