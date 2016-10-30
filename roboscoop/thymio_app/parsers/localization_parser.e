note
	description: "Parses parameters for the localization task."
	author: "Marco Zorzi"
	date: "14.12.2015"
class
	LOCALIZATION_PARSER

feature -- Access

	initialize_parameters (file_path: READABLE_STRING_GENERAL): LOCALIZATION_PARAMETERS
			-- Initialize and return the parameters.
		local
			input_file: PLAIN_TEXT_FILE
			string_tokens: LIST [STRING_8]
			parameters: LOCALIZATION_PARAMETERS
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
					if string_tokens[1].is_equal ("forward_velocity") then
						parameters.set_forward_velocity (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("angular_velocity") then
						parameters.set_angular_velocity (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("object_distance_threshold") then
						parameters.set_object_distance_threshold (string_tokens[2].to_real_64)
					end
				end
			end
			Result := parameters
		end

end
