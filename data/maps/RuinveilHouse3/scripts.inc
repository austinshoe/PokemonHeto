RuinveilHouse3_MapScripts::
	.byte 0

Script_RuinveilHouse3Man1::
    lock
    faceplayer
    msgbox Text_RuinveilHouse3Man1, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse3Man1:
    .string "Animal protection laws were invented\n"
    .string "in 1856.\l"
    .string "People in 1855:$"

Script_RuinveilHouse3Man2::
    lock
    faceplayer
    msgbox Text_RuinveilHouse3Man2, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse3Man2:
    .string "If at first you don't succeed,\n"
    .string "blame it on bad WiFi$"
    
Script_RuinveilHouse3Man3::
    lock
    faceplayer
    msgbox Text_RuinveilHouse3Man3, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse3Man3:
    .string "Keep calm and pretend you know\n"
    .string "what you're doing.$"
