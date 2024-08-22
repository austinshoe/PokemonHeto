SilverstoneHouse3B_MapScripts::
	.byte 0

Script_SilverstoneHouse3Kid1::
    lock
    msgbox Text_SilverstoneHouse3Kid1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse3Kid1:
    .string "This book is quite fascinating...$"

Script_SilverstoneHouse3Kid2::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse3Kid2, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse3Kid2:
    .string "My brother's such a nerd.\n"
    .string "He never wants to play tag or really\l"
    .string "anything physical.\l"
    .string "Everytime you look at him, he's either\l"
    .string "nose deep in a book, or glued to the\l"
    .string "laptop.$"
