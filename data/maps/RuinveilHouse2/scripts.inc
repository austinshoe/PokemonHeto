RuinveilHouse2_MapScripts::
	.byte 0

Script_RuinveilHouse2Woman1::
    lock
    faceplayer
    msgbox Text_RuinveilHouse2Woman1, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse2Woman1:
    .string "'As an old chinese man once said:\n"
    .string "'It is only until a fly lands on your\l"
    .string "midsection that you learn violence\l"
    .string "is never the answer''"
    .string "-Han$"

Script_RuinveilHouse2Woman2::
    lock
    faceplayer
    msgbox Text_RuinveilHouse2Woman2, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse2Woman2:
    .string "I dont know what's been going on\n"
    .string "with people saying inspirational quotes,\l"
    .string "but I like it.$"
    
Script_RuinveilHouse2Woman3::
    lock
    faceplayer
    msgbox Text_RuinveilHouse2Woman3, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse2Woman3:
    .string "Do not take life too seriously.\n"
    .string "You will not make out of it alive.$"
