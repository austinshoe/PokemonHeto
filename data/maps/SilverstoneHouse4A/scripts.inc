SilverstoneHouse4A_MapScripts::
	.byte 0

Script_SilverstoneHouse4Maid1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse4Maid1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse4Maid1:
    .string "Yeah, no one is here.\n"
    .string "They're on vacation to Everbloom City\l"
    .string "to visit some family.$"
