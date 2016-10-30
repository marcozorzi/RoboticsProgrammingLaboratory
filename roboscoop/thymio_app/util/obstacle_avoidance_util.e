note
	description: "Class handling obstacle avoidance related calculations."
	author: "Antoine Seewer, Marco Zorzi"
	date: "19.10.2015"

class
	OBSTACLE_AVOIDANCE_UTIL

inherit
	TRIGONOMETRY_MATH
	EXECUTION_ENVIRONMENT

create
	make

feature {NONE} -- Initialization.

	make
		do
			distance_multiplier := 10
		end

feature -- Access.

	compute_one_sensor_angular_speed (desired_distance: REAL_64; r_sig: separate THYMIO_RANGE_GROUP): REAL_64
			-- Return the angular velocity in the case only one sensor is observing the obstacle.
		do
			if r_sig.is_obstacle_right_front then
					-- if facing the wall with the right side, set a negative turn rate.			
				Result := -(r_sig.sensors[r_sig.front_sensors_number].range - desired_distance) * distance_multiplier
			elseif r_sig.is_obstacle_left_front then
					-- if facing the wall with the left side, set a positive turn rate.
				Result := (r_sig.sensors[1].range - desired_distance) * distance_multiplier
			else
					-- if active sensor is neither right or left, move on straight until two sensor will sense				
				Result := 0
			end
		end

	compute_two_sensor_angular_speed (desired_distance: REAL_64; r_sig: separate THYMIO_RANGE_GROUP): REAL_64
			-- Return the angular velocity in the case two sensors are observing the obstacle.
		do
			if r_sig.sensors[r_sig.front_sensors_number].is_valid_range or r_sig.sensors[r_sig.front_sensors_number - 1].is_valid_range then
				Result := (get_distance_to_wall(r_sig) - desired_distance) * distance_multiplier
			else
				Result := -(get_distance_to_wall(r_sig) - desired_distance) * (distance_multiplier*10)
			end
		end

	get_wall_position(r_sig: separate THYMIO_RANGE_GROUP): INTEGER_32
			-- Return the side of the wall.
		do
			if r_sig.last_sensor_active < r_sig.front_sensors_number/2 then
				Result := 1
			else
				Result := -1
			end
		end

	get_distance_to_wall(r_sig: separate THYMIO_RANGE_GROUP): REAL_64
			-- Return some distance to the wall. The correct implementation of this function failed, apparently due to the sensor noise.
		local
			i: INTEGER_32
		do
			from
				i := 1
			until
				i > r_sig.front_sensors_number
			loop
				if r_sig.sensors[i].is_valid_range then
					Result := r_sig.sensors[i].range + r_sig.sensors_distance_to_base[i]
					i := r_sig.front_sensors_number + 1
				end
				i := i + 1
			end
		end

	is_goal_direction_free (angle: REAL_64; r_sig: separate THYMIO_RANGE_GROUP): BOOLEAN
			-- Whether the goal direction is free?
		do
			if angle.abs > 0.15 then
				if (r_sig.sensors[r_sig.front_sensors_number].is_valid_range or
					r_sig.sensors[r_sig.front_sensors_number - 1].is_valid_range) then
					if angle < 0  then
						Result := False
					else
						Result := True
					end
				elseif (r_sig.sensors[1].is_valid_range or
						r_sig.sensors[2].is_valid_range) then
					if angle > 0  then
						Result := False
					else
						Result := True
					end
				else
					Result := True
				end
			else
				Result := False
			end
		end

feature {NONE}

	distance_multiplier: REAL_64
			-- Multiplier for the speed.

end
