note
	description: "Parses parameters for the go to goal task."
	author: "Marco Zorzi, Antoine Seewer"
	date: "08.11.2015"

class
	GO_TO_GOAL_PARSER

feature -- Access

	initialize_parameters (file_path: READABLE_STRING_GENERAL): GO_TO_GOAL_PARAMETERS
			-- Initialize and return the parameters.
		local
			input_file: PLAIN_TEXT_FILE
			string_tokens: LIST [STRING_8]
			parameters: GO_TO_GOAL_PARAMETERS
		do
			create parameters
			create input_file.make_open_read (file_path)
			from
			until
				input_file.exhausted
			loop
				input_file.read_line
				input_file.last_string.prune_all ('%T')
				if input_file.last_string.has (':') then
					string_tokens := input_file.last_string.split (':')
					if string_tokens[1].is_equal ("goal_threshold") then
						parameters.set_goal_threshold (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("heading_PID_kp") then
						parameters.set_heading_PID_kp (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("heading_PID_ki") then
						parameters.set_heading_PID_ki (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("heading_PID_kd") then
						parameters.set_heading_PID_kd (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("heading_PID_delta_t") then
						parameters.set_heading_PID_delta_t (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("heading_PID_windup_threshold") then
						parameters.set_heading_PID_windup_threshold (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("cruise_velocity") then
						parameters.set_cruise_velocity (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("cruise_velocity_threshold") then
						parameters.set_cruise_velocity_threshold (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("approach_velocity") then
						parameters.set_approach_velocity (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("approach_velocity_threshold") then
						parameters.set_approach_velocity_threshold (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("change_goal_threshold") then
						parameters.set_change_goal_threshold (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("jump_n_points_after_obstacle") then
						parameters.set_jump_n_points_after_obstacle (string_tokens[2].to_integer_32)
					end
				end
			end
			Result := parameters
		end

end
