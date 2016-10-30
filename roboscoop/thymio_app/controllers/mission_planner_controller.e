note
	description: "Class that plans the mission of the robot"
	author: "Marco Zorzi"
	date: "27.11.2015"

class
	MISSION_PLANNER_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP
	EXECUTION_ENVIRONMENT
	TRIGONOMETRY_MATH

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER)
			-- Create Current and assign given attributes.
		do
			stop_signaler := s_sig
			create poses_x.make (0)
			create poses_y.make (0)
		end

feature

	check_goal (robot_sig: separate ROBOT_SIGNALER;
				diff: separate DIFFERENTIAL_DRIVE;
				go_to_goal_sig: separate GO_TO_GOAL_SIGNALER;
				s_sig: separate STOP_SIGNALER;
				o_sig: separate ODOMETRY_SIGNALER;
				path_ros: separate PATH_SIGNALER;
				parameters: separate PARAMETERS)
			-- Check wether the robot is just following the goal or it is
			-- doing something else
		require
			robot_sig.is_localized and
			path_ros.data.poses.count > 0 and
			not robot_sig.is_stop_requested
		local
			i, n: INTEGER
			aaa: REAL_64
			ppp: POINT_MSG
		do
			if path_ros.data.poses.count > 0 and not robot_sig.is_path_ready then
				robot_sig.set_is_path_ready (True)
			end

			if not robot_sig.is_go_to_goal_started then
				robot_sig.set_is_go_to_goal_started (True)
						-- prepare go to goal execution
				from
						--loop to extract poses from the path message
					i := 1
				until
					i > path_ros.data.poses.count
				loop
					poses_x.force (get_x(path_ros, i))
					poses_y.force (get_y(path_ros, i))
							-- extract poses
					i := i + 1
				end

				remove_last_pose()
						-- remove the starting goal to avoid being at goal
				poses_x.finish
				poses_y.finish
				go_to_goal_sig.set_goal (poses_x.item, poses_y.item)
						-- we set the goal to be the last pose, so the closest point
						-- to the starting position
				poses_x.remove
				poses_y.remove
						-- when a pose is assigned, we remove it from the queue
				go_to_goal_sig.set_is_at_goal (False)
			end

			if robot_sig.is_obstacle_avoidance then
					-- strategy for obstacle avoidance
				go_to_goal_sig.set_is_going_to_goal (False)
			else
				if robot_sig.is_obstacle_avoidance_done then
					robot_sig.set_is_obstacle_avoidance_done (False)
							-- Remove n elements if we find an obstacle
					n := parameters.go_to_goal_parameters.jump_n_points_after_obstacle
					if poses_x.count > n + 1 then
						from
							i := 1
						until
							i > n
						loop
							remove_last_pose()
							i := i + 1
						end
					end
				end
				go_to_goal_sig.set_is_going_to_goal (True)
			end

			if robot_sig.is_go_to_goal_required then
					-- object recognition asks to go to goal
				go_to_goal_sig.set_is_going_to_goal (True)
				robot_sig.clear_all_states
				robot_sig.set_is_go_to_goal (True)
			end

			if robot_sig.is_object_recognition_activated then
					-- stop if object recognition
					diff.stop;
				go_to_goal_sig.set_is_going_to_goal (False)
			end

			go_to_goal_sig.compute_error (o_sig.x,o_sig.y, o_sig.theta)
			if go_to_goal_sig.distance_error < parameters.go_to_goal_parameters.change_goal_threshold and poses_x.count > 0 then

				poses_x.finish
				poses_y.finish
					-- take the last unset position

				change_goal(go_to_goal_sig, poses_x.item, poses_y.item)
					-- change the temporary goal

				go_to_goal_sig.compute_error(o_sig.x, o_sig.y, o_sig.theta)
					-- call a calculation of the error

				poses_x.remove
				poses_y.remove
					-- remove the position transmitted
			end

			if go_to_goal_sig.is_at_goal then
				diff.set_velocity (0, 0)
				robot_sig.clear_all_states
				robot_sig.set_is_stop_requested (True)
				robot_sig.set_is_at_goal (True)
				s_sig.set_stop_requested (True)
			end
		end

	obstacle_avoidance (robot_sig: separate ROBOT_SIGNALER;
						obstacle_avoidance_signaler: separate OBSTACLE_AVOIDANCE_SIGNALER;
						s_sig: separate STOP_SIGNALER;
						parameters: separate PARAMETERS)
				-- starts the task to avoid obstacles
			require
				robot_sig.is_path_ready and
				robot_sig.is_localized and
				not robot_sig.is_object_recognition_activated and
				not robot_sig.is_stop_requested
			do
				if
					obstacle_avoidance_signaler.is_transition_to_goal or
					obstacle_avoidance_signaler.is_boundary_following or
					obstacle_avoidance_signaler.is_recover_obstacle
							-- if the obstacle avoidance signaler has no state
							-- it means we need to go to goal
				then
					robot_sig.set_is_obstacle_avoidance (True)
				else
					if robot_sig.is_obstacle_avoidance then
						robot_sig.set_is_obstacle_avoidance_done (True)
					end
					robot_sig.set_is_obstacle_avoidance (False)
				end
			end

	check_goal_recognition (robot_sig: separate ROBOT_SIGNALER;
								go_to_goal_sig: separate GO_TO_GOAL_SIGNALER;
								o_sig: separate ODOMETRY_SIGNALER;
								goals: separate LIST[POINT_MSG];
								s_sig: separate STOP_SIGNALER;
								diff: separate DIFFERENTIAL_DRIVE;
								object_recognition_publisher: separate OBJECT_RECOGNITION_COMMUNICATOR;
								object_recognition_subscriber: separate BOOLEAN_SIGNALER;
								localization_parameters: separate LOCALIZATION_PARAMETERS;
								mission_parameters: separate MISSION_PARAMETERS)
				-- starts to listen for when to enable object recognition
			local
				min_dist : REAL_64
				obj_flag: BOOLEAN
				obj_rec_answer_ack: OBJECT_RECOGNITION_COMMUNICATOR
						-- object that publishes flag messages to ROS
			do
				separate object_recognition_subscriber as o do
					obj_flag :=	o.value.data
				end

				if
					robot_sig.is_object_recognition_activated and
					obj_flag
				then
							-- if we are here it means that object recognition was
							-- finished and we can go to goal
					create obj_rec_answer_ack.make_with_topic ({THYMIO_TOPICS}.object_recognition_answer)
							-- Creates object recognition publisher
					obj_rec_answer_ack.publish_flag(False)
							-- acknowledge that flag has been received
					robot_sig.clear_all_states
					robot_sig.set_is_object_recognition_activated(False)
					robot_sig.set_is_go_to_goal_required (True)
					goals.start
					goals.remove
							-- remove the goal of this observation
					done := false
				else
					min_dist := compute_closest_object(goals, o_sig.x + mission_parameters.x_start, o_sig.y+mission_parameters.y_start)
							-- check closest goal to trigger the object recognition

					if min_dist < localization_parameters.object_distance_threshold and not done then
							-- if I'm I close enough to the object recognition point, do it
						done := true
						diff.set_velocity(0,0)
						go_to_goal_sig.clear_all_states
						robot_sig.clear_all_states
						robot_sig.set_is_object_recognition_activated(True)
						separate object_recognition_publisher as o do
							o.publish_message
						end

					end
				end
			end

feature {NONE}

	done: BOOLEAN

	compute_closest_object(goals: separate LIST[POINT_MSG]; pos_x, pos_y: REAL_64):REAL_64
		local
		i : INTEGER_32
		min_dist, dist : REAL_64

		do
			min_dist := {REAL_64}.positive_infinity
			from
				i := 1
			until
				i > goals.count
			loop
				dist := sqrt (squared_distance_2d (goals.at (i).x, goals.at (i).y, pos_x, pos_y))
				if dist < min_dist then
					min_dist := dist
				end
				i:= i+1
			end

			Result := min_dist
		end

	change_goal(go_to_goal_sig: separate GO_TO_GOAL_SIGNALER; x, y: REAL_64)
		do
			go_to_goal_sig.set_goal(x,y)

		end

	remove_last_pose()
		do
			poses_x.finish
			poses_y.finish
			poses_x.remove
			poses_y.remove
		end

	find_min_error (odom: separate ODOMETRY_SIGNALER; goals: separate LIST[POINT_MSG]; x_start, y_start: REAL_64):REAL_64
			-- Computes the minimum distance to the goals
		local
			errors: ARRAYED_LIST[REAL_64]
			error, x_goal, y_goal, x_robot, y_robot, return : REAL_64
			i : INTEGER
		do
			x_robot := odom.x + x_start
			y_robot := odom.y + y_start

			from
				i := 1
			until
				i > goals.count
			loop
				x_goal := goals.at (i).x
				y_goal := goals.at (i).y
				error :=  sqrt (squared_distance_2d (x_goal, y_goal, x_robot, y_robot))
				if i = 1 then
					return := error
				else
					if error < return then
						return := error
					end
				end
				i := i + 1
			end
			Result := return

		end

feature{NONE} -- Attributes

	poses_x, poses_y: ARRAYED_LIST[REAL_64]

	count : INTEGER

feature{NONE} -- Auxiliary
 -- Tried everything to fix this, still not working. :(
----------------------------------- X ---------------------------------------
	get_x(path_ros: separate PATH_SIGNALER; i: INTEGER): REAL_64
		do
			Result :=  get_pose_ith_x(path_ros.pose_i_th (i))
		end

	get_pose_ith_x(a_pose: separate POSE_STAMPED_MSG ): REAL_64
		do
			Result := get_position_x(a_pose.pose)
		end

	get_position_x(a_pose: separate POSE_MSG) : REAL_64
		do
			Result := get_final_x(a_pose.position)
		end

	get_final_x(a_pos: separate POINT_MSG): REAL_64
		do
			Result:= a_pos.x
		end
------------------------------------------------------------------------------------
----------------------------------- Y ---------------------------------------
	get_y(path_ros: separate PATH_SIGNALER; i: INTEGER): REAL_64
		do
			Result :=  get_pose_ith_y(path_ros.pose_i_th (i))
		end

	get_pose_ith_y(a_pose: separate POSE_STAMPED_MSG ): REAL_64
		do
			Result := get_position_y(a_pose.pose)
		end

	get_position_y(a_pose: separate POSE_MSG) : REAL_64
		do
			Result := get_final_y(a_pose.position)
		end

	get_final_y(a_pos: separate POINT_MSG): REAL_64
		do
			Result:= a_pos.y
		end
------------------------------------------------------------------------------------

end
