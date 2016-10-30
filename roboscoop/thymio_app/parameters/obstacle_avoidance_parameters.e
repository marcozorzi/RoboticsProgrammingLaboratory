note
	description: "Parameters for the obstacle avoidance task."
	author: "Seewer Antoine & Zorzi Marco"
	date: "12.11.2015"


class
	OBSTACLE_AVOIDANCE_PARAMETERS

feature -- Parameters

	boundary_following_speed: REAL_64
	desired_distance_from_wall: REAL_64
			-- speed and distance to keep while following the wall.

	recover_turning_power_max: REAL_64
	recover_turning_power_increment: REAL_64
	recover_turning_power_power: REAL_64
	recover_turning_power_multiplicator: REAL_64
			-- parameters for the turning power while recovering obstacle.

	recover_local_angular_speed_threshold: REAL_64
	recover_local_anti_collision_forward_speed: REAL_64
	recover_local_anti_collision_angular_speed_multiplicator: REAL_64
			-- parameters for the speed while recovering obstacle.

feature -- Setters

	set_boundary_following_speed (a_val: REAL_64)
			-- Set `boundary_following_speed' value equal to `a_val'.
		do
			boundary_following_speed := a_val
		end

	set_desired_distance_from_wall (a_val: REAL_64)
			-- Set `desired_distance_from_wall' value equal to `a_val'.
		do
			desired_distance_from_wall := a_val
		end

	set_recover_turning_power_max (a_val: REAL_64)
			-- Set `recover_turning_power_max' value equal to `a_val'.
		do
			recover_turning_power_max := a_val
		end

	set_recover_turning_power_increment (a_val: REAL_64)
			-- Set `recover_turning_power_increment' value equal to `a_val'.
		do
			recover_turning_power_increment := a_val
		end

	set_recover_turning_power_power (a_val: REAL_64)
			-- Set `recover_turning_power_power' value equal to `a_val'.
		do
			recover_turning_power_power := a_val
		end

	set_recover_turning_power_multiplicator (a_val: REAL_64)
			-- Set `recover_turning_power_multiplicator' value equal to `a_val'.
		do
			recover_turning_power_multiplicator := a_val
		end

	set_recover_local_angular_speed_threshold (a_val:  REAL_64)
			-- Set `recover_local_angular_speed_threshold' value equal to `a_val'.
		do
			recover_local_angular_speed_threshold := a_val
		end

	set_recover_local_anti_collision_forward_speed (a_val:  REAL_64)
			-- Set `recover_local_anti_collision_forward_speed' value equal to `a_val'.
		do
			recover_local_anti_collision_forward_speed := a_val
		end

	set_recover_local_anti_collision_angular_speed_multiplicator (a_val: REAL_64)
			-- Set `recover_local_anti_collision_angular_speed_multiplicator' value equal to `a_val'.
		do
			recover_local_anti_collision_angular_speed_multiplicator := a_val
		end

end
