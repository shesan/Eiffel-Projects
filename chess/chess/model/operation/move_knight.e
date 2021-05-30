note
	description: "Move operation with undo/redo"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

class
	MOVE_KNIGHT

inherit

	MOVE
		redefine
			out
		end

	DEBUG_OUTPUT
		redefine
			out
		end

create
	make

feature {NONE} -- constructor

	make(a_new_position: SQUARE)
		do
			-- To DO
			old_position := board.knight_position
			position := a_new_position
		end

feature -- queries
		old_position: SQUARE
		position: SQUARE

	directions: ARRAY[TUPLE[x: INTEGER; y: INTEGER]]
--		local
--			x,y: INTEGER
		do
			-- To Do
			Result := <<[1, 2], [ 1, -2], [-1, 2], [-1, -2], [2, 1], [2, -1], [-2, 1], [-2, -1]>>
		end



feature -- commands

	execute
		do
				-- To Do
			board.move_knight (position)
		end

	undo
		do
			board.move_knight (old_position)
				-- To Do
		end

	redo
		do
			execute
			-- To Do
		end

feature

	out: STRING
		do
			Result := ""
		end

	debug_output: STRING
		do
			Result := out
		end

end


