note
	description: "General parameters needed in different tasks."
	author: "Seewer Antoine"
	date: "09.11.2015"

class
	MISSION_PARAMETERS

create
	make

feature {NONE}

	make
	do
		create x_goal.make (0)
		create y_goal.make (0)
		create x_obj.make (0)
		create y_obj.make (0)
	end
feature -- Parameters

	theta_start: REAL_64
			-- theta of the starting position

	x_start: REAL_64
			-- x coordinate of the start position.

	y_start: REAL_64
			-- y coordinate of the start position.

	x_goal: ARRAYED_LIST[REAL_64]
			-- x coordinate of the goal.

	y_goal: ARRAYED_LIST[REAL_64]
			-- y coordinate of the goal.

	x_obj: ARRAYED_LIST[REAL_64]
			-- y coordinate of the goal.

	y_obj: ARRAYED_LIST[REAL_64]
			-- y coordinate of the goal.
feature -- Setters

	set_theta_start (a_val: REAL_64)
			-- Set `theta_start' value equal to `a_val'.
		do
			theta_start := a_val
		end

	set_x_start (a_val: REAL_64)
			-- Set `x_start' value equal to `a_val'.
		do
			x_start := a_val
		end

	set_y_start (a_val: REAL_64)
			-- Set `y_start' value equal to `a_val'.
		do
			y_start := a_val
		end

	add_x (x : REAL_64)
			-- Loads x and y coordinates
		do
			x_goal.force (x)
		end

	add_y (y : REAL_64)
			-- Loads x and y coordinates
		do
			y_goal.force (y)
		end

	add_obj_x (x : REAL_64)
			-- Loads x and y coordinates
		do
			x_obj.force (x)
		end

	add_obj_y (y : REAL_64)
			-- Loads x and y coordinates
		do
			y_obj.force (y)
		end

	goals_point_msg():ARRAYED_LIST[POINT_MSG]
	local
		goals: ARRAYED_LIST[POINT_MSG]
		a_point_msg: POINT_MSG
		i: INTEGER
	do
		create goals.make (0)
		from
			i := 1
		until
			i> x_goal.count
		loop
			create a_point_msg.make_with_values (x_goal.at(i), y_goal.at(i), 0)
			goals.force (a_point_msg)
			i := i+1
		end
		Result := goals
	end

	objects_point_msg():ARRAYED_LIST[POINT_MSG]
	local
		objects: ARRAYED_LIST[POINT_MSG]
		a_point_msg: POINT_MSG
		i: INTEGER
	do
		create objects.make (0)
		from
			i := 1
		until
			i> x_obj.count
		loop
			create a_point_msg.make_with_values (x_obj.at(i), y_obj.at(i), 0)
			objects.force (a_point_msg)
			i := i+1
		end
		Result := objects
	end
end
