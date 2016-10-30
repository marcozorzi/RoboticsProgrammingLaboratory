/*
 * map_matching.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: antoine
 */

#include <localization/map_matching.h>


double MapMatching::updateSensor(const geometry_msgs::Pose& pose, const sensor_msgs::LaserScan& scan, const nav_msgs::OccupancyGrid& map, const ros::Publisher& local_map_pub, const int nb)
{
	// Create and initialize the local map.
	const int N = map.info.width * map.info.height;
	int* localMap = new int[N];
	for (int i = 0; i < N; ++i)
	{
		localMap[i] = -1;
	}
	initializeLocalMap(localMap, pose, scan, map);

	// Compute the weight of the given particle.
	double weight = std::max(computeCorrelation(localMap, map), 1e-100);

	// Publish the map for particles[0] for debugging purpose.
	if (nb == 0)
	{
		nav_msgs::OccupancyGrid lMap;
		lMap.header.frame_id = map.header.frame_id;
		lMap.header.stamp = ros::Time::now();
		lMap.info.resolution = map.info.resolution;
		lMap.info.width = map.info.width;
		lMap.info.height = map.info.height;
		lMap.info.origin = map.info.origin;
		for (int i = 0; i < map.info.width * map.info.height; ++i)
		{
			lMap.data.push_back(localMap[i]);
		}
		local_map_pub.publish(lMap);
	}

	delete [] localMap;
	localMap = 0;
	return weight;
}


void MapMatching::initializeLocalMap(int* localMap, const geometry_msgs::Pose& pose, const sensor_msgs::LaserScan& scan, const nav_msgs::OccupancyGrid& map)
{
	float x_p = pose.position.x, y_p = pose.position.y, theta_p = tf::getYaw(pose.orientation);

	// Initialize the map given the scan range values.
	int i = 0;
	double x, y;
	int x_index, y_index;
	for (float alpha = scan.angle_min; alpha <= scan.angle_max; alpha += scan.angle_increment, ++i)
	{
		if (scan.ranges[i] >= scan.range_min && scan.ranges[i] <= scan.range_max)
		{
			x = x_p + cos(theta_p + alpha) * scan.ranges[i];
			y = y_p + sin(theta_p + alpha) * scan.ranges[i];
			x_index = floor(x / map.info.resolution + 0.5);
			y_index = floor(y / map.info.resolution + 0.5);
			if (x_index >= 0 && x_index < map.info.width && y_index >= 0 && y_index < map.info.height)
			{
				localMap[y_index * map.info.height + x_index] = 100;
			}
		}
	}
}


double MapMatching::computeCorrelation(const int* localMap, const nav_msgs::OccupancyGrid& map)
{
	// Compute the correlation between the map and the local map.
	const int N = map.info.width * map.info.height;
	double correlation = 0;
	for (int i = 0; i < N; ++i)
	{
		if (localMap[i] != -1)
		{
			if (localMap[i] == map.data[i])
			{
				correlation += 1;
			}
		}
	}

	return correlation;
}


