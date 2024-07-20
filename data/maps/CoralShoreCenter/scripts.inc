CoralShoreCenter_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, CoralShoreCity_Center_OnTransition
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CoralShoreCity_Center_OnTransition::
    setrespawn HEAL_LOCATION_NEW_MAP8
    end

Script_PokemartCenterKassanLittleBoys1::
    lock
    msgbox Text_PokemartCenterLittleBoy1Convo1, MSGBOX_DEFAULT
    closemessage
    delay 8
    msgbox Text_PokemartCenterLittleBoy2Convo1, MSGBOX_DEFAULT
    release
    end

Text_PokemartCenterLittleBoy1Convo1:
    .string "{FONT_SMALL_NARROW}If the others find out we left Kassan\n"
    .string "for Coral Shore, they are going to be\l"
    .string "maaaaaaaaaad.$"

Text_PokemartCenterLittleBoy2Convo1:
    .string "{FONT_SMALL_NARROW}Yeah.\n"
    .string "We better figure out a good plan to\l"
    .string "sneak back, or else.$"

Script_PokemartCenterKassanLittleBoys2::
    lock
    msgbox Text_PokemartCenterLittleBoy2Convo2, MSGBOX_DEFAULT
    closemessage
    delay 8
    msgbox Text_PokemartCenterLittleBoy1Convo2, MSGBOX_DEFAULT
    release
    end

Text_PokemartCenterLittleBoy1Convo2:
    .string "{FONT_SMALL_NARROW}Hey, there's a lot of people here.\n"
    .string "Should we take this convo elsewhere?$"

Text_PokemartCenterLittleBoy2Convo2:
    .string "{FONT_SMALL_NARROW}Nah.\n"
    .string "It should be fine.$"
    
Script_PokecenterOldMan1::
    lock
    faceplayer
    msgbox Text_PokecenterOldMan1, MSGBOX_DEFAULT
    release
    end

Text_PokecenterOldMan1:
    .string "My wife kicked me out of the house.\n"
    .string "I am too old for this...$"

Script_PokecenterMan1::
    lock
    faceplayer
    msgbox Text_PokecenterMan1, MSGBOX_DEFAULT
    release
    end

Text_PokecenterMan1:
    .string "Don't mind me.\n"
    .string "I'm just chillin.$"
