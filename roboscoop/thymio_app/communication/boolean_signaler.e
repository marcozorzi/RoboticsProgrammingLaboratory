note
	description: "Listens to a boolean topic"
	author: "Marco Zorzi"
	date: "29.11.2015"

class
	BOOLEAN_SIGNALER

inherit
	BOOLEAN_LISTENER
	DOUBLE_MATH
		export
			{NONE} all
		end

create
	make_with_topic

feature {NONE} -- Initilization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create subscriber.make
			create value.make_empty
			subscribe_boolean(subscriber, Current, topic_name)
		end

feature

	value: BOOLEAN_MSG
			-- Current data.

	update_boolean(msg: separate BOOLEAN_MSG)
			-- Update current state with the values from `msg'.
	do
		create value.make_from_separate (msg)
	end

feature {NONE}
	subscriber: separate ROS_SUBSCRIBER [BOOLEAN_MSG]
			-- Subscriber object.

	subscribe_boolean (a_sub: separate ROS_SUBSCRIBER [BOOLEAN_MSG];
							a_listener: separate BOOLEAN_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_boolean)
		end

end
