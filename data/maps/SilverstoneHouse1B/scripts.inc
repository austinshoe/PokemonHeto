SilverstoneHouse1B_MapScripts::
	.byte 0

Script_SilverstoneHouse1Woman1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse1Woman1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse1Woman1:
    .string "The dating app did not tell us\l"
    .string "that those 2 are crazy.$"

Script_SilverstoneHouse1Woman2::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse1Woman2, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse1Woman2:
    .string "I am never trusting Pokéndr again.$"
