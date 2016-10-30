note
	description: "General PID_CONTROLLER."
	author: "Marco Zorzi, Antoine Seewer"
	date: "19.10.2015"

class
	PID_CONTROLLER

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
			do
				integrated_error := 0
				derivative := 0
				last_error := 0
				output := 0
			end

feature	-- Access

	calc_output (param: separate PID_CONTROLLER_PARAMETERS)
			-- Initialization for `Current'.
		require
			not param.delta_t_c.is_equal (0)
					-- Check for division by 0
		do
			if param.error_c < param.windup_trh_c then
					-- Cheap "Anti-reset-windup"
				integrated_error := integrated_error + (param.error_c * param.delta_t_c)
						-- Fillup 'integrated_error'
			else
				integrated_error := 0
						-- Keep 'integrated_error' at 0 to eliminate big starting error
			end

			derivative := (param.error_c - last_error) / param.delta_t_c

			output := param.k_c * param.error_c + param.i_c * integrated_error + param.d_c * derivative
					-- calculate PID controller output

		end

	update_pid_parameters (parameters: separate PID_CONTROLLER_PARAMETERS; new_error, new_delta_t: REAL_64)
			-- set 'new_...' values to 'parameters'
		do
			parameters.set_error (new_error)
			parameters.set_delta_t (new_delta_t)
		end

	reset_pid()
			-- resets PID controller
		do
				integrated_error := 0
				derivative := 0
				last_error := 0
				output := 0
		end

feature	-- Declarations of types

	output: REAL_64
			-- Internal variables required for PID-Controller

feature {NONE}	-- Declarations of types

	integrated_error, derivative, last_error: REAL_64
			-- Internal variables required for PID-Controller

end	-- PID_CONTROLLER
