House1_MapScripts::
	.byte 0

House1_OldWoman::
    lock
    faceplayer
    msgbox Text_HouseOldWoman1, MSGBOX_DEFAULT
    release
    end

Script_LuminaTownOldMan1::
    lock
    faceplayer
    msgbox Text_LuminaTownOldMan1, MSGBOX_DEFAULT
    release
    end

Text_LuminaTownOldMan1:
    .string "Back in my day, I was a proficient\n"
    .string "pokémon trainer.\l"
    .string "I acquired 5 total gym badges, but then\l"
    .string "my wife got pregnant, so I had to\l"
    .string "abandon my dreams...$"


Text_HouseOldWoman1:
    .string "Pokémon gyms are places to test your\n"
    .string "strength!\l"
    .string "Winning against the Leader of a Gym\l"
    .string "earns you a badge.\p"
    .string "I heard the Gym Leader of Everbloom is\n"
    .string "an internationally famous herbalist as\l"
    .string "as well as an outstanding battler!$"
