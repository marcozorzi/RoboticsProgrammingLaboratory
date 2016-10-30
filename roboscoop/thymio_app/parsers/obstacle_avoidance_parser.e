note
	description: "Parses parameters for the obstacle avoidance task."
	author: "Marco Zorzi, Antoine Seewer"
	date: "08.11.2015"

class
	OBSTACLE_AVOIDANCE_PARSER

feature -- Access

	initialize_parameters (file_path: READABLE_STRING_GENERAL): OBSTACLE_AVOIDANCE_PARAMETERS
			-- Initialize and return the parameters.
		local
			input_file: PLAIN_TEXT_FILE
			string_tokens: LIST [STRING_8]
			parameters: OBSTACLE_AVOIDANCE_PARAMETERS
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
					if string_tokens[1].is_equal ("boundary_following_speed") then
						parameters.set_boundary_following_speed (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("desired_distance_from_wall") then
						parameters.set_desired_distance_from_wall (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("recover_turning_power_max") then
						parameters.set_recover_turning_power_max (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("recover_turning_power_increment") then
						parameters.set_recover_turning_power_increment (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("recover_turning_power_power") then
						parameters.set_recover_turning_power_power (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("recover_turning_power_multiplicator") then
						parameters.set_recover_turning_power_multiplicator (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("recover_local_angular_speed_threshold") then
						parameters.set_recover_local_angular_speed_threshold (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("recover_local_anti_collision_forward_speed") then
						parameters.set_recover_local_anti_collision_forward_speed (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("recover_local_anti_collision_angular_speed_multiplicator") then
						parameters.set_recover_local_anti_collision_angular_speed_multiplicator (string_tokens[2].to_real_64)
					end
				end
			end
			Result := parameters
		end

end
