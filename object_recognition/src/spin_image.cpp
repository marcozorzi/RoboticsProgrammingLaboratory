/*
 * spin_image.cpp
 *
 *  Created on: Nov 23, 2015
 *      Author: antoine
 */

#include <object_recognition/spin_image.h>


pcl::PointCloud<SpinImage>::Ptr spin_image::compute_descriptors(const pcl::PointCloud<pcl::PointXYZ>::ConstPtr& cloud, const spinImage_compute_descriptors_parameters& params)
{
	// Object for storing the normals.
	pcl::PointCloud<pcl::Normal>::Ptr normals(new pcl::PointCloud<pcl::Normal>);
	// Object for storing the spin image for each point.
	pcl::PointCloud<SpinImage>::Ptr descriptors(new pcl::PointCloud<SpinImage>());

	// Estimate the normals.
	pcl::NormalEstimation<pcl::PointXYZ, pcl::Normal> normalEstimation;
	normalEstimation.setInputCloud(cloud);
	normalEstimation.setRadiusSearch(params.normalEstimation_radius_search);
	pcl::search::KdTree<pcl::PointXYZ>::Ptr kdtree(new pcl::search::KdTree<pcl::PointXYZ>);
	normalEstimation.setSearchMethod(kdtree);
	normalEstimation.compute(*normals);

	// Spin image estimation object.
	pcl::SpinImageEstimation<pcl::PointXYZ, pcl::Normal, SpinImage> si;
	si.setInputCloud(cloud);
	si.setInputNormals(normals);
	// Radius of the support cylinder.
	si.setRadiusSearch(params.spinImageEstimation_radius_search);
	// Set the resolution of the spin image (the number of bins along one dimension).
	// Note: you must change the output histogram size to reflect this.
	si.setImageWidth(params.spinImageEstimation_image_width);
	si.compute(*descriptors);

	return descriptors;
}

object spin_image::recognition(pcl::PointCloud<SpinImage>::Ptr descriptors, std::vector<assigned_descriptors> models, const spinImage_recognition_parameters& params)
{
	object obj = unknown;
	int human_counter = 0;
	double r;
	double threshold = params.recognition_threshold;
	int m_step = params.recognition_models_descriptors_step;
	int c_step = params.recognition_current_descriptors_step;

	// Iterate through all histograms of all models in the library and all histograms of the current cluster and compute their correlation.
	// If the correlation is greater than the threshold, increase the appropriate counter by 1.
	int m, c;
	for (std::vector<assigned_descriptors>::const_iterator it = models.begin (); it != models.end (); ++it)
	{
		for (m = 0; m < it->descriptors->size(); m += m_step)
		{
			for (c = 0; c < descriptors->size(); c += c_step)
			{
				r = compute_correlation(it->descriptors->at(m), descriptors->at(c));
				if (r > threshold)
				{
					obj = it->obj;
					if (obj == human)
					{
						++human_counter;
					}
				}
			}
		}
	}

	// Set the object type if the corresponding counter was triggered often enough.
	ROS_INFO_STREAM("human_counter: " << human_counter);
	if (human_counter > params.recognition_human_counter_threshold)
	{
		obj = human;
		ROS_INFO("Human recognized.");
	}

	return obj;
}

double spin_image::compute_correlation(SpinImage p, SpinImage q)
{
	double r;
	int n = 153; // "p.descriptorSize()" can not be resolved?...
	double sum_pq = 0;
	double sum_p = 0;
	double sum_q = 0;
	double sum_pp = 0;
	double sum_qq = 0;
	for (int i = 0; i < n; ++i)
	{
		sum_pq += p.histogram[i] * q.histogram[i];
		sum_p += p.histogram[i];
		sum_q += q.histogram[i];
		sum_pp += p.histogram[i] * p.histogram[i];
		sum_qq += q.histogram[i] * q.histogram[i];
	}
	r = (n * sum_pq - sum_p * sum_q) / sqrt((n * sum_pp - sum_p * sum_p) * (n * sum_qq - sum_q * sum_q));

	return r;
}


