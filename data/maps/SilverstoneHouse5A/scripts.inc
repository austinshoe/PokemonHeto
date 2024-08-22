SilverstoneHouse5A_MapScripts::
	.byte 0

Script_SilverstoneHouse5Man1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse5Man1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse5Man1:
    .string "Juding by how you're dressed,\n"
    .string "you must be a pokémon trainer.\l"
    .string "Considering where we are, you must\l"
    .string "be close to getting to Victory Road.\l"
    .string "Congrats!$"

Script_SilverstoneHouse5Woman1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse5Woman1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse5Woman1:
    .string "Do you mind giving my son some tips\n"
    .string "on how to be a Pokémon Master once you\l"
    .string "successfully beat the Elite 4?\l"
    .string "He really wants to be a Pokémon\l"
    .string "Master as well.$"
