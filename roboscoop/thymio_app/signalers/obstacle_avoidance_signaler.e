note
	description: "State of the obstacle avoidance task"
	author: "Marco Zorzi, Antoine Seewer"
	date: "06.11.2015"


class
	OBSTACLE_AVOIDANCE_SIGNALER

feature -- Access

	is_boundary_following: BOOLEAN
			-- Has the state "boundary following"

	is_recover_obstacle: BOOLEAN
			-- Has the state "recover obstacle"

	is_transition_to_goal: BOOLEAN
			-- Has the state "transition to goal"

	is_goal_unreachable: BOOLEAN
			-- Has the state "goal unreachable"

feature -- Setters and clear all

	set_is_boundary_following (a_val: BOOLEAN)
			-- Set `is_boundary_following' value equal to `a_val'.
		do
			is_boundary_following := a_val
		end

	set_is_transition_to_goal (a_val: BOOLEAN)
			-- Set `is_transition_to_goal' value equal to `a_val'.
		do
			is_transition_to_goal := a_val
		end

	set_is_recover_obstacle (a_val: BOOLEAN)
			-- Set `is_recover_obstacle' value equal to `a_val'.
		do
			is_recover_obstacle := a_val
		end

	set_is_goal_unreachable (a_val: BOOLEAN)
			-- Set `is_goal_unreachable' value equal to `a_val'.
		do
			is_goal_unreachable := a_val
		end

	clear_all_states
			-- Set all pending flags to False.
		do
			is_boundary_following	:= False
			is_recover_obstacle 	:= False
			is_transition_to_goal 	:= False
			is_goal_unreachable 	:= False
		end

end
