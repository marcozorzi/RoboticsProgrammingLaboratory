note
	description: "Controller in charge of the obstacle avoidance while going to goal."
	author: "Marco Zorzi, Antoine Seewer"
	date: "19.10.2015"

class
	OBSTACLE_AVOIDANCE_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP
	EXECUTION_ENVIRONMENT -- needed for sleep()
	TRIGONOMETRY_MATH

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER; o_sig: separate ODOMETRY_SIGNALER)
			-- Create Current and assign given attributes.
		do
			stop_signaler := s_sig
			create obstacle_position.make_empty
			create obstacle_sig.make
			left_radius := False
				-- Indicator if the saved position was left once to avoid detecting the same position right again
			same_obstacle := False
		end

feature -- Implementation

	boundary_following (obstacle_avoidance_sig: separate OBSTACLE_AVOIDANCE_SIGNALER;
						go_to_goal_sig: separate GO_TO_GOAL_SIGNALER;
						s_sig: separate STOP_SIGNALER;
						o_sig: separate ODOMETRY_SIGNALER;
						r_sig: separate THYMIO_RANGE_GROUP;
						drive: separate DIFFERENTIAL_DRIVE;
						obstacle_avoidance_parameters: separate OBSTACLE_AVOIDANCE_PARAMETERS)
			-- Follows the wall.
		require
			(r_sig.is_obstacle_in_front and
			not obstacle_avoidance_sig.is_transition_to_goal and
			not obstacle_avoidance_sig.is_goal_unreachable and
			not s_sig.is_stop_requested)
		local
			transition_available: BOOLEAN
					-- Indicating if condition to change to transition mode are fullfiled
		do
			if not obstacle_avoidance_sig.is_boundary_following or obstacle_avoidance_sig.is_recover_obstacle then
					-- set the state when entering boundary_following the 1st time or if obstacle recovered.
				if not obstacle_avoidance_sig.is_recover_obstacle then
					go_to_goal_sig.compute_error (o_sig.x, o_sig.y, o_sig.theta)
					go_to_goal_sig.update_min_distance
				end
				obstacle_avoidance_sig.clear_all_states
				obstacle_avoidance_sig.set_is_boundary_following (True)
			end

			if not r_sig.is_only_one_front_sensor_active then
				-- Check if two sensors active, needed for heading calculation
				drive.set_velocity (obstacle_avoidance_parameters.boundary_following_speed,
									obstacle_sig.compute_two_sensor_angular_speed(obstacle_avoidance_parameters.desired_distance_from_wall, r_sig))

			else -- only one sensor active

				r_sig.save_last_sensor_active
				drive.set_velocity (obstacle_avoidance_parameters.boundary_following_speed,
									obstacle_sig.compute_one_sensor_angular_speed(obstacle_avoidance_parameters.desired_distance_from_wall, r_sig))
						-- Set drive speed
			end

					go_to_goal_sig.compute_error (o_sig.x, o_sig.y, o_sig.theta)

			if (go_to_goal_sig.distance_error < go_to_goal_sig.min_distance) then
				obstacle_avoidance_sig.set_is_transition_to_goal (True)
				go_to_goal_sig.update_min_distance
					-- update minimal distance ever reached.
			end
		end

	recover_obstacle (obstacle_avoidance_sig: separate OBSTACLE_AVOIDANCE_SIGNALER;
						s_sig: separate STOP_SIGNALER;
						r_sig: separate THYMIO_RANGE_GROUP;
						drive: separate DIFFERENTIAL_DRIVE;
						obstacle_avoidance_parameters: separate OBSTACLE_AVOIDANCE_PARAMETERS)
			-- Turn the robot towards the last known wall position if no range sensor data available anymore and was wall following
			-- Used to turn around tight corners where sensors don't see the obstacle anymore.
		require
			(not r_sig.is_obstacle_in_front and
					-- no obstacles seen
			obstacle_avoidance_sig.is_boundary_following and
					-- state is boundary following
			not s_sig.is_stop_requested)
		local
			local_angular_speed: REAL_64
		do

			if not obstacle_avoidance_sig.is_recover_obstacle then
						-- If entering the first time, set state
				obstacle_avoidance_sig.set_is_recover_obstacle (False)
				obstacle_avoidance_sig.set_is_transition_to_goal (True)
				turning_power := 1
						-- Variable to adjust how fast the robot should turn towards last known wall position
			end

			if turning_power < obstacle_avoidance_parameters.recover_turning_power_max then						-- limit max. turning speed
				turning_power := turning_power + obstacle_avoidance_parameters.recover_turning_power_increment	-- increase linearly
			end

			local_angular_speed := turning_power.power (obstacle_avoidance_parameters.recover_turning_power_power) * obstacle_avoidance_parameters.recover_turning_power_multiplicator

			if local_angular_speed < obstacle_avoidance_parameters.recover_local_angular_speed_threshold then
					-- Turn robot a bit away from wall on begin of turn to avoid camera collison
				drive.set_velocity (obstacle_avoidance_parameters.recover_local_anti_collision_forward_speed, - obstacle_sig.get_wall_position(r_sig) * obstacle_avoidance_parameters.recover_local_anti_collision_angular_speed_multiplicator)
			else
				drive.set_velocity (obstacle_avoidance_parameters.boundary_following_speed, obstacle_sig.get_wall_position(r_sig) * local_angular_speed)
					-- increase turning power over time
			end
		end

	transition_to_goal (obstacle_avoidance_sig: separate OBSTACLE_AVOIDANCE_SIGNALER;
						s_sig: separate STOP_SIGNALER;
						o_sig: separate ODOMETRY_SIGNALER;
						r_sig: separate THYMIO_RANGE_GROUP;
						drive: separate DIFFERENTIAL_DRIVE;
						obstacle_avoidance_parameters: separate OBSTACLE_AVOIDANCE_PARAMETERS)
			-- Transition to the 'go to goal' task.
		require
			(not obstacle_avoidance_sig.is_recover_obstacle and
			obstacle_avoidance_sig.is_transition_to_goal and
			not obstacle_avoidance_sig.is_goal_unreachable and
			not s_sig.is_stop_requested)
		do
			if obstacle_avoidance_sig.is_boundary_following then	-- if boundary following started the state --> take over state
				obstacle_avoidance_sig.clear_all_states				-- needed as obstacle is still seen --> boundary_following would kick in right again
				obstacle_avoidance_sig.set_is_transition_to_goal (True)
			end
			if r_sig.is_obstacle_in_front then -- still near wall
				drive.set_velocity (obstacle_avoidance_parameters.boundary_following_speed, -obstacle_sig.get_wall_position(r_sig)) -- turn away from wall until no obstacle seen
			else -- no obstacle seen
				obstacle_avoidance_sig.clear_all_states
			end
		end

feature {NONE}

	turning_power, obst_wall_heading, starting_x, starting_y: REAL_64
			-- Variables to store values required over several iterations
			-- Variable to store heading of wall of obstacle detection, Parameter speed setting

	obstacle_sig: OBSTACLE_AVOIDANCE_UTIL
			-- Calls all the functions for the obstacle avoidance	

	obstacle_position: POINT_MSG
			-- Variable to store position of obstacle detection

	last_boundary_following_state, last_recover_obstacle_state, same_obstacle, last_recover_state, left_radius: BOOLEAN
			-- Variable to store last boundary following state. Required for unreachable goal.

end
