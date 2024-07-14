EverbloomHouse1_MapScripts::
	.byte 0

Script_EverbloomHouse11::
    lock
    faceplayer
    msgbox Text_EverbloomHouse11, MSGBOX_DEFAULT
    release
    end

Text_EverbloomHouse11:
    .string "It turns out, the more you win with\n"
    .string "your Pokémon, the more it likes you!\l"
    .string "The measurement we use for this is\l"
    .string "called {COLOR RED}Friendship!\l"
    .string "{COLOR DARK_GRAY} The friendship you have with a Pokémon\l"
    .string "affects the strength of certain moves.$"

Script_EverbloomHouse12::
    lock
    faceplayer
    msgbox Text_EverbloomHouse12, MSGBOX_DEFAULT
    release
    end

Text_EverbloomHouse12:
    .string "Using certain items on Pokémon can\n"
    .string "make it like you more or like you less!\l"
    .string "I don’t know why you’d want a Pokémon\l"
    .string "to like you less, though...$"
