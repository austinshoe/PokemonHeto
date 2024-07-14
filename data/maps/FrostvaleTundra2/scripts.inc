FrostvaleTundra2_MapScripts::
	.byte 0

Script_FrostvaleTundraMan2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraMan2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraMan2:
    .string "Hey kid, be careful.\n"
    .string "The ground here is extremely slippery.\l"
    .string "Make sure you walk slowly and\l"
    .string "carefully, I don’t want to have to dig\l"
    .string "you out of the snow if you fall.$"

Script_FrostvaleTundraWoman2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraWoman2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraWoman2:
    .string "Are you lost? Because there is no way\n"
    .string "that you would willingly come here.\l"
    .string "This place is terrible.\l"
    .string "You should leave.\p"
    .string "Why do I live here?\l"
    .string "So I can warn other people not to.$"
