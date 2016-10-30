note
	description: "Class of the 'go to goal' task, which controls the robot to get to a given position."
	author: "Marco Zorzi, Antoine Seewer"
	date: "08.11.2015"

class
	GO_TO_GOAL_BEHAVIOUR

inherit
	BEHAVIOUR

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (	odom_sig: separate ODOMETRY_SIGNALER;
							d_drive: separate DIFFERENTIAL_DRIVE;
							g_sig: separate GO_TO_GOAL_SIGNALER;
							obstacle_avoidance_signaler: separate OBSTACLE_AVOIDANCE_SIGNALER;
							r_group: separate THYMIO_RANGE_GROUP;
							s_sig: separate STOP_SIGNALER;
							general_parameters: separate MISSION_PARAMETERS;
							g_t_g_parameters: separate GO_TO_GOAL_PARAMETERS;
							o_a_parameters: separate OBSTACLE_AVOIDANCE_PARAMETERS)
			-- Create `Current' with given attributes.
		do
			create angle_pid.make
					-- Initialize controllers

			go_to_goal_sig := g_sig
					-- go to goal signaler

			stop_sig := s_sig
					-- create the stop signaler

			range_group := r_group
					-- pass the range sensors

			odometry_sig := odom_sig
					-- pass the odometry signaler

			diff_drive := d_drive
					-- pass the differential drive

			go_to_goal_parameters := g_t_g_parameters
					-- pass the go to goal parameters

			obstacle_avoidance_sig := obstacle_avoidance_signaler
					-- -- pass the obstacle avoidance signaler

			obstacle_avoidance_parameters := o_a_parameters
					-- pass the obstacle avoidance parameters

		end

feature -- Access

	start
			-- Start the task.
		local
			a, b: separate GO_TO_GOAL_CONTROLLER
					-- controllers for two separate cancellable loops

			c, d, e : separate OBSTACLE_AVOIDANCE_CONTROLLER
					-- controllers for three separate cancellable loops
		do
			create a.make (stop_sig, odometry_sig, go_to_goal_parameters)
			create b.make (stop_sig, odometry_sig, go_to_goal_parameters)
			create c.make (stop_sig, odometry_sig)
			create d.make (stop_sig, odometry_sig)
			create e.make (stop_sig, odometry_sig)

			sep_stop (stop_sig, False)
			sep_start (a, b, c, d, e)

		end

	stop
			-- Stop the behaviour.
		do
			sep_stop (stop_sig, True)
		end

feature -- Access

	sep_start (a, b: separate GO_TO_GOAL_CONTROLLER;
				c, d, e : separate OBSTACLE_AVOIDANCE_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (
				agent a.going_to_goal (
											go_to_goal_sig,			-- GO_TO_GOAL_SIGNALER
											stop_sig,				-- STOP_SIGNALER
											odometry_sig,			-- ODOMETRY_SIGNALER
											diff_drive,				-- DIFFERENTIAL_DRIVE
											angle_pid,				-- PID_CONTROLLER
											go_to_goal_parameters	-- GO_TO_GOAL_PARAMETERS
										))
			b.repeat_until_stop_requested (
				agent b.at_goal(
											go_to_goal_sig,			-- GO_TO_GOAL_SIGNALER
											stop_sig,				-- STOP_SIGNALER
											diff_drive,				-- DIFFERENTIAL_DRIVE
											go_to_goal_parameters	-- GO_TO_GOAL_PARAMETERS
										))
			c.repeat_until_stop_requested (
				agent c.boundary_following (
											obstacle_avoidance_sig,			-- OBSTACLE_AVOIDANCE_SIGNALER
											go_to_goal_sig,					-- GO_TO_GOAL_SIGNALER
											stop_sig,						-- STOP_SIGNALER
											odometry_sig,					-- ODOMETRY_SIGNALER
											range_group,					-- THYMIO_RANGE_GROUP
											diff_drive,						-- DIFFERENTIAL_DRIVE
											obstacle_avoidance_parameters	-- OBSTACLE_AVOIDANCE_PARAMETERS
											))
			d.repeat_until_stop_requested (
				agent d.recover_obstacle (
											obstacle_avoidance_sig,			-- OBSTACLE_AVOIDANCE_SIGNALER
											stop_sig,						-- STOP_SIGNALER
											range_group,					-- THYMIO_RANGE_GROUP
											diff_drive,						-- DIFFERENTIAL_DRIVE
											obstacle_avoidance_parameters	-- OBSTACLE_AVOIDANCE_PARAMETERS
											))
			e.repeat_until_stop_requested (
				agent e.transition_to_goal (
											obstacle_avoidance_sig,			-- OBSTACLE_AVOIDANCE_SIGNALER
											stop_sig,						-- STOP_SIGNALER
											odometry_sig,					-- ODOMETRY_SIGNALER
											range_group,					-- THYMIO_RANGE_GROUP
											diff_drive,						-- DIFFERENTIAL_DRIVE
											obstacle_avoidance_parameters	-- OBSTACLE_AVOIDANCE_PARAMETERS
										))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

feature {NONE} -- Implementation

	go_to_goal_parameters: separate GO_TO_GOAL_PARAMETERS
			-- class containing the go to goal parameters.

	go_to_goal_sig: separate GO_TO_GOAL_SIGNALER
			-- Current state of the go to goal controller.

	stop_sig: separate STOP_SIGNALER
			-- Signaler for stopping the tasks.

	odometry_sig: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.

	diff_drive: separate DIFFERENTIAL_DRIVE
			-- Object to control robot's speed.	

	angle_pid: separate PID_CONTROLLER
			-- PID controllers.

	range_group: separate THYMIO_RANGE_GROUP
			-- Horizontal range sensors.

	obstacle_avoidance_parameters: separate OBSTACLE_AVOIDANCE_PARAMETERS
			-- class containing the obstacle avoidance parameters.

	obstacle_avoidance_sig: separate OBSTACLE_AVOIDANCE_SIGNALER
			-- Current state of the obstacle avoidance controller.

end
