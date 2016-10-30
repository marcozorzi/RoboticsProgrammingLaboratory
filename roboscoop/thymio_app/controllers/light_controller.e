note
	description: "Class that controls the lights for human seen throuh ros"
	author: "Marco Zorzi"
	date: "17.12.2015"

class
	LIGHT_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER)
			-- Create Current and assign given attributes.
		do
			stop_signaler := s_sig
		end

feature -- Implementation


	update_lights (s_sig: separate STOP_SIGNALER;
					robot_sig: separate ROBOT_SIGNALER;
					human_detector: separate FLOAT_32_SIGNALER;
					leds: separate RGB_COLOR_ACTUATOR
					)
			-- takes the read map and converts it into  meaningful graph and searches over it

		require
			robot_sig.is_path_ready
		local
			number_of_humans: REAL_32
					-- number of humans seen
		do
			number_of_humans := human_detector.value.data
					-- read the number of human see from ROS
			if  number_of_humans = 1 then
				leds.set_to_red
						--set lights to red
			elseif number_of_humans > 1 then
				leds.set_to_green
						-- set to green	
			else
				leds.set_to_no_color
						-- turn off
			end
		end
end
