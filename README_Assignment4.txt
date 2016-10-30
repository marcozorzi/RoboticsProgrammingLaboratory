README - Assignment 4: Object Recognition
author: Zorzi Marco & Seewer Antoine
date: 17.12.2015


-- Functionality


The code of this assignment is separated in two distint parts, a Roboscoop application taking care of conveying the robot to goal points and a C++ executable responsible of the object recognition and localization.

This application implements a set of 5 tasks for a Thymio Robot which are the following:
1) localize in the environment
1) planning a path from the localized start position and one or multiple goals location, given a map with known obstacles.
2) steering the robot towards the goal, following the calculated path.
3) avoiding unknown obstacles which are in the way.
4) requesting via a ROS message an object recognition from the C++ node at some given positions.


The application begins by waiting for the ros node to localize and to help the process the robot moves in circles. After that, the robot starts loading the map and creating a graph related to the map. Each nodes will have an edge with its neighbours only if the neighbour is a free cell (no obstacle). In case of an obstacle, the node will not be connected. Then, we use graph search algorithms to find a path between two nodes: this search is done with the A* (A star) algorithm. Then, the path is published as a series of points which are sequentially used as temporary goal positions by the robot. While following the path, the robot also avoids the obstacles that are not present in the map (unknown obstacles). We also check for nodes where we need to detect obstacles so the robot can stop and perform the recognition.

- The C++ executable (obstacle_recognition and localization):

This executable start a ROS node which receive the point cloud stream from the Carmine 1.09 sensor and wait for the flag message of the Roboscoop application to process it. To achieve object recognition, the point cloud is at first filtered and segmented and the spin image of the different resulting clusters is then computed to be compared to the precomputed models library. After the matching, a bounding box is diplayed around the recognized object in RViz, which takes a different color for each type of object (human = green, duck = blue and unknown = red) and the flag message is resetted to tell the Roboscoop application that the recognition is finished.

The localization node uses the odometry of the robot, a laser scan and a given map of the environment to localize the robot. The method used here is called Particle Filter Localization, which generates a set of random possible states of the robot in the environment (particles) and updates the iteratively to localize the robot. Its algorithm can be described in three big steps: motion update, sensor update and resampling. In our case, the motion update is implemented as a Sample Odometry Motion Model, which uses the robot odometry plus some noise to estimate the particles' motion. Then the sensor update compute a local map for each particle given the laser scan ranges and matches them with the given map to weight the different particles. The last step, resampling, just rebuild a set of particles for the next iteration picking among the existing one according to their weight (Here with the help of Stochastic Universal Sampling methods). In order to enable the robot to recover from a wrong pose estimation or to deal with the kidnapped robot problem, some particles can be replaces by random samples after those three steps.

-- Usage


1) Connect the robot and the Carmine 1.09 sensor to the computer by USB (Carmine 1.09 sensor only supports USB 2.0) or with wifi modules.

2) Start roscore in your terminal:

   roscore

3) Launch the launch file for search and rescue. The required command is:
   
   roslaunch roboscoop_ros search_and_rescue.launch

4) Start up Eiffel Studio by the following terminal command:
   
   ec -gui

   In the pop up window (alternatively select File/Open) select "add Project" and navigate to /roboscoop/thymio_app/thymio_app.ecf and click "OK". The project loads in Eiffel Studio.

5) Adjust parameters in files inside the folder

   roboscoop/thymio_app/parameter_files

   and save the edited files.

6) Click "Run" in EiffelStudio. The robot will compute the path and drive to the desired goal positions avoiding obstacles.

10) To stop the application press "Stop" in Eiffelstudio.



-- File/directory structure

- Roboscoop

In the roboscoop directory:

* roboscoop_lib - Library for the THYMIO II robot
* roboscoop_ros - ROS Library
* thymio_app: Contains all specific files for the APP

In the roboscoop/thymio_app directory:

FOLDERS
* /actuator - Classes to control the robots different actuators
* /behaviours - Specifies all routine details to make the robot avoid and follow outlines of obstacles. Decides which routine should be started when near an obstacle. It contains all possible behaviors the robot can complete when an obstacle is detected.
* /communication - Class to connect Thymio to ROS and for internal and external communications
* /controllers - Classes to control the robots position
* /graph - Classes of behaviors implemented in this project. To each behavior belongs a signaler for specific states of the behavior.
* /graph/graph_search - Classes to control the robots position
* /graph/graph_models - Specifies all routine details to move the robot to the goal position. Maps the sensor values to the appropiate PID controllers. In charge of the robots behavior when no obstacle detected.
* /parameter_files: contains the parameters to pass
* /parameters: contains the parameter classes
* /parsers: parsers for classes of different objects
* /robot - THYMIO_ROBOT class abstracting hardware and available behaviors.
* /sensor - Classes evaluating ground- and range sensors of Thymio II robot.
*/ signalers: take care of communication between functions
* /util - Containing classes that serve the controllers with specific calculations or parameter storage.

FILES
* app.e - main application file of the project
* thymio_app.ecf - Project settings for Eiffel Studio
* /behaviours/go_to_goal_behaviour.e: creates the necessary separate objects and starts the go to goal behaviour
* /behaviours/mission_planner_behaviour.e: creates the necessary separate objects and starts the mission planner behaviour
* /behaviours/obstacle_avoidance.e: this creates the necessary separate objects and starts the obstacle avoidance behaviour
* /behaviours/path_planning.e: this creates the necessary separate objects and starts the path finder
* /communication/thymio_topics.e: collection of all ROS topics
* /communication/path_planner_communicator.e: saves the state when the path is found and takes care of publishing the path once it is ready
* /communication/object_recognition_communicator.e: deal with the communication with the C++ node
* /controllers/go_to_goal_controller.e - Specifies all routine details to move the robot to the goal position. Maps the sensor values to the appropiate PID controllers. In charge of the robots behavior when no obstacle detected.
* /controllers/obstacle_avoidance_controller.e - Specifies all routine details to make the robot avoid and follow outlines of obstacles. Decides which routine should be started when near an obstacle. It contains all possible behaviors the robot can complete when an obstacle is detected.
* /controllers/pid_controller - Generall PID-controller class with anti-reset-windup. Parameter class for PID-Controller.
* /controllers/ path_planning_controller.e : controls the path planning task
* /controllers/robot_controller.e: controls high level robot tasks
* /graph/graph_models/grid_builder.e: in this class we compute all the actions to find the path. We read the map, compute the graph and, finally, set up the communciator to publish the path
* /graph/graph_models/grid_connectivity.e: In this class we specify the connectivity strategies of the node.
* /graph/graph_search/graph_search.e: deferred class that declares a search function
* /graph/graph_search/a_star_search.e: A* algorithm implementation. The class was thought to be adaptable to different nodes and the result seems acceptabe, but the implementation turned out to be tough and my code, although roubust enough, is very slow probably because I used complicated structures instead of a hash table
* /graph/graph_search/comparable_node.e: wrapper to use graph nodes in the heap priority queue
* /graph/graph_search/euclidian_cost.e: particular instance that computes the euclidian distance of two spatial graph nodes
* localization.e: starts the localization controller to listen to ros.
* /controller/localization_controller.e: implements a cancellable control loop to perform localization tasks.
* ./controllers/light_controller.e: sets the lights given the number of recognized humans

- C++

In object_recognition:
* CMakeLists.txt
* package.xml
In object_recognition/launcher:
* object_recognition.launch - the launcher
In object_recognition/include/object_recognition:
* assigned_descriptors.h - struct containing the descriptors of a spin image and its corresponding object type
* cloud_filtering.h - class implementing the cloud filtering methods
* cloud_filtering_parameters.h - structs containing the cloud filtering parameters
* cloud_segmentation.h - class implementing the cloud segmentation methods
* cloud_segmentation_parameters.h - structs containing the cloud segmentation parameters
* marker_color.h - struct containing the RGB color components for the marker
* marker_generator.h - class dealing with the marker messages used to display the bounded boxes around recognized objects
* model_library.h - class generating the model library from the PCD files
* object_recognition.h - node for the object recognition
* parameters.h - struct containing the parameters
* spin_image.h - class implementing the calculations for the spin images
* spin_image_parameters.h - structs containing the spin image parameters
In object_recognition/src:
* object_recognition.cpp - the executable
* cloud_filtering.cpp
* cloud_segmentation.cpp
* marker_generator.cpp
* model_library.cpp
* spin_image.cpp
* tf_transform_broadcaster.cpp - separate executable broadcasting tf transform for RViz
In object_recognition/parameters:
*object_recognition_parameters.yaml


In the localization/launcher:
* localization.launch - the launcher
In the localization/parameters:
* localization.yaml - the parameter file
In the localization/include/localization:
* localization.h - abstract class for localization algorithm
* particle_filter_localization.h - class implementing the Particle Filter Localization algorithm
* motion_update.h - abstract class for the motion update
* sample_odometry_motion_model.h - class implementing the Sample Odometry Motion Model
* sensor_update.h - abstract class for the sensor update
* map_matching.h - class implementing the Map Matching and returning the particle weight
* resample.h - abstract class for the resampling
* stochastic_universal_sampling.h - class implementing the Stochastic Universal Sampling method
* random_sampling.h - class implementing the random particle replacement to deal with unaccurate pose prediction or the kidnapped robot problem
* publisher.h - abstract class for publisher
* particles_publisher.h - class implementing the particles publisher
* weighted_particle.h - struct containing a particle and its weight
* parameters.h - struct containing the parameters
* localization_parameters.h - struct containing the localization parameters
* motion_update_parameters.h - struct containing the motion update parameters
* odometry_transform_node.h - node publishing a new odometry taking into account the start pose found by the localization.
In the localization/src:
* localization_node.cpp - the executable
* particle_filter_localization.cpp
* sample_odometry_motion_model.cpp
* map_matching.cpp
* stochastic_universal_sampling.cpp
* random_sampling.cpp
* particles_publisher.cpp
* odometry_transform_node.cpp


-- How does it work?

- Roboscoop

The Roboscoop application (APP) creates a ROS node and an instance of THYMIO_ROBOT, a LOCALIZATION and a PATH PLANNING. The robot class initializes the robot with all it's actuators, sensors and behaviors. 
First of all the APP parses the parameters from the files and given an array of goals to go to and goals to recognize objects, it waits for its location and it computes a path that goes through all of them.
The Thymio robot class then starts two behaviours:
1) GO_TO_GOAL: follows the path while avoiding obstacles
2) MISSION_PLANNER: plans and checks the mission and asking other nodes for other tasks (in our case, the object recognition).
The overall strategy is to stop before reaching the goal to visit in order to have a better shot at object recognition. The mission planner checks the position of the robot and, when required, triggers the object recognition through a boolean messagge appositely created in Eiffel.
Once the recognition node replies that the recognition is done we move on to the next goal location.

- C++

The launcher file for the object recognition creates three nodes, the one processing the point cloud and a tf transform broadcaster for displaying everything correctly in RViz and one for localization. The object recognition node receive via callbacks the sensor input and processes it when required from the main Roboscoop application (flag). To do so, it first downsample the cloud, before filtering it using a pass through filter for the depth. After that, it performs a planar segmentation and remove the corresponding points before extracting the clusters of interest. It then computes for each clusters its spin images and match it to the models library which is computed at the creation of the executable object (constructor). Finally it publishes a marker messages of the appropriated color (human = green, duck = blue and unknown = red), before resetting the flag and waiting for the next call.

-- Limitations and potential improvements
The C++ node should be made more generic.

The bugs of the previous assignments prevented us to improve the SOLID principles of the previous code. Currently, we have two major points that would need to be fixed:

1) Obstacle avoidance is still thymio specific.
2) A star is still not generic

These were the improvements made
- improved single responsabilities of new classes
- simplified the mission controller
- improved structure with new code
- Simplified mission planner controller and made the object recognition interaction very robust
- Checked that errors in the files are handled correctly by the parser
