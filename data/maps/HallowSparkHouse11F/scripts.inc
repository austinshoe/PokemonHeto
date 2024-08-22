HallowSparkHouse11F_MapScripts::
	.byte 0

Script_HallowSparkHouse1Man1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse1Man1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse1Man1:
    .string "I bet this is the first time you've\n"
    .string "seen a two-story house in a while.\l"
    .string "Isn't it so cool?$"

Script_HallowSparkHouse1Woman1::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse1Woman1, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse1Woman1:
    .string "My husband was gifted this house\n"
    .string "for his heroics during the war\l"
    .string "between {SHADOW_DARK_GRAY}The Republic of Toemayto {SHADOW_LIGHT_GRAY} and\l"
    .string "{SHADOW DARK_GRAY}Hehetian Empire.{SHADOW LIGHT_GRAY}\l"
    .string "Impressive, right?$"
