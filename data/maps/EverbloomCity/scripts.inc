EverbloomCity_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Everbloom_OnTransition
	.byte 0

Everbloom_OnTransition::
    goto_if_unset FLAG_DEFEATED_RUSTBORO_GYM, Everbloom_VarZero
    goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Everbloom_VarOne
    end

Everbloom_VarZero::
    setvar VAR_RUSTBORO_CITY_STATE, 0
    end

Everbloom_VarOne::
    setvar VAR_RUSTBORO_CITY_STATE, 1
    end

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
