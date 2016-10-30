note
	description: "Class that computes the euclidian distances beetween two points"
	author: "Marco Zorzi"
	date: "03.11.2015"

class
	EUCLIDIAN_COST

inherit
	COST_HEURISTIC

create
	make

feature
	make
	do
		create math
	end

feature
	math: TRIGONOMETRY_MATH

feature -- Access
	cost(a,b: SPATIAL_GRAPH_NODE): REAL_64
	do
		if a.is_connected (b) then
			Result := a.distance (b)
		else
			Result := math.euclidean_distance(a.position, b.position)
		end

	end

end

