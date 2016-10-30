note
	description: "Class for receiving BOOLEAN_MSG"
	author: "Marco Zorzi"
	date: "16.12.2015"

deferred class
	FLOAT_32_LISTENER

feature -- Access

	update_float(msg: separate FLOAT_32_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end

end
