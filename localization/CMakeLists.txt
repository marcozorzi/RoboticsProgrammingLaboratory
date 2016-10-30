cmake_minimum_required(VERSION 2.8.3)
project(localization)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
)

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)

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
#  LIBRARIES localization
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
)

## Declare a C++ executable
add_executable(localization_node src/localization_node.cpp
  src/particle_filter_localization.cpp
  src/sample_odometry_motion_model.cpp
  src/map_matching.cpp
  src/stochastic_universal_sampling.cpp
  src/random_sampling.cpp
  src/particles_publisher.cpp
)

add_executable(odometry_transform_node src/odometry_transform_node.cpp
  src/sample_odometry_motion_model.cpp
)

## Specify libraries to link a library or executable target against
target_link_libraries(localization_node
  ${catkin_LIBRARIES}
)

target_link_libraries(odometry_transform_node
  ${catkin_LIBRARIES}
)
