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
    waitmovement 0
    message Geologist_Stone_Intro
    waitmessage
    applymovement 1, Geologist_Movement_BackOff
    waitmovement 0
    message Geologist_KirschbluteConvince
    waitmessage
    applymovement 4, Geologist_Movement_KirschbluteWalkUp
    waitmovement 0
    message Geologist_KirschbluteIntro
    waitmessage
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 0
    message Geologist_StonePreSearch
    waitmessage
    applymovement 4, Common_Movement_FaceLeft
    waitmovement 0
    message Geologist_KirschbluteExplain
    waitmessage
    applymovement 4, Common_Movement_FaceUp
    waitmovement 0
    message Geologist_KirschbluteKill
    waitmessage
    applymovement 4, GeologistKirschbluteDisappointed
    waitmovement 0
    message Geologist_KirschblutePreEntrance
    waitmessage
    closemessage
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement 2, Geologist_Grunt_Restrain1
    waitmovement 0
    applymovement 3, Geologist_Grunt_Restrain2
    waitmovement 0
    msgbox Geologist_LetGo, MSGBOX_DEFAULT
    applymovement 6, Geologist_Player_Confront
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER, Geologist_Movement_PanCamera_Back
    waitmovement 0
    releaseall
    end
    

Geologist_Angrboda_Introduction:
    .string "{SHADOW DARK_GRAY}???{SHADOW LIGHT_GRAY}: Hello there, Dr. Orion Stone\p"
    .string "$"

Geologist_Stone_Intro:
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Wh-Who are you, and wh-what\n"
    .string "business d-do you h-have with me?\p"
    .string "{SHADOW DARK_GRAY}???{SHADOW LIGHT_GRAY}: Hahaha...\p"
    .string "There's no need to be so scared,\n"
    .string "Mr. Stone...\p"
    .string "$"

Geologist_KirschbluteConvince:
    .string "After all, to {SHADOW DARK_GRAY}Angrboda{SHADOW LIGHT_GRAY}, you're one of us.\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: I- I don't understand...\n"
    .string "Wh-What do you mean by “one of us”?\l"
    .string "And wh-who are you?\p"
    .string "{SHADOW DARK_GRAY}???{SHADOW LIGHT_GRAY}: You can call me {COLOR RED}Kirschblüte{COLOR DARK_GRAY}\p"
    .string "$"
    
Geologist_KirschbluteIntro:
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: I'm one of the three admins\n"
    .string "of {SHADOW DARK_GRAY}Angrboda{SHADOW LIGHT_GRAY}.\p"
    .string "But that doesn't matter.\n"
    .string "Right now, what we need are the files\l"
    .string "you have on the composition of the\l"
    .string "Earth's crust under {COLOR RED}Heto{COLOR DARK_GRAY}.\p"
    .string "$"

Geologist_StonePreSearch:
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Wh-What would you need that\n"
    .string "f-for?\p"
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: Heheheh...\n"
    .string "That's for us to decide.\l"
    .string "Are you gonna fork the files over?\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: I-I can't p-p-possibly give\n"
    .string "y-you such i-im-important data without\l"
    .string "b-being sure of y-your i-intentions.\p"
    .string "$"

Geologist_KirschbluteExplain:
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: ...\p"
    .string "Dr. Stone, surely you remember the war\n"
    .string "that happened a decade ago?\l"
    .string "You must have lost someone dear to you\p"
    .string "After all, the war affected everyone,\n"
    .string "not just those on the front lines. \p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: ...\p"
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: And as an Alba, I'm sure\n"
    .string "you're aware that all is to blame on the\n"
    .string "colored scum in the North.\p"
    .string "$"

Geologist_KirschbluteKill:
    .string "People need to take responsibility\n"
    .string "for their actions...\l"
    .string "So we're gonna blow up the northern\l"
    .string "scum from underneath.\l"
    .string "But to do that, we need your data.\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Y-your going to commit\n"
    .string "g-gen-genocide with my research-\p"
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: Think of it as...\n"
    .string "A deep cleansing, heheheheh.\p"
    .string "Help us, and we'll reward you\n"
    .string "handsomely.\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: T-there's n-no way I'd allow\n"
    .string "myself to be an accomplice in something\l"
    .string "so evil!\p"
    .string "$"

Geologist_KirschblutePreEntrance:
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: ...\p"
    .string "You disappoint me, Mr. Stone\p"
    .string "Grunts! Seize him!\n"
    .string "You there! Search this place!$"
    
Geologist_LetGo:
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Hey! Let go!$"

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

GeologistKirschbluteDisappointed:
    walk_down
    walk_down
    step_end

Geologist_Grunt_Restrain1:
    walk_down
    walk_down
    walk_down
    face_right
    step_end

Geologist_Grunt_Restrain2:
    walk_down
    walk_down
    walk_down
    face_left
    step_end

Geologist_Player_Confront:
    walk_up
    walk_up
    step_end

Geologist_Movement_PanCamera_Back:
    walk_down
    walk_down
    face_up
    step_end
