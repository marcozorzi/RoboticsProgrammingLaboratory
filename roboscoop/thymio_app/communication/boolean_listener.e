note
	description: "Class for receiving BOOLEAN_MSG"
	author: "Marco Zorzi"
	date: "01.12.2015"

deferred class
	BOOLEAN_LISTENER

feature -- Access

	update_boolean(msg: separate BOOLEAN_MSG)
			-- Update current state with the values from `msg'.
		deferred
		end

end
