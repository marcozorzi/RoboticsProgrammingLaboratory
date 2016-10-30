note
	description: "Class that defines a connectivity strategy"
	author: "Marco Zorzi"
	date: "03.11.2015"

class
	GRID_CONNECTIVITY

inherit
	GRID_CONNECTIVITY_STRATEGY

create
	make

feature -- Creation
	make(a_kind: INTEGER)
	do
		kind:= a_kind
	end

feature -- Access

	connect (g: separate GRID_GRAPH)
	local
		i,j : INTEGER_32


	do		-- Create connections.
		from
			i := 1
		until
			i > max_x
		loop
			from
				j := 1
			until
				j > max_y
			loop
				connect_nodes(g,i,j)
				j:=j+1
			end
			i := i+1
		end
	end


	save_values(x,y:INTEGER_32)
	do
		max_x := x
		max_y := y
	end

	remove_obstacles_from_graph(map: separate GRID_GRAPH; grid: separate OCCUPANCY_GRID_SIGNALER)
	local
		i,j : INTEGER_32
	do
		from
			i := 1
		until
			i > max_x
		loop
			from
				j := 1
			until
				j > max_y
			loop
				if  (grid.occupancy (i,j).as_integer_32 > grid.occupancy_threshold) then
					map.add_obstacle_by_index (i, j, 1)
				end
				j:=j+1
			end
			i := i+1
		end
	end

feature {NONE}

	max_x, max_y, kind: INTEGER_32
		--maximum sizes of the grid graph

	connect_nodes(g: separate GRID_GRAPH; pos_x, pos_y: INTEGER_32)
	require
		kind = 4 or kind = 8
	do
		if ( pos_x < max_x) then
			g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x + 1, pos_y + 0, 1))

		end
		if ( pos_x > 1) then
			g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x - 1, pos_y + 0, 1))

		end
		if ( pos_y < max_y) then
			g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x + 0, pos_y + 1, 1))

		end
		if ( pos_y > 1) then
			g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x + 0, pos_y - 1, 1))

		end

		---------------------- DIAGONAL NODES ---------------------

		if kind = 8 then
			if ( pos_x < max_x and pos_y < max_y) then
				g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x + 1, pos_y + 1, 1))

			end
			if ( pos_x < max_x and pos_y > 1) then
				g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x + 1, pos_y - 1, 1))

			end
			if ( pos_x > 1 and pos_y < max_y) then
				g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x - 1, pos_y + 1, 1))

			end
			if ( pos_x > 1 and pos_y > 1) then
				g.node_at (pos_x, pos_y, 1).connect (g.node_at (pos_x - 1, pos_y - 1, 1))

			end
		end
	end

end
