note
	description: "Class for the ASTAR search"
	author: "Marco Zorzi"
	date: "03.11.2015"

class
	A_STAR_SEARCH

inherit

	GRAPH_SEARCH

create
	make

feature -- Initialization

	make
		do

		end

feature -- Access

	search_path (cost: separate COST_HEURISTIC;
				 starting_node, goal_node: SPATIAL_GRAPH_NODE;
				 path: LIST [like starting_node])
		local

			g_cost : HASH_TABLE[REAL_64, like starting_node]
			previous: HASH_TABLE [like starting_node, like starting_node]
			open, closed: HASH_TABLE [BOOLEAN, like starting_node]
			next, goal, start, a_comparable_node: COMPARABLE_NODE [SPATIAL_GRAPH_NODE]
			current_node: like starting_node
			tentative_cost : REAL_64
			counter : INTEGER
			priority_queue: HEAP_PRIORITY_QUEUE [COMPARABLE_NODE [SPATIAL_GRAPH_NODE]]

		do
				----------------------------------------- INITIALIZATION -------------------------------------------------------------
			create priority_queue.make (0)
			create closed.make (0)
			create open.make (0)
			create g_cost.make (0)
			create previous.make (0)
			create goal.make (goal_node, 0)
			create start.make (starting_node,cost.cost (starting_node, goal_node))
				----------------------------------------- loops -------------------------------------------------------------
			priority_queue.force (start)
			open.force (True, starting_node)
			g_cost.force (0, starting_node)


			from
			until
				(priority_queue.is_empty) or (closed.has(goal_node))
			loop

				counter := counter +1

				debug
					if counter \\ 100 = 0 then
						io.put_string ("priority count: " + priority_queue.count.out +
										" | closed count: " + closed.count.out +
										"%N")
					end
				end

				next := priority_queue.item
				from
				until
					not closed.has(next.node)
				loop
					next := priority_queue.item
					priority_queue.prune (next)
				end


				closed.force (True, next.node)
				open[next.node] := False
				priority_queue.prune (next)

				if next.node = goal_node then
					debug
						io.put_string ("GOAL FOUND: %N" +
										goal_node.position.out +
										"%N")
					end
					current_node := goal.node
					from
					until
						not attached previous.at (current_node)
					loop
						path.force (current_node)
						if attached previous [current_node] as p then
							current_node := p
						end
					end
				else
					across next.node.neighbours as n loop
--						if (not closed.has(n.item)) and (next.node.is_connected(n.item)) then
						if (not closed[n.item]) and (next.node.is_connected(n.item)) then
							if not open[n.item] then


								g_cost.force (g_cost[next.node] + cost.cost (n.item, next.node), n.item)
								create a_comparable_node.make (n.item,g_cost[n.item] + cost.cost (n.item, goal_node))
								priority_queue.force( a_comparable_node)
								previous.force (next.node, n.item)
								open.force (True, n.item)
							else

								tentative_cost := g_cost[next.node] + cost.cost (n.item, next.node)
								if tentative_cost < g_cost[n.item] then
									create a_comparable_node.make (n.item,g_cost[n.item] + cost.cost (n.item, goal_node))
									g_cost[n.item] := tentative_cost
									priority_queue.force( a_comparable_node)
--									a_comparable_node.set_cost (tentative_cost + cost.cost (n.item, goal_node))
									previous[n.item] := next.node

								end
							end
						end
					end
				end
			end
		end


end
