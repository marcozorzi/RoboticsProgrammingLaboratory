note
	description: "Class that publishes a message to start object recognition"
	author: "Marco Zorzi"
	date: "29.11.2015"

class
	OBJECT_RECOGNITION_COMMUNICATOR

create
	make_with_topic

feature {NONE} -- Initialization

	make_with_topic(a_topic: separate STRING_8)
		do
			create publisher.make_with_topic (a_topic)
			publisher.advertize (1, True)
		end

feature -- Implementation

	publisher: ROS_PUBLISHER [BOOLEAN_MSG]
			-- Publisher object.

	publish_message
		-- publishes the msg
	local
		bool_msg : BOOLEAN_MSG
	do
		create bool_msg.make_with_values (True)
		publisher.publish (bool_msg)
	end

	publish_flag(a_val: separate BOOLEAN)
		-- publishes the msg
	local
		bool_msg : BOOLEAN_MSG
	do
		create bool_msg.make_with_values (a_val)
		publisher.publish (bool_msg)
	end

end
