EverbloomCity_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Everbloom_OnTransition
	.byte 0

Everbloom_OnTransition::
    setflag FLAG_VISITED_DEWFORD_TOWN
    call_if_unset FLAG_DEFEATED_RUSTBORO_GYM, Everbloom_VarZero
    call_if_set FLAG_DEFEATED_RUSTBORO_GYM, Everbloom_VarOne
    end

Everbloom_VarZero::
    setvar VAR_RUSTBORO_CITY_STATE, 0
    return

Everbloom_VarOne::
    setvar VAR_RUSTBORO_CITY_STATE, 1
    return

Script_EverbloomCityFan::
    lock
    faceplayer
    msgbox Text_EverbloomCityFan, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCityFan:
    .string "Flora, the gym leader of this city, is\n"
    .string "so cool!\l"
    .string "Did you know, she was the one who\l"
    .string "discovered the uses of the {COLOR RED}{SHADOW LIGHT_RED}Big Root{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!$"

Script_EverbloomCitySign::
    lock
    faceplayer
    msgbox Text_EverbloomCitySign, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCitySign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Everbloom City\n"
    .string "{COLOR DARK_GRAY}The flower that bends with the wind$"
    
Script_EverbloomCityWoman1::
    lock
    faceplayer
    msgbox Text_EverbloomCityWoman1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCityWoman1:
    .string "Everbloom’s flowers bloom year round,\n"
    .string "and our trees are green year round too!\p"
    .string "Now that I think about it, I do suppose\l"
    .string "that most routes are like that too...$"

Script_EverbloomCityMan1::
    lock
    faceplayer
    msgbox Text_EverbloomCityMan1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCityMan1:
    .string "Everbloom City’s known for its orchard!\n"
    .string "As you’d expect, the gym leader here,\l"
    .string "Flora, uses grass types when she\l"
    .string "battles!$"

Script_EverbloomCityWoman2::
    lock
    faceplayer
    msgbox Text_EverbloomCityWoman2, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCityWoman2:
    .string "It might be time for me to water my\n"
    .string "flowers again...$"

Script_EverbloomCityExGirlfriend::
    lock
    faceplayer
    msgbox Text_EverbloomCityExGirlfriend, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCityExGirlfriend:
    .string "I broke up with my boyfriend cuz he\n"
    .string "was simping for the female love\l"
    .string "interest of some random anime.\l"
    .string "Like, what am I even supposed to do in\l"
    .string "that kind of situation?$"
