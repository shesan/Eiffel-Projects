note
	description: "Summary description for {AVAIL_CHARACTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	AVAILABLE_CHARACTER

inherit
	ANY
		redefine
			out
		end

create
	make

feature --commands
	make(char: CHARACTER)
		do
			item := char
		end

feature --attributes
	item: CHARACTER

feature --output
	out: STRING

	do
		Result := item.out
	end

invariant
	allowed_char:
		item = '?' 		--Fog
		or item = '_' 	--Unoccupied entity
		or item = 'G' 	--Grunt
		or item = 'F'  	--Fighter
		or item = 'C'  	--Carrier
		or item = 'I'  	--Interceptor
		or item = 'P'  	--Pylon
		or item = '<'  	--Enemy projectile
		or item = 'S'  	--StarFighter
		or item = '*'  	--Friendly projectile
		or item = 'X'  	--StarFighter destoried (Game over)


end
