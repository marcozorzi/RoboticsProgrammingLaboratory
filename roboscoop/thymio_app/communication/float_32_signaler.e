note
	description: "Listens to a float topic"
	author: "Marco Zorzi"
	date: "16.12.2015"


class
	FLOAT_32_SIGNALER

inherit
	FLOAT_32_LISTENER
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
			subscribe_float(subscriber, Current, topic_name)
		end

feature

	value: FLOAT_32_MSG
			-- Current data.

	update_float(msg: separate FLOAT_32_MSG)
			-- Update current state with the values from `msg'.
	do
		create value.make_from_separate (msg)
	end

feature {NONE}
	subscriber: separate ROS_SUBSCRIBER [FLOAT_32_MSG]
			-- Subscriber object.

	subscribe_float (a_sub: separate ROS_SUBSCRIBER [FLOAT_32_MSG];
							a_listener: separate FLOAT_32_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_float)
		end

end

