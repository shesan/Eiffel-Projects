note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	MAZE

inherit
	ANY
		redefine
			out
		end

create {MAZE_ACCESS}
	make

feature {NONE} -- Initialization
	make --(g: LIST_GRAPH[COORDINATE])
			-- Initialization for `Current'.
		do
			create s.make_empty
			state_num := 0
			create temp.make
			create m_generator.make
			create m_drawer.make (temp.generate_new_maze (1))
			m_printout:=""
			in_game := false
			create old_shortest.make_empty
		end

feature -- model attributes
	s : STRING
	state_num : INTEGER
	game_num : INTEGER
	win : INTEGER

	m_drawer : MAZE_DRAWER
	m_generator : MAZE_GENERATOR
	temp : MAZE_GENERATOR
--	du : DIRECTION_UTILITY
	m_printout : STRING
	in_game : BOOLEAN
	solution : BOOLEAN -- 'o' on the graph on and off
	old_shortest :  SEQ [VERTEX [COORDINATE]]

	-- Error Messages attributes
	error : BOOLEAN
	--move
	not_valid_move : BOOLEAN
	win_game : BOOLEAN
	--new_game
	in_game_already : BOOLEAN
	--abort & solve & move
	not_in_game : BOOLEAN
	--solve
	not_solvable : BOOLEAN

feature -- model operations
--	default_update
--			-- Perform update to the model state.
--		do
--			state_num := state_num + 1
--		end

	reset--(g: LIST_GRAPH[COORDINATE])
			-- Reset model state.
		do
			make
		end

	abort
		do
			state_num := state_num + 1
			in_game := false
			m_printout := ""
		end

	v_move (dir : INTEGER) : BOOLEAN
		local
			cP, nextP : VERTEX[COORDINATE]
			e : EDGE[COORDINATE]
			du : DIRECTION_UTILITY
		do
			create cp.make ([m_drawer.player_coord.row //2  , m_drawer.player_coord.col])
			create nextP.make ([m_drawer.player_coord.row + du.N.row_mod , m_drawer.player_coord.col + du.N.col_mod])

			if dir = 4 then create nextP.make ([m_drawer.player_coord.row //2 + du.N.row_mod , m_drawer.player_coord.col + du.N.col_mod]) end
			if dir = 5 then create nextP.make ([m_drawer.player_coord.row //2 + du.E.row_mod , m_drawer.player_coord.col + du.E.col_mod]) end
			if dir = 6 then create nextP.make ([m_drawer.player_coord.row //2 + du.S.row_mod , m_drawer.player_coord.col + du.S.col_mod]) end
			if dir = 7 then create nextP.make ([m_drawer.player_coord.row //2 + du.W.row_mod , m_drawer.player_coord.col + du.W.col_mod]) end

			create e.make (cP, nextP)
			Result := m_drawer.maze_graph.has_edge (e)

		end


	move (dir : INTEGER)
		local
			du : DIRECTION_UTILITY
		do
			if solution = true then
				solve
			end

			if in_game then
	 			if v_move(dir) = true then
					if dir = 4 then	m_drawer.move_player (du.N) end
					if dir = 5 then m_drawer.move_player (du.E)	end
					if dir = 6 then m_drawer.move_player (du.S)	end
					if dir = 7 then m_drawer.move_player (du.W)	end
					m_printout := m_drawer.out
					if m_drawer.player_coord.row ~ m_drawer.size * 2 + 1 and m_drawer.player_coord.col ~ m_drawer.size then
						win := win + 1
						win_game := true
						not_in_game := true
					end
				end
			else
				not_in_game := true
			end
			state_num := state_num + 1

		end

	new_game (lvl: INTEGER)
		do
			state_num := state_num + 1
			if in_game = true then
				in_game_already := true
			else
				create m_drawer.make (m_generator.generate_new_maze (lvl))
				m_printout.append (m_drawer.out)
				game_num := game_num + 1
				in_game_already := false
				in_game := true
			end
		end

	solve
		local
			cur, last : VERTEX [COORDINATE]
			shortest :  SEQ [VERTEX [COORDINATE]]
		do
--			create cur.make (create {COORDINATE}.make ([m_drawer.player_coord.row // 2, m_drawer.player_coord.col]))
			create cur.make ([m_drawer.player_coord.row // 2, m_drawer.player_coord.col])
--			create cur.make (create {COORDINATE}.make ([(m_drawer.player_coord.row / 2).floor, m_drawer.player_coord.col]))
			create last.make ([m_drawer.size, m_drawer.size])

--			create shortest.make_empty
			if solution = true then

				if m_drawer.maze_graph.model.is_reachable (cur, last) then
--					shortest := m_drawer.maze_graph.model.shortest_path (cur, last)
					if attached old_shortest as seq then
						across 1 |..| seq.count is v
						loop
							if not (m_drawer.maze_ascii[seq.item (v).item.row * 2, seq.item (v).item.col][3] = m_drawer.path_char
								 or m_drawer.maze_ascii[seq.item (v).item.row * 2, seq.item (v).item.col][3] = m_drawer.player_char)
							then
								m_drawer.maze_ascii[seq.item (v).item.row * 2, seq.item (v).item.col][3] := ' '
							end
						end
					end
				end

			end

			if m_drawer.maze_graph.model.is_reachable (cur, last) then
				shortest := m_drawer.maze_graph.model.shortest_path (cur, last)
--				old_shortest := shortest
				if attached shortest as seq then
					across 1 |..| seq.count is v
					loop
						if not (m_drawer.maze_ascii[seq.item (v).item.row * 2, seq.item (v).item.col][3] = m_drawer.path_char
							 or m_drawer.maze_ascii[seq.item (v).item.row * 2, seq.item (v).item.col][3] = m_drawer.player_char)
						then
							m_drawer.maze_ascii[seq.item (v).item.row * 2, seq.item (v).item.col][3] := m_drawer.soln_char
						end
					end
				end
				m_printout := m_drawer.out
			end
			solution := true
			state_num := state_num + 1
		end


	errorMsg : STRING
		do
			Result := "  "
			Result.append ("State: ")
			Result.append (state_num.out)
			Result.append (" -> ")
			if in_game_already = false and not_in_game = false then Result.append ("ok") Result.append (m_printout) end

			if not_in_game = true then
				Result.append ("Error! Not in a game.")
				not_in_game := false
			elseif not_in_game = false then
				if in_game_already = true then
					Result.append ("Error! In game already.")
					in_game_already := false
				elseif not_valid_move = true then
					Result.append ("Error! Not a valid move.")
					not_valid_move := false
				elseif not_solvable = true then
					Result.append ("Error! Maze is not solvable. You may abort with no penalty.")
					not_solvable := false
				end

				if in_game = true then
					if win_game = true then
						Result.append ("%N  Congratulations! You escaped the maze!")
						in_game := false
					end
					Result.append ("%N  Game Number: ")
					Result.append (game_num.out)
					Result.append ("%N  Score: ")
					Result.append (win.out)
					Result.append (" / ")
					Result.append (game_num.out)
					Result.append ("%N")
				end
			end
		end


feature -- queries
	out : STRING
		do
--			create Result.make_from_string ("  ")
--			Result.append ("State: ")
--			Result.append (state_num.out)
--			Result.append (" -> ")
--			Result.append (m_printout)
--			if in_game = true then
--				Result.append ("%N  Game Number: ")
--				Result.append (game_num.out)
--				Result.append ("%N  Score: ")
--				Result.append (win.out)
--				Result.append (" / ")
--				Result.append (game_num.out)
--				Result.append ("%N")
--			else
--				Result.append (" ok ")
--			end
			Result := errormsg
		end

end




