House1_MapScripts::
	.byte 0

House1_OldWoman::
    lock
    faceplayer
    msgbox Text_HouseOldWoman1, MSGBOX_DEFAULT
    release
    end

Text_HouseOldWoman1:
    .string "Pokemon gyms are places to test your\n"
    .string "strength!\l"
    .string "Winning against the Leader of a Gym\l"
    .string "earns you a badge.\p"
    .string "I heard the Gym Leader of Everbloom is\n"
    .string "an internationally famous herbalist as\l"
    .string "as well as an outstanding battler!$"
