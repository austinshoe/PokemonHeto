HallowSparkHouse31F_MapScripts::
	.byte 0

Script_HallowSparkHouse3Man1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse3Man1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse3Man1:
    .string "You've probably been told this\n"
    .string "already, but make sure you have\l"
    .string "ground-type pokémon.\l"
    .string "You are really going to need them.$"

Script_HallowSparkHouse3Woman1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse3Woman1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse3Woman1:
    .string "Cooking.\n"
    .string "Truly a marvelous thing.\l"
    .string "The fact that you can turn raw food\l"
    .string "into something so delectable is\l"
    .string "remarkable.$"

Script_HallowSparkHouse3Kid1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse2Kid1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse2Kid1:
    .string "Man, you really just walk into other\n"
    .string "people's houses like that, huh.\l"
    .string "That's kinda weird.$"
