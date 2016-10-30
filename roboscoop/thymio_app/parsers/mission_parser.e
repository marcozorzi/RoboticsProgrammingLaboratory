note
	description: "Class to parse some data."
	author: "Marco Zorzi, Antoine Seewer"
	date: "08.11.2015"

class
	MISSION_PARSER

feature -- Access

	initialize_parameters (file_path: READABLE_STRING_GENERAL): MISSION_PARAMETERS -- string -> READABLE_STRING_GENERAL??
			-- Initialize and return the parameters.
		local
			input_file: PLAIN_TEXT_FILE
			string_tokens: LIST [STRING_8]
			parameters: MISSION_PARAMETERS
		do
			create parameters.make
			create input_file.make_open_read (file_path)
			from
			until
				input_file.exhausted
			loop
				input_file.read_line
				input_file.last_string.prune_all ('%T')
				if input_file.last_string.has (':') then
					string_tokens := input_file.last_string.split (':')
					if string_tokens[1].is_equal ("x_start") then
						parameters.set_x_start (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("y_start") then
						parameters.set_y_start (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("x_goal") then
						parameters.add_x (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("y_goal") then
						parameters.add_y (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("x_obj") then
						parameters.add_obj_x (string_tokens[2].to_real_64)
					elseif string_tokens[1].is_equal ("y_obj") then
						parameters.add_obj_y (string_tokens[2].to_real_64)
					end
				end
			end
			Result := parameters
		end

end
