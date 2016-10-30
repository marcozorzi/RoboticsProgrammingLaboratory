note
	description: "Holds all parameters required for a PID Controller of class 'PID_CONTROLLER'."
	author: "Marco Zorzi, Antoine Seewer"
	date: "19.10.2015"

class
	PID_CONTROLLER_PARAMETERS

create
	make_with_attributes

feature {NONE} -- Initialization

	make_with_attributes (k, i, d, error, delta_t, windup_trh: REAL_64)
			-- Initialization for `Current'.
		do
			k_c := k
			i_c := i
			d_c := d
			error_c := error
			delta_t_c := delta_t
			windup_trh_c := windup_trh
		end

feature -- Access

	k_c, i_c, d_c, error_c, delta_t_c, windup_trh_c: REAL_64
			-- Parameters: 'k_c' proportional factor; 'i_c' integrator factor; 'd_c'derivative factor
				-- 'delta_t_c' time between two control inputs; 'windup_trh_c' treshold for anti-reset-windup

	set_error (new_error:REAL_64)
			-- set parameter 'error_c' to 'new_error'
		do
			error_c := new_error
		end

	set_delta_t (new_delta_t:REAL_64)
			-- set parameter 'delta_t_c' to 'new_delta_t'
		do
			delta_t_c := new_delta_t
		end

	set_kc(a_kc: REAL_64)
			-- updates 'k_c'
		do
			k_c := a_kc
		end

	set_ki(a_ki: REAL_64)
			-- updates 'i_c'
		do
			i_c := a_ki
		end

	set_kd(a_kd: REAL_64)
			-- updates 'd_c'
		do
			d_c := a_kd
		end

	set_windup_trh_c(a_windup_trh_c: REAL_64)
			-- updates 'windup_trh_c'
		do
			windup_trh_c := a_windup_trh_c
		end

end	-- PID_CONTROLLER_PARAMETERS
