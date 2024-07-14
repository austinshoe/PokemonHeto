EverbloomMart_MapScripts::
	.byte 0

Script_EverbloomPokeMart1::
    lock
    faceplayer
    msgbox Text_EverbloomPokeMart1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomPokeMart1:
    .string "The {COLOR BLUE}PokéMart {COLOR DARK_GRAY}is so cool!\n"
    .string "I can buy all sorts of items to use\l"
    .string "on my Pokémon$"

Script_EverbloomPokeMart2::
    lock
    faceplayer
    msgbox Text_EverbloomPokeMart2, MSGBOX_DEFAULT
    release
    end

Text_EverbloomPokeMart2:
    .string "The variety at the {COLOR BLUE}PokéMart {COLOR DARK_GRAY}is superb.\n"
    .string "I can buy a wide range of products,\l"
    .string "from healing to catching Pokémon.$"
