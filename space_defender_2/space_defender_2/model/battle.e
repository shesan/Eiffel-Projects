note
	description: "Summary description for {BATTLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BATTLE

create
	make

feature {NONE} --initialization
	make
		do
			game_finish := false
			new_game_started := false
			debug_mode := false
			board_row := 10
			board_column := 30
			create board.make_filled('_', board_row, board_column)

			score := 0
			state_num := 0
			turn := 0

			row_chars := <<'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'>>

			state_msg := "not started"
			debug_msg := "normal"
			ok := "ok"

			g_limit := 1
			f_limit := 1
			c_limit := 1
			i_limit := 1
			p_limit := 1

			weapon := 1
			armour := 1
			engine := 1
			power := 1

			weapon_list := <<"Standard", "Spread", "Snipe", "Rocket", "Splitter">>
			armour_list := <<"None", "Light", "Medium", "Heavy">>
			engine_list := <<"Standard", "Light", "Armoured">>
			power_list :=  <<"Recall (50 energy): Teleport back to spawn.", "Repair (50 energy): Gain 50 health, can go over max health. Health regen will not be in effect if over cap.", "Overcharge (up to 50 health): Gain 2*health spent energy, can go over max energy. Energy regen will not be in effect if over cap.", "Deploy Drones (100 energy): Clear all projectiles.", "Orbital Strike (100 energy): Deal 100 damage to all enemies, affected by armour.">>

			starfighter_row:= 1
			starfighter_col:= 1


		end

feature {NONE} --attributes
--	generate_ship: GENERATE_SHIP
--	generated_ships: ARRAYED_LIST[TUPLE[]]

	debug_mode: BOOLEAN
	board: ARRAY2[CHARACTER]
	score: INTEGER
	board_row: INTEGER
	board_column: INTEGER
	turn: INTEGER
	state_num: INTEGER

	g_limit: INTEGER
	f_limit: INTEGER
	c_limit: INTEGER
	i_limit: INTEGER
	p_limit: INTEGER


	weapon: INTEGER
	armour: INTEGER
	engine: INTEGER
	power: INTEGER

	weapon_list: ARRAY[STRING]
	armour_list: ARRAY[STRING]
	engine_list: ARRAY[STRING]
	power_list: ARRAY[STRING]

	row_chars: ARRAY[CHARACTER]

	starfighter_row: INTEGER
	starfighter_col: INTEGER



	game_finish: BOOLEAN
	new_game_started: BOOLEAN

	state_msg: STRING
	debug_msg: STRING
	ok: STRING

feature {NONE} --utility

feature --display
	--shows the status in STRING
	--command status
	--board status
	display_game_board(state: INTEGER): STRING
		do
			create Result.make_empty
			state_num := state
			if state ~ 0 then
				state_msg := "not started"

				Result.append(display_command_status())
				Result.append ("%N  Welcome to Space Defender Version 2.")

			elseif state ~ 1 then
				state_msg := "weapon setup"
				Result.append(weapon_display())
				Result.append ("%N  Weapon Selected:" + weapon_list.at (weapon))


			elseif state ~ 2 then
				state_msg := "armour setup"
				Result.append(armour_display())
    			Result.append ("%N  Armour Selected:" + armour_list.at (armour))


			elseif state ~ 3 then
				state_msg := "engine setup"
				Result.append(engine_display())
    			Result.append ("%N  Engine Selected:" + engine_list.at (engine))


			elseif state ~ 4 then
				state_msg := "power setup"
				Result.append(power_display())
    			Result.append ("%N  Power Selected:" + power_list.at (power))


			elseif state ~ 5 then
				state_msg := "setup summary"
				Result.append(display_command_status())
				Result.append ("%N  Weapon Selected:" + weapon_list.at (weapon))
				Result.append ("%N  Armour Selected:" + armour_list.at (armour))
				Result.append ("%N  Engine Selected:" + engine_list.at (engine))
				Result.append ("%N  Power Selected:" + power_list.at (power))

			else
				if debug_mode then
					state_msg := ("in game" + "(" + turn.out + ".1)")
					Result.append(display_command_status())
					Result.append("%N In debug mode.")
				else
					state_msg := ("in game" + "(" + turn.out + ".0)")
					Result.append(display_command_status())
				end

				Result.append (display_board())



			end
		end

	display_command_status(): STRING
		do
			create Result.make_empty
			Result.append ("  state:" + state_msg  + ", " + debug_msg + ", " + ok)

			--Personal use
--			Result.append (TEST)
		end

--	display_board(): STRING

--		local
--			i, j, index: INTEGER

--		do
--			create Result.make_empty

--			from i := 0 until i > board_column
--			loop
--				if i ~ 0 then
--					Result.append (" ")
--					from j := 0 until j > board_row
--					loop
--						if j ~ 0 then
--							Result.append(" ")
--						else
--							Result.append(j.out)
--						end

--						if j < board_row then
--							if j < 9 then
--								Result.append("  ")
--							else
--								Result.append (" ")
--							end
--						end

--						j := j + 1
--					end

--				else
--					Result.append ("  ")
--					from j := 0 until j > board_row
--					loop
--						if j ~ 0 then
--							Result.append (row_chars[i].out)
--						else
--							index := board_row * (i-1) + j
----							Result.append (board[index].out)
--						end

--						if j < board_row then
--							Result.append ("  ")
--						end

--						j := j + 1


--					end

--				end
--				Result.append ("%N") -- next line
--				i := i + 1

--			end

--		end

	display_board(): STRING
		local
			i, j: INTEGER
		do
			create Result.make_empty
			Result.append ("%N  ")

			from i := 1
			until i > board_column
			loop
				Result.append(i.out)
				if i < 9 then
					Result.append("  ")
				else
					Result.append(" ")
				end
				i := i + 1
			end

			from i := 1
			until i > board_row
			loop
				Result.append ("%N")
				Result.append(row_chars.at (i).out + " ")

				from j := 1
				until j > board_column
				loop

					Result.append(board[i.item, j.item].out)
					Result.append("  ")
					j := j + 1
				end

				i := i + 1
			end



		end





	--PERSONAL
	TEST(): STRING --personal use to see output of variables
		do
			create Result.make_empty
--			Result.append("Column:" + board_column.out + " Row:" + board_row.out)
			Result.append ("State_num" + state_num.out)
		end

	weapon_display(): STRING
		do
			create Result.make_empty
			Result.append(display_command_status())
			Result.append("%N  1:Standard (A single projectile is fired in front)")
			Result.append("%N    Health:10, Energy:10, Regen:0/1, Armour:0, Vision:1, Move:1, Move Cost:1,")
			Result.append("%N    Projectile Damage:70, Projectile Cost:5 (energy)")
			Result.append("%N  2:Spread (Three projectiles are fired in front, two going diagonal)")
			Result.append("%N    Health:0, Energy:60, Regen:0/2, Armour:1, Vision:0, Move:0, Move Cost:2,")
			Result.append("%N    Projectile Damage:50, Projectile Cost:10 (energy)")
			Result.append("%N  3:Snipe (Fast and high damage projectile, but only travels via teleporting)")
			Result.append("%N    Health:0, Energy:100, Regen:0/5, Armour:0, Vision:10, Move:3, Move Cost:0,")
			Result.append("%N    Projectile Damage:1000, Projectile Cost:20 (energy)")
			Result.append("%N  4:Rocket (Two projectiles appear behind to the sides of the Starfighter and accelerates)")
			Result.append("%N    Health:10, Energy:0, Regen:10/0, Armour:2, Vision:2, Move:0, Move Cost:3,")
			Result.append("%N    Projectile Damage:100, Projectile Cost:10 (health)")
			Result.append("%N  5:Splitter (A single mine projectile is placed in front of the Starfighter)")
			Result.append("%N    Health:0, Energy:100, Regen:0/10, Armour:0, Vision:0, Move:0, Move Cost:5,")
			Result.append("%N    Projectile Damage:150, Projectile Cost:70 (energy)")
		end

	armour_display(): STRING
		do
			create Result.make_empty
			Result.append(display_command_status())
			Result.append("%N  1:None")
			Result.append("%N    Health:50, Energy:0, Regen:1/0, Armour:0, Vision:0, Move:1, Move Cost:0")
			Result.append("%N  2:Light")
			Result.append("%N    Health:75, Energy:0, Regen:2/0, Armour:3, Vision:0, Move:0, Move Cost:1")
			Result.append("%N  3:Medium")
			Result.append("%N    Health:100, Energy:0, Regen:3/0, Armour:5, Vision:0, Move:0, Move Cost:3")
			Result.append("%N  4:Heavy")
			Result.append("%N    Health:200, Energy:0, Regen:4/0, Armour:10, Vision:0, Move:-1, Move Cost:5")
		end

	engine_display(): STRING
	do
		create Result.make_empty
		Result.append(display_command_status())
		Result.append("%N  1:Standard")
		Result.append("%N    Health:10, Energy:60, Regen:0/2, Armour:1, Vision:12, Move:8, Move Cost:2")
		Result.append("%N  2:Light")
		Result.append("%N    Health:0, Energy:30, Regen:0/1, Armour:0, Vision:15, Move:10, Move Cost:1")
		Result.append("%N  3:Armoured")
		Result.append("%N    Health:50, Energy:100, Regen:0/3, Armour:3, Vision:6, Move:4, Move Cost:5")
	end

	power_display(): STRING
	do
		create Result.make_empty
		Result.append(display_command_status())
		Result.append("%N  1:Recall (50 energy): Teleport back to spawn.")
		Result.append("%N  2:Repair (50 energy): Gain 50 health, can go over max health. Health regen will not be in effect if over cap.")
		Result.append("%N  3:Overcharge (up to 50 health): Gain 2*health spent energy, can go over max energy. Energy regen will not be in effect if over cap.")
		Result.append("%N  4:Deploy Drones (100 energy): Clear all projectiles.")
		Result.append("%N  5:Orbital Strike (100 energy): Deal 100 damage to all enemies, affected by armour.")
	end

feature {ETF_COMMAND} --commands

	move(row: INTEGER_32 ; column: INTEGER_32)
		do

		end

	play(row: INTEGER_32 ; column: INTEGER_32 ; g_threshold: INTEGER_32 ; f_threshold: INTEGER_32 ; c_threshold: INTEGER_32 ; i_threshold: INTEGER_32 ; p_threshold: INTEGER_32)
		do

			board_row := row
			board_column := column
			g_limit := g_threshold
			f_limit := f_threshold
			c_limit := i_threshold
			p_limit := p_threshold

			create board.make_filled('_', board_row, board_column)
			starfighter_row := (board_row + 1) // 2
			starfighter_col := 1
			board.put ('S', starfighter_row, starfighter_col)

		end

	pass
		do

		end

	setup_select(value: INTEGER_32)
		do
			if state_num ~ 1 then
				weapon := value
			elseif state_num ~ 2 then
				armour := value
			elseif state_num ~ 3 then
				engine := value
			elseif state_num ~ 4 then
				power := value
			end

		end



	special
		do

		end

	toggle_debug_mode
		do
			debug_mode := TRUE
			debug_msg := "debug"

		end

	abort
		do

		end

	fire
		do

		end


end
