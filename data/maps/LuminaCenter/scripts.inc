LuminaCenter_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, LuminaTown_Center_OnTransition
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LuminaTown_Center_OnTransition:
    setrespawn HEAL_LOCATION_LUMINA_TOWN
    end
    
LuminaTown_Center_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

LuminaTown_Center_Girl::
    msgbox LuminaTown_Center_Text_NurseJoy, MSGBOX_NPC
    end

LuminaTown_Center_Text_NurseJoy:
    .string "You see that kind lady over there?\p"
    .string "She's called Nurse Joy, and she'll heal\n"
    .string "Your Pokémon for free!\p"
    .string "The computer in the corner is a PC.\n"
    .string "Anyone is free to use it!$"
    
