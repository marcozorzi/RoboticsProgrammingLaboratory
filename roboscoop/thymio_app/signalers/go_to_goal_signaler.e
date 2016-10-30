note
	description: "State of the go to goal task"
	author: "Marco Zorzi, Antoine Seewer"
	date: "19.10.2015"

class
	GO_TO_GOAL_SIGNALER

inherit
	TRIGONOMETRY_MATH

create
	make

feature{NONE} -- Initialization

	make( x,y: REAL_64)
	do
		x_goal := x
		y_goal := y
		distance_error := {REAL_64}.positive_infinity
	end

feature -- Setters and clear all

	set_is_going_to_goal (a_val: BOOLEAN)
			-- Set `is_going_to_goal' value equal to `a_val'.
		do
			is_going_to_goal := a_val
		end

	set_is_at_goal (a_val: BOOLEAN)
			-- Set `is_at_goal' value equal to `a_val'.
		do
			is_at_goal := a_val
		end

	clear_all_states
			-- Set all pending flags to False.
		do
			is_going_to_goal	:= False
			is_at_goal			:= False
		end

feature -- functions

	compute_error (x_robot,y_robot, theta_robot: REAL_64)
			--Updates the parameters which indicates where the goal is

		do
			distance_error := sqrt (squared_distance_2d (x_goal, y_goal, x_robot, y_robot))

			theta_goal := atan2 ((y_goal - y_robot), (x_goal - x_robot))

			if (theta_goal - previous_theta) > 1 then
				counter := counter + 1
				found := True
			elseif (theta_goal - previous_theta) < -1 then
				counter := counter - 1
				found := True
			end

			previous_theta := theta_goal
			theta_goal := (theta_goal) - (2 * pi * counter)


			theta_error := theta_goal - theta_robot
				-- Compute distances to goal parameters
			found := False
		end

	set_goal( x,y: separate REAL_64)
	do
		x_goal := x
		y_goal := y
	end

	update_min_distance
			-- Check if current distance to goal is smaller then the last recorded minimal distance
		do
			if distance_error < min_distance then
				min_distance := distance_error
			end
		end

feature {NONE}

	counter: INTEGER
			-- counts how many times the robot turned around 2 Pi (full circle).

feature -- Access

	x_goal, y_goal, theta_goal: REAL_64
			-- Goal x and y coordinates

	is_going_to_goal: BOOLEAN
			-- Has the state "go_to_goal"

	is_at_goal: BOOLEAN
			-- Has the state "at goal"

	distance_error: REAL_64
			-- remaining distance to goal

	previous_theta: REAL_64
			-- Old theta value

	theta_error: REAL_64
			-- Difference of angle to goal and actual heading of robot

	found: BOOLEAN

	min_distance: REAL_64
			-- Recorded minimal distance to goal reached
end
