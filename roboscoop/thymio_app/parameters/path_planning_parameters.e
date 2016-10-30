note
	description: "Parameters for the path planning task."
	author: "Seewer Antoine"
	date: "08.11.2015"

class
	PATH_PLANNING_PARAMETERS

feature -- Parameters

	inflation_radius: REAL_64
	scaling_factor: INTEGER_32
	connection: INTEGER_32
			-- parameters for the grid creation.

feature -- Setters

	set_inflation_radius (a_val: REAL_64)
			-- Set `inflation_radius' value equal to `a_val'.
		do
			inflation_radius := a_val
		end

	set_scaling_factor (a_val: INTEGER_32)
			-- Set `scaling_factor' value equal to `a_val'.
		do
			scaling_factor := a_val
		end

	set_connection (a_val: INTEGER_32)
			-- Set `connection' value equal to `a_val'.
		do
			connection := a_val
		end

end
