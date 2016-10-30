note
	description: "State of the robot with information passing between tasks"
	author: "Marco Zorzi, Antoine Seewer"
	date: "08.11.2015"

class
	ROBOT_SIGNALER

feature -- Access

	is_object_recognition_activated: BOOLEAN
			-- tells if the obstacle avoidance has been activated

	is_object_recognition_done: BOOLEAN
			-- tells if the obstacle avoidance has been activated

	is_go_to_goal_required: BOOLEAN
			-- asks to restart going to goal

	is_at_goal: BOOLEAN
			-- tells if the robot is at goal

	is_finding_path: BOOLEAN
			-- is the path planning controller finding a path

	is_publishing_path: BOOLEAN
			-- is the path planning controller publishing the path

	is_path_ready: BOOLEAN
			-- communicates when the path is ready		

	is_go_to_goal: BOOLEAN
			-- Has the state "go to goal"

	is_go_to_goal_started : BOOLEAN
			-- Has the state 'is_go_to_goal'

	is_obstacle_avoidance: BOOLEAN
			-- Has the state "obstacle avoidance"

	is_obstacle_avoidance_done: BOOLEAN
			-- Is the state "obstacle avoidance" done

	is_stop_requested: BOOLEAN
			-- Is stop requested?

	is_localized: BOOLEAN
			-- Is the robot localized?

	is_done_exploring: BOOLEAN
			-- is the robot done exploring the environment?

feature -- Setters and clear all

	set_is_object_recognition_activated(a_val: BOOLEAN)
			-- Set `is_object_recognition_activated' value equal to `a_val'.
		do
			is_object_recognition_activated := a_val
		end

	set_is_object_recognition_done(a_val: BOOLEAN)
			-- Set `is_object_recognition_done' value equal to `a_val'.
		do
			is_object_recognition_done := a_val
		end

	set_is_go_to_goal_required(a_val: BOOLEAN)
			-- Set `is_go_to_goal_required' value equal to `a_val'.
		do
			is_go_to_goal_required := a_val
		end

	set_is_at_goal(a_val: BOOLEAN)
			-- Set `is_at_goal' value equal to `a_val'.
		do
			is_at_goal := a_val
		end

	set_is_finding_path (a_val: BOOLEAN)
			-- Set `is_finding_path' value equal to `a_val'.
		do
			is_finding_path := a_val
		end

	set_is_publishing_path (a_val: BOOLEAN)
			-- Set `is_publishing_path' value equal to `a_val'.
		do
			is_publishing_path := a_val
		end

	set_is_path_ready (a_val: BOOLEAN)
			-- Set `is_path_ready' value equal to `a_val'.
		do
			is_path_ready := a_val
		end

	set_is_go_to_goal (a_val: BOOLEAN)
			-- Set `is_go_to_goal' value equal to `a_val'.
		do
			is_go_to_goal := a_val
		end

	set_is_go_to_goal_started (a_val: BOOLEAN)
			-- Set `is_go_to_goal_started' value equal to `a_val'.
		do
			is_go_to_goal_started := a_val
		end

	set_is_obstacle_avoidance (a_val: BOOLEAN)
			-- Set `is_obstacle_avoidance' value equal to `a_val'.
		do
			is_obstacle_avoidance := a_val
		end

	set_is_obstacle_avoidance_done (a_val: BOOLEAN)
			-- Set `is_obstacle_avoidance_done' value equal to `a_val'.
		do
			is_obstacle_avoidance_done := a_val
		end

	set_is_stop_requested (a_val: BOOLEAN)
			-- Set `is_stop_requested' value equal to `a_val'.
		do
			is_stop_requested := a_val
		end

	set_is_localized (a_val: BOOLEAN)
			-- Set `is_localized' value equal to `a_val'.
		do
			is_localized := a_val
		end

	set_is_done_exploring (a_val: BOOLEAN)
			-- Set `is_done_exploring' value equal to `a_val'.
		do
			is_done_exploring := a_val
		end

	clear_all_states
			-- Set all pending flags to False.
		do
			is_go_to_goal			:= False
			is_obstacle_avoidance 	:= False
			is_finding_path  	:= 	False
			is_publishing_path 	:= 	False
			is_object_recognition_activated := 	False
			is_go_to_goal_required := 	False
			is_obstacle_avoidance_done := 	False
			is_stop_requested := 	False

		end

end
