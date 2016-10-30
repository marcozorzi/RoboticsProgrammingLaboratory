note
	description: "Wrapper for the graph node."
	author: "Marco Zorzi, Antoine Seewer"
	date: "12.11.2015"

class
	COMPARABLE_NODE [G -> GRAPH_NODE]

inherit
	COMPARABLE
		redefine
			is_less,
			is_less_equal,
			is_greater,
			is_greater_equal
		end

create

	make

feature -- Initialization

	make(a_node: G; a_cost: REAL_64)
	do
		node := a_node
		cost := a_cost
	end

feature -- Implementation

	set_node(a_node: G)
	do
		node := a_node
	end


	set_cost(a_cost: REAL_64)
	do
		cost := a_cost
	end


	is_less alias "<" (other: like Current): BOOLEAN
			-- Is current object less than `other'?
		do
			Result := cost > other.cost
		end

	is_less_equal alias "<=" (other: like Current): BOOLEAN
			-- Is current object less than or equal to `other'?
		do
			Result := cost >= other.cost
		end

	is_greater alias ">" (other: like Current): BOOLEAN
			-- Is current object greater than `other'?
		do
			Result := cost < other.cost
		end

	is_greater_equal alias ">=" (other: like Current): BOOLEAN
			-- Is current object greater than or equal to `other'?
		do
			Result := cost <= other.cost
		end

	has_neighbour(a_node:  G):BOOLEAN
	do
		Result := node.neighbours.has (a_node)
	end

feature -- Implementation

	node: G
	cost : REAL_64

end
