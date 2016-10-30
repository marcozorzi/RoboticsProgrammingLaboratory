note
	description: "Behaviour that checks if the path is ready and then updates the goal location"
	author: "Marco Zorzi"
	date: "27.11.2015"

class
	MISSION_PLANNER_BEHAVIOUR

inherit
	BEHAVIOUR

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (	g_sig: separate GO_TO_GOAL_SIGNALER;
							ob_av_sig: separate OBSTACLE_AVOIDANCE_SIGNALER;
							r_sig: separate ROBOT_SIGNALER;
							o_sig: separate ODOMETRY_SIGNALER;
							s_sig: separate STOP_SIGNALER;
							diff: separate DIFFERENTIAL_DRIVE;
							some_goals: separate LIST[POINT_MSG];
							p_sig: separate PATH_SIGNALER;
							par: separate PARAMETERS;
							some_leds: separate RGB_COLOR_ACTUATOR)
			-- Create `Current' with given attributes.
		do
			go_to_goal_sig := g_sig
					-- pass the go to goal signaler

			obstacle_avoidance_signaler := ob_av_sig
					-- pass the obstacle avoidance signaler

			stop_sig := s_sig
					-- pass the stop signaler

			create loc_stop_sig.make

			differential_drive := diff
					-- pass the differential drive

			robot_signaler := r_sig
					-- pass the robot signaler

			parameters := par
					-- pass the parameters

			odometry_sig := o_sig
					-- pass the odometry signaler

			path_sig := p_sig
					-- pass the path signaler

			goals := some_goals
					-- pass the goals

			leds := some_leds

			separate parameters as p do
				localization_parameters := p.localization_parameters
				mission_parameters := p.general_parameters
			end

			create object_recognition_publisher.make_with_topic ({THYMIO_TOPICS}.object_recognition_request)
					-- Creates object recognition publisher

			create object_recognition_subscriber.make_with_topic ({THYMIO_TOPICS}.object_recognition_answer)
					-- Creates object recognition subscriber

			create human_detector.make_with_topic ({THYMIO_TOPICS}.object_recognition_human_counter)
					-- Creates object recognition subscriber
		end

feature -- Access

	start
			-- Start the task.
		local
			a,b,c: separate MISSION_PLANNER_CONTROLLER
			d: separate LOCALIZATION_CONTROLLER
			e: separate LIGHT_CONTROLLER
		do
			create a.make (stop_sig)
			create b.make (stop_sig)
			create c.make (stop_sig)
			create d.make (stop_sig)
			create e.make (stop_sig)
			sep_start (a, b, c, d, e)
		end

	stop
			-- Stop the task.
		do
			sep_stop (stop_sig, True)
		end

feature -- Access

	sep_start (a, b, c: separate MISSION_PLANNER_CONTROLLER;
				d: separate LOCALIZATION_CONTROLLER;
				e: separate LIGHT_CONTROLLER)
			-- Start controllers asynchronously.
		do
			a.repeat_until_stop_requested (
				agent a.check_goal (robot_signaler,			-- ROBOT_SIGNALER
									differential_drive,
									go_to_goal_sig,			-- GO_TO_GOAL_SIGNALER
									stop_sig,				-- STOP_SIGNALER
									odometry_sig,			-- ODOMETRY_SIGNALER
									path_sig,				-- PATH_SIGNALER
									parameters				-- PARAMETERS
									))

			b.repeat_until_stop_requested (
				agent b.obstacle_avoidance (robot_signaler,  				-- ROBOT_SIGNALER
											obstacle_avoidance_signaler,	-- OBSTACLE_AVOIDANCE_SIGNALER;
											stop_sig,						-- STOP_SIGNALER;
											parameters						-- PARAMETERS
											))

			c.repeat_until_stop_requested (
				agent c.check_goal_recognition (robot_signaler,  					-- ROBOT_SIGNALER
													go_to_goal_sig,					-- GO_TO_GOAL_SIGNALER
													odometry_sig,					-- ODOMETRY_SIGNALER
													goals,							-- ARRAYED_LIST[POINT_MSG]
													stop_sig,						-- STOP_SIGNALER
													differential_drive,				-- DIFFERENTIAL_DRIVE
													object_recognition_publisher,	-- OBJECT_RECOGNITION_COMMUNICATOR
													object_recognition_subscriber,	-- BOOLEAN_SIGNALER
													localization_parameters,
													mission_parameters
													))

			d.repeat_until_stop_requested (
				agent d.start_exploring (robot_signaler,  					-- ROBOT_SIGNALER
													differential_drive,		-- DIFFERENTIAL_DRIVE
													loc_stop_sig,			-- STOP_SIGNALER
													localization_parameters	-- LOCALIZATION PARAMETERS
													))

			e.repeat_until_stop_requested (
				agent e.update_lights (stop_sig,  		-- STOP_SIGNALER
										robot_signaler,	-- ROBOT_SIGNALER;
										human_detector,	-- FLOAT_32_SIGNALER;
										leds			-- RGB_COLOR_ACTUATOR
										))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

feature {NONE} -- Implementation

	robot_signaler: separate ROBOT_SIGNALER
			-- Current state of the robot and communication interface through tasks.

	go_to_goal_sig: separate GO_TO_GOAL_SIGNALER
			-- Current state of the go to goal task.

	stop_sig, loc_stop_sig: separate STOP_SIGNALER
			-- Signaler for stopping the task.

	odometry_sig: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.

	obstacle_avoidance_signaler: separate OBSTACLE_AVOIDANCE_SIGNALER
			-- signaler for data through obstacle_avoidance.

	goals: separate LIST[POINT_MSG]
			-- Goals which represent the rooms

	path_sig: separate PATH_SIGNALER
			-- Path signaler

	differential_drive: separate DIFFERENTIAL_DRIVE;
			-- DIfferential drive

	parameters: separate PARAMETERS
			-- parameters wrapper

	localization_parameters: separate LOCALIZATION_PARAMETERS
			-- localization parameters


	object_recognition_publisher: separate OBJECT_RECOGNITION_COMMUNICATOR
			-- object that publishes flag messages to ROS

	object_recognition_subscriber: separate BOOLEAN_SIGNALER
			-- object that reads flag messages from ROS

	human_detector: separate FLOAT_32_SIGNALER

	leds: separate RGB_COLOR_ACTUATOR

	mission_parameters: separate MISSION_PARAMETERS

end
