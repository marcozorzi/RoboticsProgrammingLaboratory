note
	description: "Class containing the parameter file paths."
	author: "Seewer Antoine"
	date: "08.11.2015"

class
	PARAMETER_FILE_PATHS

create
	make_empty

feature {NONE} -- Initialization

	make_empty
			-- Create empty `Current'.
		do
			general_parameter_file_path := ""
			go_to_goal_parameter_file_path := ""
			obstacle_avoidance_parameter_file_path := ""
			path_planning_parameter_file_path := ""
			localization_parameter_file_path := ""
		end

feature -- Parameters

	general_parameter_file_path: STRING_8
			-- path of the general parameter file.

	go_to_goal_parameter_file_path: STRING_8
			-- path of the go to goal parameter file.

	obstacle_avoidance_parameter_file_path: STRING_8
			-- path of the obstacle avoidance parameter file.

	path_planning_parameter_file_path: STRING_8
			-- path of the pah planning parameter file.

	localization_parameter_file_path: STRING_8
			-- path of the pah planning parameter file.

feature -- Setters

	set_general_parameter_file_path (a_val: STRING_8)
			-- Set `general_parameter_file_path' value equal to `a_val'.
		do
			general_parameter_file_path.append (a_val)
		end

	set_go_to_goal_parameter_file_path (a_val: STRING_8)
			-- Set `go_to_goal_parameter_file_path' value equal to `a_val'.
		do
			go_to_goal_parameter_file_path.append (a_val)
		end

	set_obstacle_avoidance_parameter_file_path (a_val: STRING_8)
			-- Set `obstacle_avoidance_parameter_file_path' value equal to `a_val'.
		do
			obstacle_avoidance_parameter_file_path.append (a_val)
		end

	set_path_planning_parameter_file_path (a_val: STRING_8)
			-- Set `path_planning_parameter_file_path' value equal to `a_val'.
		do
			path_planning_parameter_file_path.append (a_val)
		end

	set_localization_parameter_file_path (a_val: STRING_8)
			-- Set `localization_parameter_file_path' value equal to `a_val'.
		do
			localization_parameter_file_path.append (a_val)
		end

end
