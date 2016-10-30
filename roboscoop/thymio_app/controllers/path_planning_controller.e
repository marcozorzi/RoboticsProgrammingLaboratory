note
	description: "Controller to calculate the path from a map"
	author: "Marco Zorzi"
	date: "07.11.2015"

class
	PATH_PLANNING_CONTROLLER

inherit
	CANCELLABLE_CONTROL_LOOP

create
	make

feature {NONE} -- Initialization

	make (s_sig: separate STOP_SIGNALER)
			-- Create Current and assign given attributes.
		do
			stop_signaler := s_sig
		end

feature -- Implementation


	find_path (s_sig: separate STOP_SIGNALER;
				robot_sig: separate ROBOT_SIGNALER;
				map: separate OCCUPANCY_GRID_SIGNALER;
				comm: separate PATH_PLANNER_COMMUNICATOR;
				start : separate POINT_MSG;
				goals: separate LIST[POINT_MSG];
				path_planning_parameters: separate PATH_PLANNING_PARAMETERS)
			-- takes the read map and converts it into  meaningful graph and searches over it

		require
			robot_sig.is_done_exploring and
			map.state.data.count > 0 and
			not robot_sig.is_at_goal and
			not s_sig.is_stop_requested and
			not robot_sig.is_publishing_path  and
			not robot_sig.is_path_ready

		local
			resolution: REAL_64
					-- inflation of the obstacles

			width, height, goal_x, goal_y, start_x, start_y, i: INTEGER_32
					-- width and hieght of the map

			builder : GRID_BUILDER
					-- object to build the grid	

			grid: GRID_GRAPH

			conn_strategy: GRID_CONNECTIVITY

			starting_node, goal_node: SPATIAL_GRAPH_NODE
					-- particular instances of start and goal nodes

			a_cost: EUCLIDIAN_COST
					-- euclidian cost

			search: A_STAR_SEARCH
					-- the a star search object	

			path, path_total: ARRAYED_LIST [SPATIAL_GRAPH_NODE]
		do
			if robot_sig.is_at_goal then

			end
			robot_sig.clear_all_states
			robot_sig.set_is_finding_path (True)

			create conn_strategy.make (path_planning_parameters.connection)
			create builder
			create path.make (0)
			create path_total.make (0)
			create a_cost.make
			create search.make

			resolution := map.state.info.resolution
			width := map.state.info.width.as_integer_32
			height := map.state.info.height.as_integer_32
					-- getting data from the map

			conn_strategy.save_values((height / path_planning_parameters.scaling_factor).floor, (width / path_planning_parameters.scaling_factor).floor)
					-- establishing a proper connectivity function

			grid := builder.build (map, path_planning_parameters.scaling_factor, conn_strategy)
			builder.start (map, grid, path_planning_parameters.inflation_radius)
					-- create grid, remove and inflate obstacles
			from
				i := goals.count
			until
				i < 1
			loop
				if i = 1 then
					start_x := (start.x / (resolution * path_planning_parameters.scaling_factor)).floor
					start_y := (start.y / (resolution * path_planning_parameters.scaling_factor)).floor
				else
					start_x := (goals.at (i-1).x / (resolution * path_planning_parameters.scaling_factor)).floor
					start_y := (goals.at (i-1).y / (resolution * path_planning_parameters.scaling_factor)).floor
				end

	 			goal_x := (goals.at (i).x / (resolution * path_planning_parameters.scaling_factor)).floor
				goal_y := (goals.at (i).y / (resolution * path_planning_parameters.scaling_factor)).floor
						-- I get the indexes of the goal and starting nodes

				goal_node := grid.node_at (goal_x, goal_y , 1)
				starting_node := grid.node_at (start_x, start_y, 1)
						-- Getting the actual nodes of the graph

				search.search_path (a_cost, starting_node, goal_node,path)
				path_total.append (path)
				path.wipe_out
				i := i - 1
			end

			if path_total.count = 0 then
				io.put_string ("GOAL UNREACHABLE! %N")
			else
				comm.publish_path(path_total)
					-- publish path
			end
			robot_sig.clear_all_states
			robot_sig.set_is_path_ready(True)
		end

end
