note
	description: "[
		A self balancing binary search tree using a rotation called splaying.

		A splay tree lets most frequently(recently) accessed elements stay near
		the root. This allows comparably faster lookup to a recently accessed
		elements than a normal binary search tree.

		A splay tree does not have logarithmic upper bound respect to the height
		of the tree, however the splay tree has a gurenteed amortised logarithmic
		running time for insertions, searches, and deletion.
		]"
	author: "Jinho Hwang"
	date: "$Date$"
	revision: "$Revision$"

class
	SPLAY_TREE [K -> COMPARABLE, V -> ANY]

inherit
	BALANCED_BST [K, V]
		redefine
			out
		end

create 	-- Contrast this `create` clause with it being absent in `BALANCED_BST`.
		-- Because the current class is effective (not deferred), we must delcare
		-- a `create` clause that lists all commands that can be used as constructors.
	make

feature {NONE} -- Command

	make
			-- Makes the current balanced splay tree empty.
		do
			create root.make_external
		ensure
			root_exists:
				attached root
			root_empty:
				attached root as a_root and then
				a_root.count = 0
		end

feature -- Attribute

	root: TREE_NODE[K, V]
			-- The root of the splay tree.
			-- This root is never Void (i.e., it is always attached).

feature -- Traversal

	nodes: LIST[like root]  -- `like root`: each member in the list has its type
							-- corresponding to that of `root` (anchor type)
			-- Returns a linear order corresponding to an in-order traversal from the `root`.
		do
			Result := root.nodes
		end

feature -- Basic

	has (p_key: K): BOOLEAN
			-- Does the current tree have a node storing key equal to `p_key`?
		do
			Result := root.has(p_key)
		ensure then
			root_has_the_node_with_the_p_key:
				Result = root.has (p_key)
		end

	has_node (p_node: TREE_NODE[K,V]): BOOLEAN
			-- Does Current tree have a node same key as p_node?
		do
			Result := root.has_node(p_node)
		ensure then
			root_has_the_p_node:
				Result = root.has_node (p_node)
		end

	count: INTEGER
			-- Returns the number of nodes in the tree.
		do
			Result := root.count -- then root.count is the count.
		ensure then
			root_count:
				Result = root.count
		end

	is_empty: BOOLEAN
			-- Checks if the BST has no nodes.
		do
			Result := root.is_external
		ensure then
			empty_if_count_is_zero:
				Result = (count = 0)
		end

	relink (p_parent, p_child: TREE_NODE[K, V]; p_make_left_child: BOOLEAN)
			-- If `p_make_left_child` is true, replace `p_child` as the left child of `p_parent`.
			-- Otherwise, replace `p_child` as the right child of `p_parent`.
		do
			p_child.parent := p_parent
			if
				p_make_left_child -- If the child must be left child,
			then
				p_parent.left := p_child
			else
				p_parent.right := p_child
			end
		ensure
			childs_parent_is_linked:
				p_child.parent = p_parent
			case_of_relinking_the_left_child:
				p_make_left_child implies p_parent.left = p_child
			case_of_relinking_the_right_child:
				not p_make_left_child implies p_parent.right = p_child
		end

feature -- Intermediate

	-- For simplicity of this lab, we do not consider postconditions for this section of intermediate splay operations.
	-- As an optional challenge, what postconditions can you come up with?
	-- Discuss your answer with Jinho (TA) or Jackie (instructor).
	-- Do not include your answer in the submission for grading.

	rotate (p_node: TREE_NODE[K, V])
			-- Performs a single rotation from the node `p_node`.
		require
			-- These preconditions are given to you. Do not modify them.
			has_a_parent_to_rotate:
				attached p_node.parent
		local
			x, y, z: detachable like p_node
		do
			x := p_node
			y := x.parent -- We know this exists. (x is not a root)
			if
				attached y as a_y -- If parent exists
								  -- (we know parent exists.)
			then
				if
					attached a_y.parent as y_parent
				then
					z := y_parent
				end

				if
					attached z as a_z -- If the grandparent exists,
				then
					relink(z, x, (y = z.left))
--				    z           z   -- Make x attached to left child. (if y is left child)
--				   /           /
--				  y    -->    x
--				 /           / \
--				x           L   R
--			   / \
--			  L   R
				else -- If the grandparent does not exist,
					root := x
					x.parent := Void

--					|           |		
--				    y           x   -- x becomes root of the tree
--				   / 	-->    / \
--				  x           L   R
-- 				 / \
--				L   R
				end

				if
					x = a_y.left -- If x was y's left child,
				then
					if
						attached x.right as a_x_right 	-- if right child exists,
					then
						relink(a_y, a_x_right, true) 	-- x's right child becomes y's left.
					end

					relink(x, a_y, false)			-- y becomes x's right child.
--				    z           z   -- Make x attached to left child. (if y is left child)
--				   / 		   /	-- x.left, x, y has made a rotation.
--				  x    -->    x
--				 / \         / \
--				L   R		L	y
--							   /
--							  R
--
				else -- If x was y's right child,
					if
						attached x.left as a_x_left 	-- if left child exists,
					then
						relink(a_y, a_x_left, false)	-- x's left child becomes y's right.
					end

					relink(x, a_y, true)			-- y becomes left child of x.
--					z		    z           z   -- Make x attached to left child. (if y is left child)
--				   /		   / 		   /	-- x.left, x, y has made a rotation.
--				  y		-->   x    -->    x
--				   \		 / \         / \
--					x		L   R	    y   R
--				   / \					 \
--				  L   R					  L
				end
			end
		end

	splay(p_node: TREE_NODE[K,V])
			-- Iteratively, performs splay operation(s) from the node `p_node` up to the root.
		do
			from
			until
				p_node = root
			loop
				if
					attached p_node.parent as a_parent
				then
					if
						attached a_parent.parent as a_grand_parent
					then
						-- there is a grand parent
						if
							(
								attached a_grand_parent.left as a_grand_parent_left and then
								a_parent = a_grand_parent_left
							) -- does grand-parent-and-parent slant to the left
							=
							(
								attached a_parent.left as a_parent_left and then
								p_node = a_parent_left
							) -- does parent-and-node slant to the left
						then
							-- grand-parent-parent-node slants the same way
							-- zig-zig case
							rotate(a_parent)
							rotate(p_node)
						else
							-- grand-parent-parent-node slants different ways
							-- zig-zag
							rotate(p_node)
							rotate(p_node)
						end
					else -- if grand parent does not exists,
						-- zig (with a parent, but no grand parent)
						rotate(p_node)
					end
				end
			end
		end

feature -- Advanced

	search (p_key: K): detachable V
			-- Returns the value mapped from the search key `p_key`.
		local
			l_node, l_splay_node: TREE_NODE[K, V]
		do
			l_node := root.tree_search(p_key) -- Do an attempt to search the node with key p_key.
			l_splay_node := l_node
			if
				l_splay_node.is_external
			then
				l_splay_node := l_splay_node.parent
			end

			if
				attached l_splay_node as a_l_splay_node
			then
				splay(a_l_splay_node)
			end

			if
				l_node.is_external
			then
				-- respected value does not exsits. Returns nothing.
			else -- l_node.is_internal
				Result := l_node.value 	-- result must be the search result from root.
			end
		ensure then
			count_is_same:
				count = old count

			case_of_key_found:
				has(p_key) implies Result = root.tree_search (p_key).value

			case_of_key_not_found:
				not has(p_key) implies Result = (create {TREE_NODE[K, V]}.make_external).value

			consistent_in_orders:
				across
					1 |..| count is i
				all
					nodes[i] ~ (old nodes.deep_twin)[i]
				end
		end

	insert (p_key: K; p_value: V)
			-- Inserts a new node with the key `p_key` and the value `p_value`.
			-- It is required that `p_key` is not an existing key.
			-- It is expected that after the key-value pair is inserted into the tree,
			-- splay operation(s) are performed from the new node up to the root.
		require else
			no_previously_existing_key:
				not has(p_key)
		local
			l_from_node: TREE_NODE[K, V]
		do
			l_from_node := root.tree_search (p_key)	-- We are guranteed to not find a node
													-- (precondition said we don't have a node with the key p_key)
			l_from_node.set_to_internal (p_key, p_value)
			splay(l_from_node)
		ensure then
			size_incremented:
				count = old count + 1
			has_inserted_node:
				has(p_key)
			other_nodes_unchanged:
				across
					1 |..| (old count) is i
				all
					attached (old nodes.deep_twin)[i].key as a_k
					and then
					(
						a_k < p_key
						implies
						(old nodes.deep_twin)[i] ~ nodes[i]
					)
					and then
					(
						a_k > p_key
						implies
						(old nodes.deep_twin)[i] ~ nodes[i + 1]
					)
				end
		end

	delete (p_key: K)
		-- Deletes an existing node with the key equal to `p_key`.
		-- Supplier requires that:
		-- 		A node with the key `p_key` exists.
		-- 		This node is an internal node.
		-- See the precondition of {BALANCED_BST}.delete.
		local
			l_node : TREE_NODE[K, V]
		do
			l_node := root.tree_search (p_key) -- guranteed to find it

			splay(l_node)

			if
				attached l_node.left as a_l_node_left and then
				attached l_node.right as a_l_node_right
			then
				if
					a_l_node_left.is_internal and then
					a_l_node_right.is_internal
				then
					root := a_l_node_left
					root.parent := Void
					splay (root.max_node)

					relink (root, a_l_node_right, false)
				elseif
					a_l_node_left.is_internal
				then
					root := a_l_node_left
					root.parent := Void
				else
					root := a_l_node_right
					root.parent := Void
				end
			end
		ensure then
			size_decremented:
				count = old count - 1
			has_removed_node:
				not has(p_key)
			other_nodes_unchanged:
				across
					1 |..| (old count) is i
				all
					attached (old nodes.deep_twin)[i].key as a_k
					and then
					(
						a_k < p_key
						implies
						(old nodes.deep_twin)[i] ~ nodes[i]
					)
					and then
					(
						a_k > p_key
						implies
						(old nodes.deep_twin)[i] ~ nodes[i - 1]
					)
				end
		end

feature -- Out

	debug_output: STRING
			-- Debugger will show the `Result`.
			-- Do not modify this.
			-- [x<--(1, 1)-->(2, 2), x<--(2, 2)-->x]
		do
			Result := out
		end

	out: STRING
			-- Do not modify this.
			-- [x<--(1, 1)-->(2, 2), x<--(2, 2)-->x]
		do
			Result := "["

			across
				nodes is i_node
			loop
				if
					attached i_node.left as a_left and then
					attached i_node.right as a_right
				then
					Result := Result
						+ a_left.out
						+ "<--"
						+ i_node.out
						+ "-->"
						+ a_right.out
				else
					Result := Result
				end

				if
					i_node /= nodes.last
				then
					Result := Result + ", "
				end
			end

			Result := Result + "]"

		end

invariant
	-- These class invariants are given to you. Do not modify them.
	-- However, you may study them carefully because they
	-- specify the defintions of external vs. internal nodes.

	no_root_means_count_is_zero:
		(root.is_external) = (root.count = 0)

	root_does_not_have_a_parent:
		not attached root.parent

	count_one_or_more_means_root_exists:
		(root.count >= 1) = (root.is_internal)

	nodes_are_sorted:
		across
			1 |..| (root.count - 1) is i
		all
			root.nodes[i] < root.nodes[i + 1]
		end

	left_child_keeps_reference_to_parent:
		(
			across
				nodes is i_node
			all
				attached i_node.left as a_left implies
				a_left.parent = i_node
			end
		)

	right_child_keeps_reference_to_parent:
		(
			across
				nodes is i_node
			all
				attached i_node.right as a_right implies
				a_right.parent = i_node
			end
		)

	left_is_smaller:
		across
			nodes is i_node
		all
			(
				attached i_node.left as a_left and then
				a_left.is_internal
			)
			implies
			a_left < i_node
		end

	right_is_bigger:
		across
			nodes is i_node
		all
			(
				attached i_node.right as a_right and then
				a_right.is_internal
			)
			implies
			i_node < a_right
		end

end
