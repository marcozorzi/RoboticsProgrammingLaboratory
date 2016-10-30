note
	description: "Point in 3D-space."
	author: "Rusakov Andrey"
	date: "30.03.2015"

class
	POINT_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_with_values, make_from_separate

feature {NONE} -- Initialization.

	make_empty
			-- Create empty Current.
		do
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_with_values (a_x, a_y, a_z: REAL_64)
			-- Create `Current' with values.
		do
			x := a_x
			y := a_y
			z := a_z
		end

feature -- Access

	x, y, z: REAL_64
			-- Coordinates.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			x := get_x_from_c (c_ptr)
			y := get_y_from_c (c_ptr)
			z := get_z_from_c (c_ptr)
		end

feature {ROS_MESSAGE}

	allocate_c_msg: POINTER
			-- Pointer to the corresponding ROS message instance in C++.
		do
			Result := c_msg_ptr (x, y, z)
		end

	deallocate_c_msg (a_msg_ptr: POINTER)
		external
			"C++ inline use %"geometry_msgs/Point.h%""
		alias
			"delete (geometry_msgs::Point*)$a_msg_ptr;"
		end

feature {NONE} -- Externals

	get_x_from_c (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"geometry_msgs/Point.h%""
		alias
			"return (double)(((geometry_msgs::Point*)($c_ptr))->x);"
		end

	get_y_from_c (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"geometry_msgs/Point.h%""
		alias
			"return (double)(((geometry_msgs::Point*)($c_ptr))->y);"
		end

	get_z_from_c (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"geometry_msgs/Point.h%""
		alias
			"return (double)(((geometry_msgs::Point*)($c_ptr))->z);"
		end

	c_msg_ptr (a_x, a_y, a_z: REAL_64): POINTER
		external
			"C++ inline use %"geometry_msgs/Point.h%""
		alias
			"[
				geometry_msgs::Point* msg = new geometry_msgs::Point();
				msg->x = $a_x;
				msg->y = $a_y;
				msg->z = $a_z;
				return msg;
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"geometry_msgs/Point.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <geometry_msgs::Point> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_msg_ptr: POINTER)
		external
			"C++ inline use %"publisher.h%", %"geometry_msgs/Point.h%""
		alias
			"((Publisher*)($a_worker_obj))->publish_message <geometry_msgs::Point> (*((geometry_msgs::Point*)$a_msg_ptr));"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"geometry_msgs/Point.h%""
		alias
			"((Subscriber*)($a_worker_obj))->subscribe<geometry_msgs::Point, geometry_msgs::Point::ConstPtr> ($c_topic_name, $obj, $routine);"
		end
end
