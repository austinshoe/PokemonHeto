SilverstoneHouse2A_MapScripts::
	.byte 0

Script_SilverstoneHouse2Man1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse2Man1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse2Man1:
    .string "Sorry, now is not a great time.\n"
    .string "Apparently our son was caught stealing\l"
    .string "{COLOR RED}pokéballs {COLOR LIGHT_GRAY}from the {COLOR BLUE}Pokémart$"

Script_SilverstoneHouse2Woman1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse2Woman1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse2Woman1:
    .string "I just can't believe he would do\n"
    .string "something like this.$"

Script_SilverstoneHouse2Kid1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse1Kid1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse1Kid1:
    .string "...$"
