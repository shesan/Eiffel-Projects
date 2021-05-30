note
	description: "[
		Directed Graph implemented as Adjacency List 
	    in generic parameter G that is Comparable:
			vertices: LIST[VERTEX[G]]
			edges: ARRAY [EDGE [G]]
			-- commands
			add_edge (e: EDGE [G])
			add_vertex (v: VERTEX [G])
			remove_edge (a_edge: EDGE [G])
			remove_vertex (a_vertex: VERTEX [G])
			
			A vertex has outgoing and incoming edges.
			An edge has a source vertex and destination vertex.
			Vertices and Edges must be attached.
		]"
	ca_ignore: "CA023", "CA023: Undeed parentheses", "CA017", "CA107: Empty compound after then part of if"
	author: "JSO and JW"
	date: "$Date$"
	revision: "$Revision$"

class
	LIST_GRAPH[G -> COMPARABLE]
inherit
	ITERABLE[VERTEX[G]]
		redefine out end

	DEBUG_OUTPUT
		redefine out end

create
	make_empty

feature -- Model

	model: COMPARABLE_GRAPH[VERTEX[G]]
			-- abstraction function
		do
			create Result.make_empty
			across Current.vertices is v
			loop
				Result.vertex_extend (v)
			end
			across edges is e
			loop
				Result.edge_extend ([e.source, e.destination])
			end
			-- To do.
		ensure
			comment("Establishes model consistency invariants")
		end

feature {NONE} -- Initialization

	make_empty
			-- create empty graph
		do
			create {LINKED_LIST[VERTEX[G]]} vertices.make
			vertices.compare_objects
		ensure
			mm_empty_graph: model.is_empty
		end

	get_vertex(g: G): detachable VERTEX[G]
			-- Return the associated vertext object storing `g`, if any.
			-- Note. In the invariant, it is asserted that all vertices are unique.
		do
			across Current.vertices is v
			loop
				if v.item ~ g then
					Result := v
				end
			end

			-- To do.
		ensure
			mm_attached:
				attached Result implies model.has_vertex (create {VERTEX[G]}.make (g))
			mm_not_attached:
				not attached Result implies not model.has_vertex (create {VERTEX[G]}.make (g))
		end


feature -- Iterator Pattern
	new_cursor: ITERATION_CURSOR [VERTEX[G]]
		do
			Result := vertices.new_cursor
		end

feature -- queries

	vertices: LIST[VERTEX[G]]

	vertex_count: INTEGER
			-- number of vertices
		do
			Result := vertices.count

			-- To do.
		ensure
			mm_vertex_count: Result = model.vertex_count
		end

	edge_count: INTEGER
			-- number of outgoing edges
		do
			across Current.vertices is v
			loop
				Result := Result + v.outgoing_edge_count
			end

			-- To do.
		ensure
			mm_edge_count: Result = model.edge_count
		end

	is_empty: BOOLEAN
			-- does the graph contain no vertices?
		do
			Result := vertices.count = 0

			-- To do.
		ensure
			comment ("See invariant empty_consistency")
			mm_is_empty: Result = model.is_empty
		end

	has_vertex(a_vertex: VERTEX[G]): BOOLEAN
		do
			across Current.vertices is v
			loop
				if Result /= true then
					Result := v ~ a_vertex
				end
			end

			-- To do.
		ensure
			mm_has_vertex: Result = model.has_vertex (a_vertex)
		end

	has_edge(a_edge: EDGE[G]): BOOLEAN
		do
			across Current.vertices is v
			loop
				across v.outgoing is e
				loop
					if Result /= true then
						Result := e ~ a_edge
					end
				end
			end

			-- To do.
		ensure
			mm_has_edge: Result = model.has_edge ([a_edge.source, a_edge.destination])
		end

	edges: ARRAY[EDGE[G]]
			-- array of all outgoing edges
		do
			create {ARRAY [EDGE [G]]} Result.make_empty
			across Current.vertices is v
			loop
				across v.outgoing is e
				loop
					Result.force (e, Result.count + 1)
				end
			end
			Result.compare_objects

			-- To do.
		ensure
			mm_edges_count:
				Result.count = model.edge_count
			mm_edges_membership:
				across Result as l_edge all
					model.has_edge ([l_edge.item.source, l_edge.item.destination])
				end
		end

feature -- commands

	add_vertex(a_vertex: VERTEX[G])
		require
			mm_non_existing_vertex:
				not model.has_vertex (a_vertex)
		local
			new_vertex : VERTEX [G]
		do
			create new_vertex.make (a_vertex.item)
			Current.vertices.force (new_vertex)

			-- To do.
		ensure
			mm_vertex_added:
				model ~ (old model.deep_twin) + a_vertex
		end

	add_edge(a_edge: EDGE[G])
		require
			mm_existing_source_vertex:
				model.has_vertex (a_edge.source)
			mm_existing_destination_vertex:
				model.has_vertex (a_edge.destination)
			mm_non_existing_edge:
				not model.has_edge ([a_edge.source, a_edge.destination])
		local
			src, dst: VERTEX [G]
			new_edge: EDGE [G]
		do

			create src.make (a_edge.source.item)
			create dst.make (a_edge.destination.item)

			across Current.vertices is v
			  loop
			  	if v ~ src then
			  		src := v
			  	end
			  	if v ~ dst then
			  		dst := v
			  	end
			  end

			 create new_edge.make (src, dst)

			 if src ~ dst  then
				src.add_edge (new_edge)
			else
				src.add_edge (new_edge)
				dst.add_edge (new_edge)
			end

			-- To do.
		ensure
			mm_edge_added:
				model ~ (old model.deep_twin) |\/| [a_edge.source, a_edge.destination]
		end

	remove_edge(a_edge: EDGE[G])
		require
			mm_existing_edge:
				model.has_edge ([a_edge.source, a_edge.destination])
		local
			src, dst: VERTEX [G]
		do

			create src.make (a_edge.source.item)
			create dst.make (a_edge.destination.item)

			across Current.vertices is v
			loop
				if v ~ src then
					src := v
				elseif v ~ dst then
					dst := v
				end
			end

			src.remove_edge (a_edge)
			dst.remove_edge (a_edge)
			-- To do.
		ensure
			mm_edge_removed:
				model ~ (old model.deep_twin) |\ [a_edge.source, a_edge.destination]
		end

	remove_vertex(a_vertex: VERTEX[G])
		require
			mm_existing_vertex:
				model.has_vertex (a_vertex)
	local
			l_edge: EDGE [G]
			v: VERTEX [G]
		do

			--create v.make (a_vertex.item)
			v := get_vertex (a_vertex.item)
--			across Current.vertices is ver
--			loop
--				if ver ~ a_vertex then
--					v := ver
--				end
--			end
			if attached v then
				across v.outgoing is edg
					loop
						l_edge := edg
						--remove_edge (edg)
						edg.destination.remove_edge (l_edge)
					end
				across v.incoming is edg
					loop
						l_edge := edg
						--remove_edge (edg)
						edg.source.remove_edge (l_edge)
					end

				vertices.prune_all (v)
			end
			-- To do.
		ensure
			mm_vertex_removed:
				model ~ (old model.deep_twin) - a_vertex
		end

feature -- out

	comment(s: STRING): BOOLEAN
		do
			Result := true
		end

	debug_output: STRING
		do
			Result := ""
			across vertices as l_vertex loop
				Result := Result + "[" + l_vertex.item.debug_output + "]"
			end
		end

	out: STRING
		do
			Result := ""
			across vertices as l_vertex loop
				Result := Result + "[" + l_vertex.item.out + "]"
			end

		end

feature -- agent functions

	vertices_edge_count: INTEGER
			-- total number of incoming and outgoing edges of all vertices in `vertices`
			-- Result = (Σv ∈ vertices : v.outgoing_edge_count + v.incoming_edge_count)
		do
			Result := vertices_outgoing_edge_count + vertices_incoming_edge_count
		end

	vertices_outgoing_edge_count: INTEGER
			-- total number of outgoing edges of all vertices in `vertices`
			-- Result = (Σv ∈ vertices : v.outgoing_edge_count)
		do
			Result := {NUMERIC_ITERABLE[VERTEX[G]]}.sumf(
								vertices,
								agent (v: VERTEX[G]): INTEGER
									do
										Result := v.outgoing_edge_count
									end)
		end

	vertices_incoming_edge_count: INTEGER
			-- total number of incoming edges of all vertices in `vertices`
			-- Result = (Σv ∈ vertices : v.incoming_edge_count)
		do
			Result := {NUMERIC_ITERABLE[VERTEX[G]]}.sumf(
								vertices,
								agent (v: VERTEX[G]): INTEGER
									do
										Result := v.incoming_edge_count
									end)
		end

invariant
	empty_consistency:
		vertices.count = 0 implies edges.count = 0

	vertex_count = vertices.count

	vertices.lower = 1

	unique_vertices:
		across 1 |..| vertex_count as i all
		across 1 |..| vertex_count as j all
		i.item /= j.item implies vertices[i.item] /~ vertices[j.item]
		end
		end

	consistency_incoming_outgoing:
		across vertices is l_vertex all
			across l_vertex.outgoing is l_edge all
				l_edge.destination.has_incoming_edge(l_edge)
			end
			and
			across l_vertex.incoming is l_edge all
				l_edge.source.has_outgoing_edge(l_edge)
			end
		end

	consistency_incoming_outgoing2:
		-- ∀e ∈ edges:
		--	   ∧ e ∈ e.source.outgoing
		--	   ∧ e ∈ e.destination.incoming
		across edges as l_edge all
			l_edge.item.source.has_outgoing_edge(l_edge.item)
			and
			l_edge.item.destination.has_incoming_edge(l_edge.item)
		end

	model_consistency_vertex_count:
		model.vertex_count = vertex_count

	model_consistency_edge_count:
		model.edge_count = edge_count

	model_consistency_vertices:
		across model.vertices as l_v all
			has_vertex (l_v.item)
		end

	model_consistency_edges:
		across model.edges as l_e all
			has_edge ([l_e.item.first, l_e.item.second])
		end

	count_property_symmetry_1: -- (Σv ∈ vertices : v.outgoing_edge_count + v.incoming_edge_count) = 2 * edge_count
		vertices_edge_count = 2 * edge_count

	count_property_symmetry_2: -- (Σv ∈ vertices : v.outgoing_edge_count) = (Σv ∈ vertices : v.incoming_edge_count)
		vertices_outgoing_edge_count = vertices_incoming_edge_count

	self_loops_are_incomng_and_outgoing:
		across
			vertices is l_vertex
		all
			across l_vertex.incoming is l_edge  some
				l_edge.source ~ l_edge.destination
			end
			=
			across l_vertex.outgoing is l_edge  some
				l_edge.source ~ l_edge.destination
			end
		end
end
