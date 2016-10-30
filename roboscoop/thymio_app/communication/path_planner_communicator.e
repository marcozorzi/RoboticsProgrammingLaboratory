note
	description: "Class to handle the publishing of the path to ROS"
	author: "Marco Zorzi"
	date: "03.11.2015"

class
	PATH_PLANNER_COMMUNICATOR

create
	make_with_topic

feature {NONE} -- Initialization

	make_with_topic(a_topic, a_header: separate STRING_8)
		do
			create publisher.make_with_topic (a_topic)
			create header.make_from_separate (a_header)
			publisher.advertize (1, True)
		end

feature -- Implementation

	publisher: ROS_PUBLISHER [PATH_MSG]
			-- Publisher object.

	header: STRING_8
			-- header

	publish_path(path: separate LIST[SPATIAL_GRAPH_NODE])
			-- publishes the path
	local
		path_msg : PATH_MSG
		a_header: HEADER_MSG
		a_poses_array: ARRAY [POSE_STAMPED_MSG]
		a_stamped: POSE_STAMPED_MSG
		a_pose : POSE_MSG
		a_point: POINT_MSG
		quat: QUATERNION_MSG
		i: INTEGER

	do
		create a_header.make_now (header)
		create a_poses_array.make_empty
		create quat.make_with_values (0, 0, 0, 1)
		from
			i := 1
		until
			i > path.count
		loop
			path.forth
			create a_point.make_from_separate (path.item.position)
			create a_pose.make_with_values (a_point, quat)
			create a_stamped.make_with_values (a_header, a_pose)
			a_poses_array.force (a_stamped, i)
			i := i+1
		end

		create path_msg.make_with_values(a_header, a_poses_array)
		publisher.publish (path_msg)
	end
end
