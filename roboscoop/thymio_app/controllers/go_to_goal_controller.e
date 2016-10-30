note
	description: "Controller to go to a point x/y in world coordinates assuming start point 0/0."
	author: "Marco Zorzi, Antoine Seewer"
	date: "19.10.2015"

class
	GO_TO_GOAL_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER; o_sig: separate ODOMETRY_SIGNALER;
			go_to_goal_parameters: separate GO_TO_GOAL_PARAMETERS)
			-- Create Current and assign given attributes.
		do
			stop_signaler := s_sig
					-- pass the stop signaler

			last_time := o_sig.timestamp
					-- save the first timestamp

			create pid_param_rotate.make_with_attributes (	go_to_goal_parameters.heading_pid_kp,
															go_to_goal_parameters.heading_pid_ki,
															go_to_goal_parameters.heading_pid_kd,
															0,
															go_to_goal_parameters.heading_pid_delta_t,
															go_to_goal_parameters.heading_pid_windup_threshold)
					-- set parameters for heading PID-controler
		end

feature {GO_TO_GOAL_BEHAVIOUR} -- Implementation

	going_to_goal ( go_to_goal_sig: separate GO_TO_GOAL_SIGNALER;
					s_sig: separate STOP_SIGNALER;
					o_sig: separate ODOMETRY_SIGNALER;
					drive: separate DIFFERENTIAL_DRIVE;
					pid: separate PID_CONTROLLER;
					go_to_goal_parameters: separate GO_TO_GOAL_PARAMETERS)
			-- Move towards the goal
		require
			(go_to_goal_sig.is_going_to_goal and
			not go_to_goal_sig.is_at_goal and
			not s_sig.is_stop_requested)
		local
			current_time, delta_t: REAL_64
		do
			if not go_to_goal_sig.is_going_to_goal then
				go_to_goal_sig.clear_all_states
				go_to_goal_sig.set_is_going_to_goal (True)
				debug
					io.put_string ("GOING TO GOAL%N")
				end
			end
			current_time := o_sig.timestamp
			if not last_time.is_equal (current_time) then
					-- dont execute controller if no new sensor values

				delta_t := current_time - last_time
						-- compute difference in time

				last_time := current_time
						-- save current timestamp as last one

				go_to_goal_sig.compute_error (o_sig.x, o_sig.y, o_sig.theta)
						-- compute the error for the pid

				pid.update_pid_parameters (pid_param_rotate, go_to_goal_sig.theta_error, delta_t)
						-- update pid parameters

				pid.calc_output (pid_param_rotate)
						-- calculate the output

				drive.set_velocity (compute_velocity (go_to_goal_sig.distance_error, go_to_goal_parameters), pid.output)
					--Sets the speed decided by the controller
			end
		end

	at_goal (   go_to_goal_sig: separate GO_TO_GOAL_SIGNALER;
				s_sig: separate STOP_SIGNALER;
				drive: separate DIFFERENTIAL_DRIVE;
				go_to_goal_parameters: separate GO_TO_GOAL_PARAMETERS)
			-- Checks if near the goal. If true stops the robot.
		require
			(not s_sig.is_stop_requested)
		do
			if go_to_goal_sig.distance_error < go_to_goal_parameters.goal_threshold then
					-- checks if we are close to the goal
				go_to_goal_sig.clear_all_states
				go_to_goal_sig.set_is_at_goal (True)
				drive.stop
				s_sig.set_stop_requested (True)
				io.put_string ("AT GOAL%N")
			end
		end

feature {NONE}

	compute_velocity (distance: REAL_64; go_to_goal_parameters: separate GO_TO_GOAL_PARAMETERS): REAL_64
			-- Returns the linear speed depending on remaining distance to goal
		do
			if distance > go_to_goal_parameters.cruise_velocity_threshold then
					-- far from goal
				Result := go_to_goal_parameters.cruise_velocity
			else
				if distance > go_to_goal_parameters.approach_velocity_threshold then
						-- quite near to goal
					Result := go_to_goal_parameters.approach_velocity
				else
					Result := distance
							-- almost at goal
				end
			end
		end

feature {NONE}

	pid_param_rotate: separate PID_CONTROLLER_PARAMETERS
			-- Class holding all required parameters for PID controller

	last_time: REAL_64
			-- Last time for next iteration.

end
