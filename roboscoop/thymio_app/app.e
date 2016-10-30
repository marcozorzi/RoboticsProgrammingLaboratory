note
	description: "Thymio-II application of 'Assignment 1': create and launch the robot."
	author: "Marco Zorzi, Antoine Seewer"
	date: "19.10.2015"

class
	APP

inherit
	ROS_ENVIRONMENT

create
	make

feature {NONE} -- Initialization

	make
			-- Create and launch the robot.
		local
			robo_node: separate ROBOSCOOP_NODE
			ros_spinner: separate ROS_SPINNER
			parameters: separate PARAMETERS
			thymio: separate THYMIO_ROBOT
			signaler: separate ROBOT_SIGNALER
			path_planning: separate PATH_PLANNING
			localization: separate LOCALIZATION

		do
			-- Initialize this application as a ROS node.
			robo_node := (create {ROS_NODE_STARTER}).roboscoop_node
			synchronize (robo_node)

			-- Listen to ROS.
			create ros_spinner.make
			start_spinning (ros_spinner)

			create signaler
			-- Create and initialize the parameters.
			create parameters.make

			separate parameters as p do
				-- Create a robot object.
				p.initialize(arguments.argument (1).to_string_8)
				create thymio.make_with_parameters (parameters,
										 p.general_parameters.objects_point_msg,
										 signaler)
				create localization.make_with_attributes (signaler, p.localization_parameters, p.general_parameters)
			end

			-- Launch Thymio.
			separate thymio as t do
				t.start
			end

			separate localization as l do
				l.start
			end


			separate parameters as p do

				create path_planning.make_with_attributes (signaler,
															p.general_parameters.goals_point_msg,
															p.general_parameters,
															p.path_planning_parameters)
			end
			separate path_planning as path do
				path.start
			end
		end
end
