KushinadaHouse1_MapScripts::
	.byte 0

Script_KushinadaHouse1Man1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse1Man1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse1Man1:
    .string "You have come to the wrong house.\n"
    .string "There is absolutely nothing here.$"

Script_KushinadaHouse1Woman1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse1Woman1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse1Woman1:
    .string "You have come to the wrong house.\n"
    .string "There is absolutely nothing here.$"
    
Script_KushinadaHouse1Kid1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse1Kid1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse1Kid1:
    .string "You have come to the wrong house.\n"
    .string "There is absolutely nothing here.$"
