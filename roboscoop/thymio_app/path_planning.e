note
	description: "Class that wraps separate elements"
	author: "Marco Zorzi"
	date: "03.11.2015"

class
	PATH_PLANNING

inherit
	BEHAVIOUR

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (r_sig: separate ROBOT_SIGNALER;
							some_goals: separate LIST[POINT_MSG];
							general_parameters: separate MISSION_PARAMETERS;
							p_p_parameters: separate PATH_PLANNING_PARAMETERS)
			-- Create a path planner.

		do
			create map.make_with_topic ({THYMIO_TOPICS}.map)
					-- Initialize parts of the path planner.

			robot_signaler := r_sig
					-- pass the robot signaler

			path_planning_parameters := p_p_parameters
					-- pass the path planning parameters

			goals := some_goals
					-- pass the goals for the path

			create start_msg.make_with_values (general_parameters.x_start, general_parameters.y_start, 0)
					--create point msgs for start node

			create stop_sig.make
					-- create a stop signaler

			create communicator.make_with_topic({THYMIO_TOPICS}.path_calculated,
												{THYMIO_TOPICS}.odometry_link_frame)
					-- create a path planning communicator
		end

feature -- Access

	start
			-- Starts the path planner task.
		local
			a: separate PATH_PLANNING_CONTROLLER
		do
			create a.make (stop_sig)

			sep_start (a)
		end

	stop
			-- Stop the behaviour.
		do
			sep_stop (stop_sig, True)
		end


feature {NONE} -- tasks

	sep_start (a: separate PATH_PLANNING_CONTROLLER)
			-- Launches the parts of the path_planner
		do
			a.repeat_until_stop_requested (
						agent a.find_path (	stop_sig,
											robot_signaler,
											map,
											communicator,
											start_msg,
											goals,
											path_planning_parameters
											))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

feature {NONE} -- Path Planning parts

	path_planning_parameters: separate PATH_PLANNING_PARAMETERS
			-- class containing the path planning parameters.

	start_msg: separate POINT_MSG
			-- point messages for start and goal positions.

	goals: separate LIST[POINT_MSG]
			-- arraylist of point messages for the goal

	map: separate OCCUPANCY_GRID_SIGNALER
			-- signaler for the occupancy grid

	stop_sig: separate STOP_SIGNALER
			-- Signaler for stopping the behaviour.	

	robot_signaler: separate ROBOT_SIGNALER
			-- robot signaler

	communicator: separate PATH_PLANNER_COMMUNICATOR
			-- path planner communicator

end
