note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MOVE_KNIGHT
inherit
	ETF_MOVE_KNIGHT_INTERFACE
create
	make
feature -- command
	move_knight(square: TUPLE[x: INTEGER_32; y: INTEGER_32])
		local
			m_kn : MOVE_KNIGHT
			new_square : SQUARE
			old_square : SQUARE
			l_x,l_y : INTEGER
			moves : ARRAY[SQUARE]
    	do
			-- create move op
			-- To Do
			old_square := model.board.knight_position
			l_x := square.x
			l_y := square.y
			create new_square.make (l_x, l_y)
			create m_kn.make (new_square)
			moves := m_kn.moves (old_square.x, old_square.y)
			if moves.has (new_square) then
				model.board.history.extend_history (m_kn)
				model.set_message ("ok")
				m_kn.execute
			else
				model.set_message ("invalid move")
			end


			-- push
			etf_cmd_container.on_change.notify ([Current])
    	end

end
