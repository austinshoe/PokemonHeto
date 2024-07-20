CoralShoreHouse1_MapScripts::
	.byte 0

Script_CoralShoreHouse2OldMan1::
    lock
    faceplayer
    msgbox Text_CoralShoreHouse2OldMan1, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreHouse2OldMan1:
    .string "There's nothing like relaxing in your\n"
    .string "house with your wife, listening to the\l"
    .string "waves crash against the shore.\p"
    .string "Ahhhhhhh...\l"
    .string "Retirement...$"
    
Script_CoralShoreHouse2OldWoman1::
    lock
    msgbox Text_CoralShoreHouse2OldWoman1, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreHouse2OldWoman1:
    .string "You said it, dear...$"
