note
	description: "Parameters for the LOCALIZATION controller"
	author: "Zorzi Marco"
	date: "14.12.2015"

class
	LOCALIZATION_PARAMETERS

feature -- Parameters

	forward_velocity: REAL_64
			-- Forward velocity to keep constant while wandering around to localize.

	angular_velocity: REAL_64
			-- angular velocity to keep constant while wandering around to localize.

	object_distance_threshold: REAL_64
			-- Threshold for the distance between a goal where to compute the object recognition-

feature -- Setters

	set_forward_velocity (a_val: REAL_64)
			-- Set `forward_velocity' value equal to `a_val'.
		do
			forward_velocity := a_val
		end

	set_angular_velocity (a_val: REAL_64)
			-- Set `angular_velocity' value equal to `a_val'.
		do
			angular_velocity := a_val
		end

	set_object_distance_threshold (a_val: REAL_64)
			-- Set `object_distance_threshold' value equal to `a_val'.
		do
			object_distance_threshold := a_val
		end
end
