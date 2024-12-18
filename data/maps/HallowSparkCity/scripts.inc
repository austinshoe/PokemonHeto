HallowSparkCity_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, HallowSparkCity_OnTransition
	.byte 0

HallowSparkCity_OnTransition:
    setvar VAR_UNUSED_0x4091, 0
    end
    
Script_HallowSparkCitySign::
    lock
    faceplayer
    msgbox Text_HallowSparkCitySign, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkCitySign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Hallow Spark City\n"
    .string "{COLOR DARK_GRAY}It's electrifying here-we promise!$"

Script_HallowSparkCityPowerPlantSign::
    lock
    faceplayer
    msgbox Text_HallowSparkCityPowerPlantSign, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkCityPowerPlantSign:
    .string "Hallow Spark City Powerplant$"
    
Script_HallowSparkCityExitSign::
    lock
    faceplayer
    msgbox Text_HallowSparkCityExitSign, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkCityExitSign:
    .string "{CLEAR_TO 70}Gate to Hetonian Desert$"
