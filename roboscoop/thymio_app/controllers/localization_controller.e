note
	description: "class that makes the robot move to allow the localization process"
	author: "Marco Zorzi"
	date: "14.12.2015"

class
	LOCALIZATION_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER )
			-- Create Current and assign given attributes.
		do
			stop_signaler := s_sig
					-- pass the stop signaler
		end

feature -- Implementation

	start_exploring ( r_sig: separate ROBOT_SIGNALER;
						drive: separate DIFFERENTIAL_DRIVE;
						s_sig: separate STOP_SIGNALER;
						l_par: separate LOCALIZATION_PARAMETERS)
			-- Moves in a circular fashion to explore the environment
		require
			not s_sig.is_stop_requested
		do
			if r_sig.is_localized then
				drive.stop
						-- stop the robot
				r_sig.set_is_done_exploring (True)
				s_sig.set_stop_requested (True)
						-- stop request and set not exploring anymore
			else
				drive.set_velocity (l_par.forward_velocity, l_par.angular_velocity)
			end

		end

	get_location ( r_sig: separate ROBOT_SIGNALER;
						s_sig: separate STOP_SIGNALER;
						l_sig: separate BOOLEAN_SIGNALER;
						m_par: separate MISSION_PARAMETERS;
						start_pose: separate POSE_SIGNALER)
			-- get the location and save it in the amazing parameter class
			-- which is editable during runtime because we are great!!!
		require
			(not r_sig.is_localized and
			not s_sig.is_stop_requested)
		local

		do
			if l_sig.value.data = True then
						-- wait for the flag from the localization node
				m_par.set_x_start (start_pose.x)
				m_par.set_y_start (start_pose.y)
						-- save the parameters
				r_sig.set_is_localized (True)
						-- set localized flag
			end

		end

end
