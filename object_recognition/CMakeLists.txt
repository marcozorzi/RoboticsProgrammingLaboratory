cmake_minimum_required(VERSION 2.8.3 FATAL_ERROR)
project(object_recognition)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  sensor_msgs
  pcl_conversions
  pcl_ros
)

## System dependencies are found with CMake's conventions
find_package(PCL 1.7 REQUIRED COMPONENTS)

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
  INCLUDE_DIRS include
#  LIBRARIES object_recognition
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${roscpp_INCLUDE_DIRS}
  ${PCL_INCLUDE_DIRS}
)

## Declare a C++ executable
add_executable(object_recognition
  src/object_recognition.cpp
  src/cloud_filtering.cpp
  src/cloud_segmentation.cpp
  src/marker_generator.cpp
  src/spin_image.cpp
  src/model_library.cpp
)

## Specify libraries to link a library or executable target against
target_link_libraries(object_recognition
  ${catkin_LIBRARIES}
  ${roslib_LIBRARIES}
  ${PCL_LIBRARIES}
)