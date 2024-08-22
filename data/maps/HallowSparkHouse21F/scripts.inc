HallowSparkHouse21F_MapScripts::
	.byte 0

Script_HallowSparkHouse2Man1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse2Man1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse2Man1:
    .string "Don't talk to me.\n"
    .string "I'm locked in right now.$"

Script_HallowSparkHouse2Woman1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse2Woman1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse2Woman1:
    .string "He's trying to lift that coffee mug\n"
    .string "over there with just his mind.\l"
    .string "I tried to tell him how dumb that is,\l"
    .string "but he just won't listen.$"

Script_HallowSparkHouse2Kid1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse2Kid1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse2Kid1:
    .string "I usually just ignore him.\n"
    .string "You know who else you should ignore?\l"
    .string "The guy upstairs.\l"
    .string "He's weird, man.$"
