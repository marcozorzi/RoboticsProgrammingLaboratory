note
	description: "Parses parameters for the path planning task."
	author: "Seewer Antoine"
	date: "12.11.2015"

class
	PATH_PLANNING_PARSER

feature -- Access

	initialize_parameters (file_path: READABLE_STRING_GENERAL): PATH_PLANNING_PARAMETERS
			-- Initialize and return the parameters.
		local
			input_file: PLAIN_TEXT_FILE
			string_tokens: LIST [STRING_8]
			parameters: PATH_PLANNING_PARAMETERS
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
					if string_tokens[1].is_equal ("inflation_radius") then
						parameters.set_inflation_radius (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("scaling_factor") then
						parameters.set_scaling_factor (string_tokens[2].to_integer_32)
					elseif string_tokens[1].is_equal ("connection") then
						parameters.set_connection (string_tokens[2].to_integer_32)
					end
				end
			end
			Result := parameters
		end

end
