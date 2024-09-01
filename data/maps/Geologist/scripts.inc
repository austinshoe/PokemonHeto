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
    end

Geologist_VarTwo:
    setvar VAR_DEWFORD_TOWN_STATE, 2
    end

Geologist_OnFrame:
    map_script_2 VAR_DEWFORD_TOWN_STATE, 0, Geologist_EventScript_EviL_Team_Encounter
    .2byte 0

Geologist_EventScript_EviL_Team_Encounter:
    lockall
    addobject 6
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    applymovement OBJ_EVENT_ID_PLAYER, Geologist_Movement_PanCamera_Up
    waitmovement 0
    applymovement 4, Geologist_Movement_KirschbluteWalkUp
    waitmovement 0
    applymovement 5, Geologist_Movement_KirschbluteWalkUp
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
    applymovement 4, Common_Movement_FaceUp
    waitmovement 0
    message Geologist_KirschbluteSeize
    waitmessage
    closemessage
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement 2, Geologist_Grunt_Restrain1
    applymovement 3, Geologist_Grunt_Restrain2
    waitmovement 0
    waitmovement 0
    msgbox Geologist_LetGo, MSGBOX_DEFAULT
    applymovement 6, Geologist_Player_Confront
    applymovement OBJ_EVENT_ID_PLAYER, Geologist_Movement_PanCamera_Back
    waitmovement 0
    waitmovement 0
    applymovement 5, Common_Movement_FaceDown
    waitmovement 0
    applymovement 5, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Geologist_NoticePLayer, MSGBOX_DEFAULT
    applymovement 4, Common_Movement_FaceDown
    waitmovement 0
    applymovement 4, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Geologist_FirstBattle, MSGBOX_DEFAULT
    applymovement 5, GeologistKirschbluteDisappointed
    waitmovement 0
    msgbox Geologist_Grunt1_Battle, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_1, Text_GeologistGrunt1Defeated
    message Geologist_Grunt1_PostBattle
    waitmessage
    applymovement 2, Common_Movement_FaceDown
    waitmovement 0
    applymovement 2, Common_Movement_ExclamationMark
    waitmovement 0
    message Geologist_Grunt2
    waitmessage
    closemessage
    applymovement 2, Geologist_Movement_Grunt2_Confront
    applymovement 5, Geologist_Grunt1_MoveOOTW
    waitmovement 0
    waitmovement 0
    msgbox Geologist_Grunt2_Battle, MSGBOX_DEFAULT
    checkplayergender
    compare VAR_RESULT, MALE
    goto_if_eq Geologist_EventScript_EviL_Team_EncounterPt2M
    trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_2, Text_GeologistGrunt2FDefeated
    goto Geologist_EventScript_EviL_Team_EncounterPt2
    
Geologist_EventScript_EviL_Team_EncounterPt2M:
    trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_2, Text_GeologistGrunt2MDefeated
    goto Geologist_EventScript_EviL_Team_EncounterPt2
    
Geologist_EventScript_EviL_Team_EncounterPt2:
    message Geologist_Grunt2_PostBattle
    waitmessage
    applymovement 4, GeologistKirschbluteDisappointed
    waitmovement 0
    message Geologist_Kirschblute_PreBattle1
    waitmessage
    applymovement 2, Common_Movement_FaceUp
    waitmovement 0
    applymovement 2, Common_Movement_ExclamationMark
    waitmovement 0
    message Geologist_Kirschblute_PreBattle2
    waitmessage
    applymovement 2, Geologist_Movement_Search
    waitmovement 0
    applymovement 4, GeologistKirschbluteDisappointed
    waitmovement 0
    message Geologist_Kirschblute_PreBattle3
    waitmessage
    closemessage
    trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_3, Text_GeologistKirschbluteDefeated
    msgbox Geologist_Kirschblute_PostBattle, MSGBOX_DEFAULT
    applymovement 2, Geologist_Movement_FoundData
    waitmovement 0
    message Geologist_Grunt2_FoundData
    waitmessage
    applymovement 4, Common_Movement_FaceUp
    waitmovement 0
    applymovement 4, Common_Movement_ExclamationMark
    waitmovement 0
    message Geologist_Grunt2_FoundData2
    waitmessage
    closemessage
    applymovement Geologist_Grunt1_escape
    applymovement Geologist_Grunt2_escape
    applymovement Geologist_Grunt3_escape
    waitmovement 5
    hideobjectat 5, MAP_KASAAN
    waitmovement 2
    hideobjectat 2, MAP_KASAAN
    waitmovement 3
    hideobjectat 3, MAP_KASAAN
    releaseall
    end
    

Geologist_Angrboda_Introduction:
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hello there, Dr. Orion Stone\p"
    .string "$"

Geologist_Stone_Intro:
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Wh-Who are you, and wh-what\n"
    .string "business d-do you h-have with me?\p"
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: Hahaha...\p"
    .string "There's no need to be so scared,\n"
    .string "Mr. Stone...\p"
    .string "$"

Geologist_KirschbluteConvince:
    .string "After all, to {COLOR BLUE}Angrboda{COLOR DARK_GRAY}, you're one of us.\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: I- I don't understand...\n"
    .string "Wh-What do you mean by “one of us”?\l"
    .string "And wh-who are you?\p"
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: You can call me {COLOR RED}Kirschblüte{COLOR DARK_GRAY}\p"
    .string "$"
    
Geologist_KirschbluteIntro:
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: I'm one of the three admins\n"
    .string "of {COLOR BLUE}Angrboda{COLOR DARK_GRAY}.\p"
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
    .string "you're aware that all is to blame on the\l"
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
    .string "$"

Geologist_KirschbluteSeize:
    .string "Grunts! Seize him!\n"
    .string "You there! Search this place!$"
    
Geologist_LetGo:
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Hey! Let go!$"

Geologist_NoticePLayer:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: Ma'am!\n"
    .string "There's an intruder!$"

Geologist_FirstBattle:
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: {FONT_SMALL_NARROW}That useless outdoor guard...{FONT_NORMAL}\n"
    .string "What are you waiting for?\l"
    .string "Get rid of it!\p"
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: Yes, ma'am!$"

Geologist_Grunt1_Battle:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: I don't know who you are, but\n"
    .string "you've got some nerve to be interfering\l"
    .string "with us, {COLOR BLUE}Angrboda{COLOR DARK_GRAY}!$"

Geologist_Grunt1_PostBattle:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: oof...\p"
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: {FONT_SMALL_NARROW}You all are useless...{FONT_NORMAL}\n"
    .string "You there, end this quickly.\p"
    .string "$"

Geologist_Grunt2:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: Yes ma'am!$"

Text_GeologistGrunt1Defeated:
    .string "How...$"

Geologist_Grunt2_Battle:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: I'll finish you quickly!$"

Text_GeologistGrunt2MDefeated:
    .string "But he's just a colored...$"

Text_GeologistGrunt2FDefeated:
    .string "But she's just a colored...$"

Geologist_Grunt2_PostBattle:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: This...\n"
    .string "This can't be...\p"
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: {FONT_SMALL_NARROW}Weaklings...{FONT_NORMAL}.\p"
    .string "$"

Geologist_Kirschblute_PreBattle1:
    .string "I guess I'll hafta do this myself.\p"
    .string "You there!\p"
    .string "$"

Geologist_Kirschblute_PreBattle2:
    .string "Go search the lab for his research\n"
    .string "while I take care of this scum.\p"
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: Yes ma'am!$"

Geologist_Kirschblute_PreBattle3:
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: Hehehe...\p"
    .string "Easy claps...$"

Text_GeologistKirschbluteDefeated:
    .string "Mmm...$"
    
Geologist_Kirschblute_PostBattle:
    .string "{COLOR RED}Kirschblüte{COLOR DARK_GRAY}: Hm...\p"
    .string "I didn't anticipate a development like\n"
    .string "this, so I didn't bring my full team.\l"
    .string "That was a miscalculation on my part...$"

Geologist_Grunt2_FoundData:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: Ma'am! I got the files!\p"
    .string "$"

Geologist_Grunt2_FoundData2:
    .string "{COLOR RED}Kirschblute{COLOR DARK_GRAY}: Perfectly timed.\p"
    .string "Grunts! Move out!\p"
    .string "$""

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
    step_end

Geologist_Grunt_Restrain1:
    walk_up
    walk_up
    walk_up
    face_right
    step_end

Geologist_Grunt_Restrain2:
    walk_up
    walk_up
    walk_up
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
    
Geologist_Movement_Grunt2_Confront:
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_right
    face_down
    step_end

Geologist_Grunt1_MoveOOTW:
    walk_fast_right
    face_down
    step_end

Geologist_Movement_Search:
    walk_fast_left
    walk_fast_up
    walk_fast_up
    walk_fast_up
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    face_up
    step_end

Geologist_Movement_FoundData:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_down
    walk_fast_down
    walk_fast_right
    face_down
    step_end
    
Geologist_Grunt1_escape:
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_left
    face_down
    step_end

Geologist_Grunt2_escape:
    walk_fast_right
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_left
    face_down
    step_end

Geologist_Grunt3_escape:
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_left
    face_down
    step_end
