note
	description: "Parses parameter file paths."
	author: "Marco Zorzi, Antoine Seewer"
	date: "08.11.2015"

class
	PARAMETER_FILE_PATHS_PARSER

feature -- Access

	read_parameter_file_paths (file_path: READABLE_STRING_GENERAL): PARAMETER_FILE_PATHS
			-- Initialize and return the parameters.
		local
			input_file: PLAIN_TEXT_FILE
			parameter_file_paths: PARAMETER_FILE_PATHS
		do
			create parameter_file_paths.make_empty
			create input_file.make_open_read (file_path)
			from
			until
				input_file.exhausted
			loop
				input_file.read_line
				if input_file.last_string.starts_with ("./") then
					if input_file.last_string.has_substring ("general") then
						parameter_file_paths.set_general_parameter_file_path (input_file.last_string)
					elseif input_file.last_string.has_substring ("go_to_goal") then
						parameter_file_paths.set_go_to_goal_parameter_file_path (input_file.last_string)
					elseif input_file.last_string.has_substring ("obstacle_avoidance") then
						parameter_file_paths.set_obstacle_avoidance_parameter_file_path (input_file.last_string)
					elseif input_file.last_string.has_substring ("path_planning") then
						parameter_file_paths.set_path_planning_parameter_file_path (input_file.last_string)
					elseif input_file.last_string.has_substring ("localization") then
						parameter_file_paths.set_localization_parameter_file_path (input_file.last_string)
					end
				end
			end
			Result := parameter_file_paths
		end

end
