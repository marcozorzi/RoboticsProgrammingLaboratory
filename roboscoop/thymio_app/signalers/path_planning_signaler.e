note
	description: "State of the path_planning task with information passing to the upper classes"
	author: "Zorzi Marco & Seewer Antoine"
	date: "13.11.2015"

class
	PATH_PLANNING_SIGNALER

feature -- Access

	is_grid_ready: BOOLEAN
			-- tells if the grid has been succesfully built from the map

	is_finding_path: BOOLEAN
			-- is the path planning controller finding a path

	is_publishing_path: BOOLEAN
			-- is the path planning controller publishing the path

	is_path_ready: BOOLEAN
			-- communicates when the path is ready		

feature -- Setters and clear all

	set_is_finding_path (a_val: BOOLEAN)
			-- Set `is_finding_path' value equal to `a_val'.
		do
			is_finding_path := a_val
		end

	set_is_publishing_path (a_val: BOOLEAN)
			-- Set `is_publishing_path' value equal to `a_val'.
		do
			is_publishing_path := a_val
		end

	set_is_path_ready (a_val: BOOLEAN)
			-- Set `is_path_ready' value equal to `a_val'.
		do
			is_path_ready := a_val
		end

	set_is_grid_ready (a_val: BOOLEAN)
			-- Set `is_grid_ready' value equal to `a_val'.
		do
			is_grid_ready := a_val
		end

	clear_all_states
			-- Clears all the states
		do
			is_finding_path  	:= 	False
			is_publishing_path 	:= 	False
			is_path_ready 		:=	False
		end

end
