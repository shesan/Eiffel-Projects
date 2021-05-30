note
	description: "Itertion cursor for `LINEAR_DB`."
	author: "Jinho Hwang"
	date: "$Date$"
	revision: "$Revision$"

class
	LINEAR_IT[K -> {COMPARABLE, HASHABLE}, V -> attached ANY]

inherit
	ITERATION_CURSOR[TUPLE[K,V]]

create
	make

feature {NONE} -- Initialization

	make (p_db: LINEAR_DB[K, V])
		do
			keys := p_db.keys
			keys.compare_objects

			create values.make_empty
			values.compare_objects

			across
				keys is i_key
			loop
				if
					attached p_db.values[i_key] as a_value
				then
					values.force (a_value, values.count + 1)
				end
			end

			cursor_at := keys.count
		ensure
			keys.count = values.count
		end

feature {NONE} -- Attribute

	keys: ARRAY[K]

	values: ARRAY[V]

	cursor_at: INTEGER

feature -- Access

	item: TUPLE[key: K; value: V]
			-- Item at current cursor position.
		do
			Result:= [keys[cursor_at], values[cursor_at]]
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
