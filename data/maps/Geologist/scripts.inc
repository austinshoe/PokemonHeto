Geologist_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Geologist_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Geologist_OnFrame
	.byte 0

Geologist_OnTransition::
    call_if_unset FLAG_RECOVERED_DEVON_GOODS, Geologist_VarZero
    call_if_set FLAG_RECOVERED_DEVON_GOODS, Geologist_VarTwo
    end

Geologist_VarZero:
    setvar VAR_DEWFORD_TOWN_STATE, 0
    addobject 6
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    end

Geologist_VarTwo:
    setvar VAR_DEWFORD_TOWN_STATE, 2
    end

Geologist_OnFrame:
    map_script_2 VAR_DEWFORD_TOWN_STATE, 0, Geologist_EventScript_EviL_Team_Encounter
    .2byte 0

Geologist_EventScript_EviL_Team_Encounter:
    lockall
    applymovement OBJ_EVENT_ID_PLAYER, Geologist_Movement_PanCamera_Up
    waitmovement 0
    applymovement 4, Geologist_Movement_KirschbluteWalkUp
    waitmovement 0
    message Geologist_Angrboda_Introduction
    waitmessage
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement
    message Geologist_Stone_Intro
    waitmessage
    applymovement 1, Geologist_Movement_BackOff
    waitmovement
    message Geologist_KirschbluteConvince
    waitmessage
    closemessage
    releaseall
    end
    

Geologist_Angrboda_Introduction:
    .string "{SHADOW DARK_GRAY}???{SHADOW LIGHT_GRAY}: Hello there, Dr. Orion Stone\p"
    .string "$"

Geologist_Stone_Intro:
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Wh-Who are you, and wh-what\n"
    .string "business d-do you h-have with me?\p"
    .string "SHADOW DARK_GRAY}???{SHADOW LIGHT_GRAY}: Hahaha...\p"
    .string "There's no need to be so scared,\n"
    .string "Mr. Stone...\p"
    .string "$"

Geologist_KirschbluteConvince:
    .string "After all, to {SHADOW DARK_GRAY}Angrboda{SHADOW LIGHT_GRAY}, you're one of us.\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: I- I don't understand...\n"
    .string "Wh-What do you mean by “one of us”?\l"
    .string "And wh-who are you"
    .string "???:$"
    
Geologist_Movement_KirschbluteWalkUp:
    walk_up
    step_end

Geologist_Movement_PanCamera_Up:
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

Geologist_Movement_BackOff:
    walk_up
    face_down
    step_end
