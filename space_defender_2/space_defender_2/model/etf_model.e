note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
--			create s.make_empty
			i := 0
			create battle.make
		end

feature -- model attributes
--	s : STRING
	battle : BATTLE
	i : INTEGER

feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

	setup_back(state: INTEGER_32)
		do
			i := i - state

		end

	setup_next(state: INTEGER_32)
		do
			i := i + state


		end





feature -- queries
	out : STRING
		do
--			create Result.make_from_string ("  ")
--			Result.append ("System State: default model state ")
--			Result.append ("(")
--			Result.append (i.out)
--			Result.append (")")
			Result := battle.display_game_board(i)
		end

end




