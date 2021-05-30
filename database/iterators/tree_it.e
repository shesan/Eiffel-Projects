note
	description: "Iteration cursor for TREE_DB."
	author: "Jinho Hwang"
	date: "$Date$"
	revision: "$Revision$"

class
	TREE_IT[K -> COMPARABLE, V -> attached ANY]

inherit
	ITERATION_CURSOR[TUPLE[K,V]]

create
	make

feature {NONE} -- Initialization

	make (p_db: TREE_DB[K, V])
		do
			db := p_db

			create {ARRAYED_LIST[attached K]} keys.make(db.count)
			create {ARRAYED_LIST[attached V]} values.make(db.count)
			keys.compare_objects
			values.compare_objects

			across
				db.bst.nodes is i_node
			loop
				if
					attached i_node.key as a_key and then
					attached i_node.value as a_value
				then
					keys.force(a_key)
					values.force(a_value)
				end
			end

			cursor_at := keys.count
		end

feature {NONE} -- Attribute

	db: TREE_DB[K, V]

	keys: LIST[K]

	values: LIST[V]

	cursor_at: INTEGER

feature -- Access

	item: TUPLE[key: K; value: V]
			-- Item at current cursor position.
		do
			Result := [keys[cursor_at], values[cursor_at]]
		end

feature -- Status report	

	after: BOOLEAN
			-- Are there no more items to iterate over?
		do
			Result := cursor_at < 1
		end

feature -- Cursor movement

	forth
			-- Move to next position.
		do
			cursor_at := cursor_at - 1
		end

end
