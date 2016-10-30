note
	description: "Deferred class for a graph search"
	author: "Marco Zorzi"
	date: "01.11.2015"

deferred class
	GRAPH_SEARCH

feature -- Access

	search_path(cost: separate COST_HEURISTIC
				starting_node, end_node: separate GRAPH_NODE;
				path: LIST[like starting_node]
				)

		-- General function to search a graph from start node to end node
		-- which returns a list of nodes connecting the queried nodes
	deferred
	end

end
