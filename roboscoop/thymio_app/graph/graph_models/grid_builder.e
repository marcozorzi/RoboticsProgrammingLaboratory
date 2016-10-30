note
	description: "Takes care of creating the grid graph from a map"
	author: "Marco Zorzi, Antoine Seewer"
	date: "06.11.2015"

class
	GRID_BUILDER

feature -- Initialization

	build (map: separate OCCUPANCY_GRID_SIGNALER; scaling_factor: INTEGER_32;
			 conn_strategy: GRID_CONNECTIVITY_STRATEGY):GRID_GRAPH
			-- Create `Current' with given attributes.
		require
			map.state.info.height > 0 and map.state.info.width > 0
		local
			min_x, max_x, min_y, max_y, resolution: REAL_64
			grid: GRID_GRAPH
			grid_width, grid_height : INTEGER_32
		do
			resolution := map.state.info.resolution * scaling_factor
			grid_width := (map.state.info.width.as_integer_32 / scaling_factor).floor
			grid_height := (map.state.info.height.as_integer_32 / scaling_factor).floor
			min_x := map.state.info.origin.position.x
			max_x := min_x + grid_height*resolution
			min_y := map.state.info.origin.position.y
			max_y := min_y + grid_width*resolution
				-- get parameter from the map
			debug
				io.put_string ("min_x: " + min_x.out +
								" | max_x: " + max_x.out +
								" | min_y: " + min_y.out +
								" | max_y: " + max_y.out +
								" | w: " + grid_width.out +
								" | h: " + grid_width.out +
								"%N")
			end

			create grid.make_2d (grid_width, grid_height, min_x, max_x, min_y, max_y, conn_strategy)
				-- creates the actual grid
			Result := grid
		end

feature -- Access

	start (map: separate OCCUPANCY_GRID_SIGNALER;
			grid: separate GRID_GRAPH;
			robot_radius: REAL_64)
			-- Start the map to grid transformation and scales the map as requested
		require
			map.state.info.height > 0 and map.state.info.width > 0
		local
			i, j, ii, jj, scaling_factor: INTEGER_32
			is_obstacle: BOOLEAN
		do
			map.inflate (robot_radius) -- inflate the map to be able to consider the robot as a point mass.
			scaling_factor := (map.state.info.height.as_integer_32 / grid.count_y.as_integer_32).floor

			from
				i := 1
			until
				i > grid.count_x
			loop
				from
					j := 1
				until
					j > grid.count_y
				loop
					is_obstacle := False
					from
						ii := ((i-1)*scaling_factor)+1
					until
						ii > ((i-1)*scaling_factor + scaling_factor) or is_obstacle
					loop
						from
							jj := ((j-1)*scaling_factor )+1
						until
							jj > ((j-1)*scaling_factor+scaling_factor) or is_obstacle
						loop
							if map.occupancy (ii, jj) > map.occupancy_threshold then
								is_obstacle := True
								grid.add_obstacle_by_index (i, j, 1)
							end
							jj := jj + 1
						end
						ii := ii + 1
					end
					j := j + 1
				end
				i := i + 1
			end

		end
end
