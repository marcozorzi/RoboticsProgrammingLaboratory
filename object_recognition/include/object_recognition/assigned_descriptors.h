/*
 * assigned_descriptors.h
 *
 * Struct containing the descriptors of a spin image and its corresponding object type.
 *
 *  Created on: Nov 23, 2015
 *      Author: antoine
 */

#ifndef SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_ASSIGNED_DESCRIPTORS_H_
#define SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_ASSIGNED_DESCRIPTORS_H_


typedef pcl::Histogram<153> SpinImage;
enum object {unknown, human, duck};


struct assigned_descriptors
{
	pcl::PointCloud<SpinImage>::Ptr descriptors;
	object obj;
};


#endif /* SEEWERA_ECLIPSE_INCLUDE_ECLIPSE_ASSIGNED_DESCRIPTORS_H_ */
