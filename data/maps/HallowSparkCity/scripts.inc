HallowSparkCity_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, HallowSparkCity_OnTransition
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HallowSparkCity_OnWarp
    map_script MAP_SCRIPT_ON_FRAME_TABLE, HallowSparkCity_OnFrame
	.byte 0

HallowSparkCity_OnTransition:
    setflag FLAG_TEMP_1
    setvar VAR_UNUSED_0x4091, 0
    setflag FLAG_VISITED_FORTREE_CITY
    goto HallowSparkCity_SetUpObjxy
    end

HallowSparkCity_OnWarp: 
    map_script_2 VAR_FORTREE_CITY_STATE, 10, HallowsparkCity_SetUpAngrbodaCutscene
    .2byte 0

HallowsparkCity_SetUpAngrbodaCutscene:
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    addobject 3
    addobject 4
    addobject 5
    addobject 6
    addobject 7
    addobject 8
    setobjectxyperm 3, 27, 11
    setobjectxyperm 4, 26, 11
    setobjectxyperm 5, 25, 11
    setobjectxyperm 6, 24, 11
    setobjectxyperm 7, 23, 11
    setobjectxyperm 8, 22, 11
    end

HallowSparkCity_OnFrame:
    map_script_2 VAR_FORTREE_CITY_STATE, 0, HallowSparkCity_LenaCutscene1
    map_script_2 VAR_FORTREE_CITY_STATE, 2, HallowSparkCity_AngrbodaCutscene
    map_script_2 VAR_FORTREE_CITY_STATE, 10, HallowSparkCity_AngrbodaCutscene2
    .2byte 0

HallowSparkCity_SetUpObjxy:
    switch VAR_FORTREE_CITY_STATE
    case 0, HallowSparkCity_SetUpLenaPos
    case 3, HallowSparkCity_SetUpRivalLenaPos
    case 4, HallowSparkCity_SetUpLenaHealerPos
    end

HallowSparkCity_SetUpLenaPos:
    setobjectxyperm 1, 3, 5
    end

HallowSparkCity_SetUpRivalLenaPos:
    clearflag FLAG_TEMP_1
    addobject 2
    setobjectgfx 2, OBJ_EVENT_GFX_BRENDAN_NORMAL
    addobject 1
    setobjectxyperm 1, 32, 11
    setobjectxyperm 2, 32, 12
    setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
    setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
    end

HallowSparkCity_SetUpLenaHealerPos:
    setobjectxyperm 1, 34, 9
    setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
    end

HallowSparkCity_LenaHealer::
    msgbox HallowSparkCity_LenaHeal MSGBOX_DEFAULT
    call Common_EventScript_OutOfCenterPartyHeal
	waitmessage
	waitbuttonpress
	release
	end

HallowSparkCity_LenaCutscene1:
    lockall
    delay 16
    applymovement 1, Common_Movement_FaceDown
    waitmovement 1
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
    addobject 2
    clearflag FLAG_TEMP_1
    setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    compare VAR_TEMP_0, 2
    goto_if_eq HallowSparkCity_LenaCutscene1OtherMvmt
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraUp1
    waitmovement 0
    call HallowSparkCity_LenaCutscene1pt2
    waitmovement 1
    applymovement 1, HallowSpark_LenaLeaveForNow2
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraDown1
    waitmovement 0
    waitmovement 1
    goto HallowSparkCity_LenaCutscene1pt3

HallowSparkCity_LenaCutscene1OtherMvmt:
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraUp2
    waitmovement 0
    call HallowSparkCity_LenaCutscene1pt2
    waitmovement 1
    applymovement 1, HallowSpark_LenaLeaveForNow2
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraDown2
    waitmovement 0
    waitmovement 1
    goto HallowSparkCity_LenaCutscene1pt3

HallowSparkCity_LenaCutscene1pt2:
    msgbox HallowSpark_LenaSawAngrboda, MSGBOX_DEFAULT
    applymovement 1, HallowSpark_LookAround
    waitmovement 1
    msgbox HallowSpark_LenaBetterWatchOut, MSGBOX_DEFAULT
    applymovement 1, HallowSpark_LenaStepUp
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_LenaStepUp
    waitmovement 1
    waitmovement OBJ_EVENT_ID_PLAYER
    msgbox HallowSpark_LenaLieLow, MSGBOX_DEFAULT
    applymovement 1, HallowSpark_LenaLeaveForNow
    return

HallowSparkCity_LenaCutscene1pt3:
    showobjectat OBJ_EVENT_ID_PLAYER, 0
    setflag FLAG_TEMP_1
    removeobject 2
    setobjectxyperm 2, 0, 0
    setvar VAR_FORTREE_CITY_STATE, 1
    releaseall
    end

HallowSparkCity_AngrbodaCutscene:
    delay 16
    getplayerxy VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
    warpsilent MAP_HALLOW_SPARK_CITY, 36, 10
    setvar VAR_FORTREE_CITY_STATE, 10
    end

HallowSparkCity_AngrbodaCutscene2:
    setobjectxy 3, 27, 11
    setobjectxy 4, 26, 11
    setobjectxy 5, 25, 11
    setobjectxy 6, 24, 11
    setobjectxy 7, 23, 11
    setobjectxy 8, 22, 11
    applymovement 3, HallowSparkCity_AngrbodaWalkUp
    applymovement 4, HallowSparkCity_AngrbodaWalkUp
    applymovement 5, HallowSparkCity_AngrbodaWalkUp
    applymovement 6, HallowSparkCity_AngrbodaWalkUp
    applymovement 7, HallowSparkCity_AngrbodaWalkUp
    applymovement 8, HallowSparkCity_AngrbodaWalkUp
    waitmovement 8
    applymovement 3, HallowSparkCity_AngrbodaWalkUpMiniLeader
    applymovement 4, HallowSparkCity_AngrbodaGetInFormation
    applymovement 5, HallowSparkCity_AngrbodaGetInFormation
    applymovement 6, HallowSparkCity_AngrbodaGetInFormation
    applymovement 7, HallowSparkCity_AngrbodaGetInFormation
    applymovement 8, HallowSparkCity_AngrbodaGetInFormation
    waitmovement 8
    msgbox HallowSpark_TextAngrbodaLetsGo, MSGBOX_DEFAULT
    applymovement 4, Common_Movement_ExclamationMark
    applymovement 5, Common_Movement_ExclamationMark
    applymovement 6, Common_Movement_ExclamationMark
    applymovement 7, Common_Movement_ExclamationMark
    applymovement 8, Common_Movement_ExclamationMark
    message HallowSpark_TextAngrbodaLetsGo2
    waitmessage
    closemessage
    waitmovement 4
    waitmovement 5
    waitmovement 6
    waitmovement 7
    waitmovement 8
    applymovement 3, Common_Movement_FaceUp
    waitmovement 3
    applymovement 3, HallowSpark_AngrbodaLeave3
    applymovement 6, HallowSpark_AngrbodaLeave3
    applymovement 7, HallowSpark_AngrbodaLeave71
    applymovement 8, HallowSpark_AngrbodaLeave81
    waitmovement 3
    playse SE_EXIT
    removeobject 3
    waitmovement 8
    applymovement 6, HallowSpark_AngrbodaLeave6
    applymovement 7, HallowSpark_AngrbodaLeave7
    applymovement 8, HallowSpark_AngrbodaLeave8
    applymovement 5, HallowSpark_AngrbodaLeave5
    applymovement 4, HallowSpark_AngrbodaLeave4
    waitmovement 6
    playse SE_EXIT
    removeobject 6
    waitse
    waitmovement 7
    removeobject 7
    waitmovement 8
    playse SE_EXIT
    removeobject 8
    waitse
    waitmovement 5
    removeobject 5
    waitmovement 4
    playse SE_EXIT
    removeobject 4
    waitse
    fadescreen FADE_TO_BLACK
    addobject 2
    showobjectat 2, MAP_HALLOW_SPARK_CITY
    setobjectxyperm 2, 32, 17
    setobjectxy 2, 32, 17
    clearflag FLAG_TEMP_1
    addobject 1
    setobjectgfx 2, OBJ_EVENT_GFX_BRENDAN_NORMAL
    setobjectxy 1, 27, 11
    showobjectat 1, MAP_HALLOW_SPARK_CITY
    fadescreen FADE_FROM_BLACK
    addobject 1
    addobject 2
    delay 16
    applymovement 2, HallowSparkCity_LenaPullUp
    applymovement 1, HallowSparkCity_RivalPullUp
    waitmovement 1
    applymovement 2, Common_Movement_FaceDown
    applymovement 1, Common_Movement_FaceUp
    waitmovement 1
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 2, Common_Movement_ExclamationMark
    waitbuttonpress
    setvar VAR_FORTREE_CITY_STATE, 3
    warpsilent MAP_HALLOW_SPARK_CITY, VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
    end

HallowSpark_LenaRivalEventTriggers::
    lockall
    getplayerxy VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
    delay 16
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 2, Common_Movement_ExclamationMark
    waitmovement 1
    delay 32
    message HallowSpark_LiamSurprised
    waitmessage
    waitbuttonpress
    waitmovement 2
    closemessage
    applymovement 1, Common_Movement_QuestionMark
    delay 32
    message HallowSpark_LenaConfuzzled
    waitmessage
    waitmovement 1
    message HallowSpark_LiamWhoRU
    waitmessage
    applymovement 2, Common_Movement_ExclamationMark
    delay 32
    message HallowSpark_LiamAngrbodaAccusations
    waitmessage
    applymovement 1, Common_Movement_QuestionMark
    delay 32
    message HallowSpark_LenaImNotAngrboda
    waitmessage
    waitmovement 1
    message HallowSpark_RivalBackAtYou
    waitmessage
    closemessage
    call HallowSparkCity_TurnRival 
    delay 8
    applymovement 2, Common_Movement_ExclamationMark
    delay 32
    message HallowSpark_RivalHollaAtYou
    waitmessage
    waitmovement 2
    closemessage
    call HallowSpark_PlayerPullUp
    applymovement 2, Common_Movement_FaceUp
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
    waitmovement 0
    delay 16
    applymovement 1, Common_Movement_ExclamationMark
    delay 32
    message HallowSpark_LenaRecognizeName
    waitmessage
    waitmovement 1
    message HallowSpark_RivalWhoIsLena
    waitmessage
    applymovement 2, Common_Movement_ExclamationMark
    delay 32
    message HallowSpark_OverstepBounds
    waitmessage 
    waitmovement 2
    message HallowSpark_AngrbodaUniform
    waitmessage
    applymovement 1, HallowSpark_LenaAboutToLeave
    waitmovement 0
    applymovement 1, Common_Movement_ExclamationMark
    delay 32
    message HallowSpark_LenaForgotMons
    waitmessage
    waitmovement 1
    message HallowSpark_CanBeOfUseAfterAll
    waitmessage
    closemessage
    delay 32
    applymovement 2, HallowSpark_RivalGetBehindLena
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_RivalGetBehindLena
    waitmovement 0
    applymovement 1, HallowSpark_LenaGoToEntr
    applymovement 2, HallowSpark_RivalFollowLena
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_RivalFollowLena
    waitmovement 0
    delay 32
    message HallowSpark_LenaExplainMission
    waitmessage
    closemessage
    applymovement 1, HallowSpark_LenaGetInPos
    waitmovement 0
    applymovement 2, Common_Movement_FaceLeft
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
    waitmovement 0
    message HallowSpark_LiamWeBetterGetGoing
    waitmessage
    waitbuttonpress
    setrespawn HEAL_LOCATION_HALLOWSPARK_LENA
    closemessage
    applymovement 2, HallowSpark_RivalEnter
    waitmovement 0
    playse SE_EXIT
    setflag FLAG_TEMP_1
    removeobject 2
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_PlayerEnter
    setvar VAR_NEW_MAUVILLE_STATE, 1
    setvar VAR_FORTREE_CITY_STATE, 4
    waitmovement 0
    playse SE_EXIT
    warpsilent MAP_HETONIAN_POWER_PLANT1F, 1
    releaseall
    end

HallowSparkCity_TurnRival:
    switch VAR_UNUSED_0x40FF
    case 10, HallowSpark_RivalUp
    case 14, HallowSpark_RivalDown
    case 11, HallowSpark_RivalLeft
    case 12, HallowSpark_RivalLeft
    case 13, HallowSpark_RivalLeft
    return

HallowSpark_RivalDown:
    turnobject 2, DIR_SOUTH
    return

HallowSpark_RivalLeft:
    turnobject 2, DIR_WEST
    return

HallowSpark_RivalUp:
    turnobject 2, DIR_NORTH
    return

HallowSpark_PlayerPullUp:
    call HallowSpark_PlayerAdjustX
    call HallowSpark_PlayerAdjustY
    return

HallowSpark_PlayerAdjustX:
    switch VAR_UNUSED_0x40FE
    case 31, HallowSpark_PlayerNothing
    case 32, HallowSpark_PlayerLeft1
    case 33, HallowSpark_PlayerLeft2
    case 34, HallowSpark_PlayerLeft3
    case 35, HallowSpark_PlayerLeft4
    case 30, HallowSpark_PlayerRight1
    applymovement 2, Common_Movement_FaceUp
    waitmovement 2
    return

HallowSpark_PlayerAdjustY:
    switch VAR_UNUSED_0x40FF
    case 10, HallowSpark_PlayerDown2
    case 11, HallowSpark_PlayerDown1
    case 12, HallowSpark_PlayerNothing2
    case 13, HallowSpark_PlayerUp1
    case 14, HallowSpark_RivalUp2
    return

HallowSpark_PlayerNothing:
    return

HallowSpark_PlayerLeft1:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerLeft1
    waitmovement 0
    return

HallowSpark_PlayerLeft2:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerLeft2
    waitmovement 0
    return

HallowSpark_PlayerLeft3:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerLeft3
    waitmovement 0
    return

HallowSpark_PlayerLeft4:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerLeft4
    waitmovement 0
    return

HallowSpark_PlayerRight1:   
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerRight1
    waitmovement 0
    return

HallowSpark_PlayerDown2:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerDown2
    waitmovement 0
    return

HallowSpark_PlayerDown1:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerDown1
    waitmovement 0
    return

HallowSpark_PlayerNothing2:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerNothing2
    waitmovement 0
    return

HallowSpark_PlayerUp1:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerUp1
    waitmovement 0
    return

HallowSpark_RivalUp2:
    applymovement OBJ_EVENT_ID_PLAYER, Movement_HallowSpark_PlayerUp2
    waitmovement 0
    return

Script_HallowSparkCitySign::
    lock
    faceplayer
    msgbox Text_HallowSparkCitySign, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkCitySign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Hallow Spark City\n"
    .string "{COLOR DARK_GRAY}It's electrifying here - we promise!$"

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

HallowsparkCity_PanCameraUp1:
    walk_down
    walk_down
    step_end

HallowsparkCity_PanCameraUp2:
    walk_down
    walk_down
    walk_right
    step_end

HallowsparkCity_PanCameraDown1:
    walk_up
    walk_up
    walk_up
    face_down
    step_end

HallowsparkCity_PanCameraDown2:
    walk_up
    walk_left
    walk_up
    walk_up
    face_up
    step_end

HallowSpark_LenaSawAngrboda:
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: So this is where he said {COLOR BLUE}Angrboda{COLOR DARK_GRAY}\n"
    .string "would be...$"

HallowSpark_LookAround:
    face_left
    delay_16
    delay_16
    face_up
    delay_16
    delay_16
    face_right
    delay_16
    delay_16
    face_up
    delay_16
    delay_16
    step_end

HallowSpark_LenaBetterWatchOut:
    .string "I don't see them right now, but they're\n"
    .string "probably close by.$"

HallowSpark_LenaStepUp:
    walk_down
    step_end

HallowSpark_LenaLieLow:
    .string "I guess I'll just lie low for now.\p"
    .string "I'll move when they do.$"

HallowSpark_LenaLeaveForNow:
    walk_down
    walk_right
    walk_down
    walk_down
    walk_down
    walk_down

HallowSpark_LenaLeaveForNow2:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

HallowSparkCity_AngrbodaWalkUp:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

HallowSparkCity_AngrbodaWalkUpMiniLeader:
    walk_up
    face_down
    step_end

HallowSparkCity_AngrbodaGetInFormation:
    walk_right
    walk_right
    walk_right
    face_up
    step_end

HallowSpark_TextAngrbodaLetsGo:
    .string "{COLOR BLUE}Grunt{COLOR DARK_GRAY}: Boss and them should already be\n"
    .string "in there.\p"
    .string "Let's make this quick, and make sure\n"
    .string "nobody notices us until we finish our\l"
    .string "business here.$"

HallowSpark_TextAngrbodaLetsGo2:
    .string "Aye aye!$"

HallowSpark_AngrbodaLeave3:
    walk_up
    walk_up
    step_end

HallowSpark_AngrbodaLeave71:
    walk_right
    walk_up
    step_end

HallowSpark_AngrbodaLeave81:
    walk_right
    walk_right
    step_end

HallowSpark_AngrbodaLeave6:
    walk_up
    step_end 

HallowSpark_AngrbodaLeave7:
    walk_up
    walk_up
    step_end 

HallowSpark_AngrbodaLeave8:
    walk_up
    walk_up
    walk_up
    step_end 

HallowSpark_AngrbodaLeave5:
    walk_left
    walk_up
    walk_up
    walk_up
    step_end 

HallowSpark_AngrbodaLeave4:
    walk_left
    walk_left
    walk_up
    walk_up
    walk_up
    step_end 

HallowSparkCity_LenaPullUp:
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

HallowSparkCity_RivalPullUp:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

HallowSpark_LiamSurprised:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Woah there! Outta the way, I'm\n"
    .string "doing something important here!$"

HallowSpark_LenaConfuzzled:
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: Who, me?\p"
    .string "I also happen to have business here.$"

HallowSpark_LiamWhoRU:
    .string "Liam: Business here?\n"
    .string "What business do you have here?\p"
    .string "Wait...\p"
    .string "$"

HallowSpark_LiamAngrbodaAccusations:
    .string "That uniform...\p"
    .string "Could it be that you're one of those\n"
    .string "{COLOR BLUE}Angrboda{COLOR DARK_GRAY} people?$"

HallowSpark_LenaImNotAngrboda:
    .string "???: Wait what- No-\p"
    .string "I'm not part of Angrboda-\n"
    .string "How do you even know what Angrboda is?\p"
    .string "$"

HallowSpark_RivalBackAtYou:
    .string "Liam: Right back at you, how do YOU\n"
    .string "know about Angrboda?\p"
    .string "???: That's classified information.\p"
    .string "Liam: Classified information?\p"
    .string "What does that even mean, classified-\n"
    .string "Are you a government agent or what?\p"
    .string "???: Well, I suppose I am something\n"
    .string "like that.$"

HallowSpark_RivalHollaAtYou:
    .string "Liam: {PLAYER}! You're also here!$"

Movement_HallowSpark_PlayerLeft1:
    walk_left
    step_end

Movement_HallowSpark_PlayerLeft2:
    walk_left
    walk_left
    step_end

Movement_HallowSpark_PlayerLeft3:
    walk_left
    walk_left
    walk_left
    step_end

Movement_HallowSpark_PlayerLeft4:
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

Movement_HallowSpark_PlayerRight1:
    walk_right
    step_end

Movement_HallowSpark_PlayerDown2:
    walk_down
    walk_down
    face_up
    step_end

Movement_HallowSpark_PlayerDown1:
    walk_down
    face_up
    step_end

Movement_HallowSpark_PlayerNothing2:
    face_up
    step_end

Movement_HallowSpark_PlayerUp1:
    walk_up
    step_end

Movement_HallowSpark_PlayerUp2:
    walk_up
    walk_up
    step_end

HallowSpark_LenaRecognizeName:
    .string "???: {PLAYER}...\n"
    .string "I recognize that name...\p"
    .string "Oh, right, Khione mentioned you.\p"
    .string "You were the one that encountered\n"
    .string "Angrboda back in Kasaan, right?$"

HallowSpark_RivalWhoIsLena:
    .string "Liam: You know Khione like that?\p"
    .string "Just who are you?\p"
    .string "Wait...\p"
    .string "Could it be that you're also a gym\n"
    .string "leader or something?\p"
    .string "???: Who, me?\p"
    .string "Something like that, yes.$"

HallowSpark_OverstepBounds:
    .string "Liam: Oh shoot- My fault for over\n"
    .string "stepping my boundaries back there.\p"
    .string "I thought you were a part of Angrboda\n"
    .string "because of your-\p"
    .string "$"

HallowSpark_AngrbodaUniform:
    .string "???: Because of my uniform?\p"
    .string "It's okay, you guys would be too young\n"
    .string "Where it comes from anyways.\p"
    .string "My name is Lena- I'm grateful for your\n"
    .string "concern in this matter, but I can take\l"
    .string "things from here.$"

HallowSpark_LenaAboutToLeave:
    face_right
    walk_right
    step_end

HallowSpark_LenaForgotMons:
    .string "Lena: Oh dear god... There's no way...\n"
    .string "How did I forget to bring my Pokémon on\l"
    .string "this mission-\l"
    .string "I won't be able to battle like this-$"

HallowSpark_CanBeOfUseAfterAll:
    .string "Liam: Ms. Lena!\p"
    .string "We can still help!\p"
    .string "I promise me and {PLAYER}\n"
    .string "won't drag you down- we're definitely\l"
    .string "way stronger than you think!\p"
    .string "Lena: I'm so stupid...\n"
    .string "I guess I don't really have a choice-\l"
    .string "It's not like we have time to wait for\l"
    .string "reinforcements.\p"
    .string "Come on. Follow me.$"

HallowSpark_RivalGetBehindLena:
    walk_up
    face_right
    step_end

HallowSpark_LenaGoToEntr:
    walk_right
    walk_right
    walk_right
    walk_up
    face_down
    step_end

HallowSpark_RivalFollowLena:
    walk_right
    walk_right
    walk_right
    walk_right
    face_up
    step_end

HallowSpark_LenaExplainMission:
    .string "Lena: Since I can't fight in my current\n"
    .string "state, I'll just stay out here.\p"
    .string "If you need to heal your Pokémon I can\n"
    .string "heal them here.$"

HallowSpark_LenaGetInPos:
    walk_left
    walk_left
    walk_up
    face_down
    step_end

HallowSpark_LiamWeBetterGetGoing:
    .string "Liam: Well, I guess that means we better\n"
    .string "get going too!$"

HallowSpark_RivalEnter:
    walk_up
    walk_up
    walk_up
    step_end

HallowSpark_PlayerEnter:
    walk_right
    walk_up
    walk_up
    walk_up
    step_end

HallowSparkCity_LenaHeal:
    .string "Your pokémon look battered-\p"
    .string "Let me heal them up for you!$"

