LuminaHouse2_MapScripts::
	.byte 0

Script_LuminaTownOldMan2::
    lock
    faceplayer
    msgbox Text_LuminaTownOldMan2, MSGBOX_DEFAULT
    release
    end

Text_LuminaTownOldMan2:
    .string "According to legends there was a Pokémon\n"
    .string "that embodied power and energy that\l"
    .string "once wreaked havoc across the region of\l"
    .string "{COLOR RED}Hehamayto{COLOR DARK_GRAY}.$"

Script_LuminaTownWoman3::
    lock
    faceplayer
    msgbox Text_LuminaTownWoman3, MSGBOX_DEFAULT
    release
    end

Text_LuminaTownWoman3:
    .string "I don’t believe such a Pokémon exists.\n"
    .string "I’ve never seen it before, and the raw\l"
    .string "power he describes is just unimaginable!$"
    
Script_LuminaTownOldWoman2::
    lock
    faceplayer
    msgbox Text_LuminaTownOldWoman2, MSGBOX_DEFAULT
    release
    end

Text_LuminaTownOldWoman2:
    .string "My husband swears such a Pokémon exists.\n"
    .string "I think the two of us are getting old...$"

