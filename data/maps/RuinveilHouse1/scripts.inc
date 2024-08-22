RuinveilHouse1_MapScripts::
	.byte 0

Script_RuinveilHouse1Man1::
    lock
    faceplayer
    msgbox Text_RuinveilHouse1Man1, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse1Man1:
    .string "'You need to study to make the money'\n"
    .string "-My SAT Teacher"

Script_RuinveilHouse1Man2::
    lock
    faceplayer
    msgbox Text_RuinveilHouse1Man2, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse1Man2:
    .string "'Think beyond what's expected of you'\n"
    .string "-Harish (from that same class)$"
    
Script_RuinveilHouse1Man3::
    lock
    faceplayer
    msgbox Text_RuinveilHouse1Man3, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse1Man3:
    .string "When it comes to friends,\n"
    .string "I'd rather have 4 quarters\l"
    .string "than 100 pennies$"
    .string "-some dude on TikTok$"
