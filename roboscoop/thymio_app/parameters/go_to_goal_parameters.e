note
	description: "Parameters for the go to goal task."
	author: "Seewer Antoine & Zorzi Marco"
	date: "12.11.2015"

class
	GO_TO_GOAL_PARAMETERS

feature -- Parameters

	goal_threshold: REAL_64
			-- threshold at which we consider the robot to be "at goal".

	heading_PID_kp: REAL_64
	heading_PID_ki: REAL_64
	heading_PID_kd: REAL_64
	heading_PID_delta_t: REAL_64
	heading_PID_windup_threshold: REAL_64
			-- parameters for the heading PID.

	cruise_velocity: REAL_64
	cruise_velocity_threshold: REAL_64
	approach_velocity: REAL_64
	approach_velocity_threshold: REAL_64
			-- parameters managing the velocity.

	change_goal_threshold: REAL_64
	jump_n_points_after_obstacle: INTEGER_32
			-- parameters managing the iteration through the path.

feature -- Setters

	set_goal_threshold (a_val: REAL_64)
			-- Set `goal_threshold' value equal to `a_val'.
		do
			goal_threshold := a_val
		end

	set_heading_PID_kp (a_val: REAL_64)
			-- Set `heading_PID_kp' value equal to `a_val'.
		do
			heading_PID_kp := a_val
		end

	set_heading_PID_ki (a_val: REAL_64)
			-- Set `heading_PID_ki' value equal to `a_val'.
		do
			heading_PID_ki := a_val
		end

	set_heading_PID_kd (a_val: REAL_64)
			-- Set `heading_PID_kd' value equal to `a_val'.
		do
			heading_PID_kd := a_val
		end

	set_heading_PID_delta_t (a_val: REAL_64)
			-- Set `heading_PID_delta_t' value equal to `a_val'.
		do
			heading_PID_delta_t := a_val
		end

	set_heading_PID_windup_threshold (a_val: REAL_64)
			-- Set `heading_PID_windup_threshold' value equal to `a_val'.
		do
			heading_PID_windup_threshold := a_val
		end

	set_cruise_velocity (a_val: REAL_64)
			-- Set `cruise_velocity' value equal to `a_val'.
		do
			cruise_velocity := a_val
		end

	set_cruise_velocity_threshold (a_val: REAL_64)
			-- Set `cruise_velocity_threshold' value equal to `a_val'.
		do
			cruise_velocity_threshold := a_val
		end

	set_approach_velocity (a_val: REAL_64)
			-- Set `approach_velocity' value equal to `a_val'.
		do
			approach_velocity := a_val
		end

	set_approach_velocity_threshold (a_val: REAL_64)
			-- Set `approach_velocity_threshold' value equal to `a_val'.
		do
			approach_velocity_threshold := a_val
		end

	set_change_goal_threshold (a_val: REAL_64)
			-- Set `change_goal_threshold' value equal to `a_val'.
		do
			change_goal_threshold := a_val
		end

	set_jump_n_points_after_obstacle (a_val: INTEGER_32)
			-- Set `jump_n_points_after_obstacle' value equal to `a_val'.
		do
			jump_n_points_after_obstacle := a_val
		end

end
