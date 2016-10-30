note
	description: "This class listens to ros and sets starting position"
	author: "Marco Zorzi"
	date: "15.12.2015"

class
	LOCALIZATION

inherit
	BEHAVIOUR

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (r_sig: separate ROBOT_SIGNALER;
							l_par: separate LOCALIZATION_PARAMETERS;
							m_par: separate MISSION_PARAMETERS)
			-- Create a path planner.

		do
			create localization_flag.make_with_topic ({THYMIO_TOPICS}.localization_flag)
							-- Creates localization flag listener	

			create odometry_signaler.make_with_topic ({THYMIO_TOPICS}.localization_odometry)

			create start_pose.make_with_topic ({THYMIO_TOPICS}.localization_start)
					-- Creates object recognition subscriber

			create stop_sig.make
					-- create a stop signaler

			mission_parameters := m_par
					-- save the parameters

			localization_parameters := l_par
					-- save the parameters

			robot_signaler := r_sig
					-- saves the signaler
		end

feature -- Access

	start
			-- Starts the path planner task.
		local
			a: separate LOCALIZATION_CONTROLLER
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

	sep_start (a: separate LOCALIZATION_CONTROLLER)
			-- Launches the parts of the localization behaviour
		do
			a.repeat_until_stop_requested (
						agent a.get_location (	robot_signaler,
												stop_sig,
												localization_flag,
												mission_parameters,
												start_pose
												))
		end

	sep_stop (s_sig: separate STOP_SIGNALER; val: BOOLEAN)
			-- Signal behavior for a stop.
		do
			s_sig.set_stop_requested (val)
		end

feature {NONE} -- Localization parts


	stop_sig: separate STOP_SIGNALER
			-- Signaler for stopping the behaviour.	

	robot_signaler: separate ROBOT_SIGNALER
			-- robot signaler

	localization_parameters: separate LOCALIZATION_PARAMETERS
			-- parameters for the localization

	localization_flag: separate BOOLEAN_SIGNALER
			-- flag from ros

	mission_parameters: separate MISSION_PARAMETERS
			-- parameters of the whole mission

	odometry_signaler: separate ODOMETRY_SIGNALER
			-- Current state of the odometry.

	start_pose: separate POSE_SIGNALER
			-- Receives the starting position		
end
