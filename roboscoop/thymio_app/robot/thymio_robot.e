note
	description: "Class of the Thymio-II Robot."
	author: "Marco Zorzi, Antoine Seewer"
	date: "19.10.2015"

class
	THYMIO_ROBOT

inherit
	BARRIER
	SEPARATE_STRING_MAKER

create
	make_with_parameters

feature {NONE} -- Initialization

	make_with_parameters (p: separate PARAMETERS;
							some_goals: separate LIST[POINT_MSG];
							r_sig: separate ROBOT_SIGNALER)
			-- Create a robot.
		local
			x_goal_odometry, y_goal_odometry: REAL_64
		do

			io.put_string ("x: " + some_goals.at (1).x.out +
							" | y: " + some_goals.at (1).y.out +
							"%N")
				-- Initialize sensors.
			create odometry_signaler.make_with_topic ({THYMIO_TOPICS}.localization_odometry)
			create range_sensors.make ({THYMIO_TOPICS}.prox_horizontal)
			create ground_sensors.make ({THYMIO_TOPICS}.prox_ground)

				-- Initialize actuators.
			create diff_drive.make_with_topic ({THYMIO_TOPICS}.velocity)

			parameters := p
				-- Initialize signalers.
			robot_signaler := r_sig
			create path_sig
			create go_to_goal_sig.make (p.general_parameters.x_goal.at (1)  - p.general_parameters.x_start,
									p.general_parameters.y_goal.at (1)- p.general_parameters.y_start)

			create obstacle_avoidance_signaler
			create stop_signaler.make

				-- Initialize path
			create path_ros.make_with_topic ({THYMIO_TOPICS}.path_calculated)

			create top_leds.make_with_topic ({THYMIO_TOPICS}.top_leds)

			goals := some_goals
		end

feature -- Constants

	robot_base_size: REAL_64 = 0.11
			-- Robot's width.

	default_linear_speed: REAL_64 = 0.08
			-- Default linear speed of the robot.

feature -- Access

	start
			-- Start the mission.
		local
			behaviour: separate GO_TO_GOAL_BEHAVIOUR
			planner: separate MISSION_PLANNER_BEHAVIOUR
		do
			separate parameters as p do
				create behaviour.make_with_attributes (odometry_signaler,
														 diff_drive,
														 go_to_goal_sig,
														 obstacle_avoidance_signaler,
														 range_sensors,
														 stop_signaler,
														 p.general_parameters,
														 p.go_to_goal_parameters,
														 p.obstacle_avoidance_parameters)
	 					-- Create `Current' with given attributes
			end

			 create  planner.make_with_attributes (go_to_goal_sig,
			 										obstacle_avoidance_signaler,
			 										robot_signaler,
			 										odometry_signaler,
			 										stop_signaler,
			 										diff_drive,
			 										goals,
			 										path_ros,
			 										parameters,
			 										top_leds)
			sep_start (behaviour, planner)
		end

	stop
			-- Stop the mission.
		do
			sep_stop (stop_signaler, True)
		end

feature -- Access

	sep_start (behaviour: separate GO_TO_GOAL_BEHAVIOUR; planner: separate MISSION_PLANNER_BEHAVIOUR)
			-- Start controllers asynchronously.
		do
			behaviour.start
			planner.start

		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

feature {NONE} -- Robot parts

	parameters: separate PARAMETERS
			-- class containing the parameters.

	path_ros: separate PATH_SIGNALER
			-- path read through ROS after pubblication.

	robot_signaler: separate ROBOT_SIGNALER
			-- Current state of the robot and communication interface through tasks.

	path_sig: separate PATH_PLANNING_SIGNALER
			-- signaler for data through path planning.

	go_to_goal_sig: separate GO_TO_GOAL_SIGNALER
			-- signaler for data through go_to_goal.

	obstacle_avoidance_signaler: separate OBSTACLE_AVOIDANCE_SIGNALER
			-- signaler for data through obstacle_avoidance.

	stop_signaler: separate STOP_SIGNALER
			-- Signaler for stopping the mission.

	odometry_signaler: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.

	goals: separate LIST[POINT_MSG]

	range_sensors: separate THYMIO_RANGE_GROUP
			-- Horizontal range sensors.

	ground_sensors: separate THYMIO_GROUND_GROUP
			-- Ground sensors.

	diff_drive: separate THYMIO_DIFFERENTIAL_DRIVE
			-- Differential drive.

	top_leds: separate THYMIO_TOP_LEDS
			-- color leds

end
