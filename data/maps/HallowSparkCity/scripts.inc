HallowSparkCity_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, HallowSparkCity_OnTransition
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HallowSparkCity_OnWarp
    map_script MAP_SCRIPT_ON_FRAME_TABLE, HallowSparkCity_OnFrame
	.byte 0

HallowSparkCity_OnTransition:
    setflag FLAG_TEMP_1
    setflag FLAG_TEMP_2
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
    map_script_2 VAR_FORTREE_CITY_STATE, 5, HallowSparkCity_PostAngrbodaCutscene
    .2byte 0

HallowSparkCity_SetUpObjxy:
    switch VAR_FORTREE_CITY_STATE
    case 0, HallowSparkCity_SetUpLenaPos
    case 3, HallowSparkCity_SetUpRivalLenaPos
    case 4, HallowSparkCity_SetUpLenaHealerPos
    case 5, HallowSparkCity_SetUpLenaChampRivalPos
    end

HallowSparkCity_SetUpLenaPos:
    setobjectxyperm 1, 3, 5
    end

HallowSparkCity_SetUpRivalLenaPos:
    addobject 11
    addobject 1
    setobjectxyperm 1, 32, 11
    setobjectxyperm 11, 32, 12
    setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
    setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
    end

HallowSparkCity_SetUpLenaHealerPos:
    setobjectxyperm 1, 34, 9
    setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
    end

HallowSparkCity_LenaHealer::
    lock
    faceplayer
    msgbox HallowSparkCity_LenaHeal MSGBOX_DEFAULT
    closemessage
    call Common_EventScript_OutOfCenterPartyHeal
	waitmessage
	waitbuttonpress
	release
	end

HallowSparkCity_SetUpLenaChampRivalPos::
    addobject 11
    addobject 1
    setobjectxyperm 1, 34, 10
    setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
    setobjectxyperm 11, 36, 10
    setobjectmovementtype 11, MOVEMENT_TYPE_FACE_DOWN
    setobjectxyperm 9, 27, 11
    setobjectmovementtype 9, MOVEMENT_TYPE_FACE_RIGHT
    addobject 9
    end    

HallowSpark_CantLeaveLeft::
    msgbox Text_HallowSpark_CantLeaveYet, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_WalkRight
    waitmovement 0
    end

HallowSpark_CantLeaveDown::
    msgbox Text_HallowSpark_CantLeaveYet, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_WalkUp
    waitmovement 0
    end

HallowSpark_CantLeaveRight::
    msgbox Text_HallowSpark_CantLeaveYet, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_WalkLeft
    waitmovement 0
    end

HallowSparkCity_LenaCutscene1:
    lockall
    delay 16
    applymovement 1, Common_Movement_FaceDown
    waitmovement 1
    checkplayergender
    compare VAR_RESULT, FEMALE
    goto_if_eq HallowSparkCity_LenaCutscene15Female
    goto HallowSparkCity_LenaCutscene15 

HallowSparkCity_LenaCutscene15:
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

HallowSparkCity_LenaCutscene15Female:
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    setobjectxyperm 10, VAR_TEMP_0, VAR_TEMP_1
    addobject 10
    clearflag FLAG_TEMP_2
    setobjectxyperm 10, VAR_TEMP_0, VAR_TEMP_1
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    compare VAR_TEMP_0, 10
    goto_if_eq HallowSparkCity_LenaCutscene1OtherMvmtFemale
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraUp1
    waitmovement 0
    call HallowSparkCity_LenaCutscene1pt2Female
    waitmovement 1
    applymovement 1, HallowSpark_LenaLeaveForNow2
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraDown1
    waitmovement 0
    waitmovement 1
    goto HallowSparkCity_LenaCutscene1pt3Female

HallowSparkCity_LenaCutscene1OtherMvmtFemale:
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraUp2
    waitmovement 0
    call HallowSparkCity_LenaCutscene1pt2Female
    waitmovement 1
    applymovement 1, HallowSpark_LenaLeaveForNow2
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraDown2
    waitmovement 0
    waitmovement 1
    goto HallowSparkCity_LenaCutscene1pt3Female

HallowSparkCity_LenaCutscene1pt2Female:
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

HallowSparkCity_LenaCutscene1pt3Female:
    showobjectat OBJ_EVENT_ID_PLAYER, 0
    setflag FLAG_TEMP_2
    removeobject 10
    setobjectxyperm 10, 0, 0
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
    addobject 11
    showobjectat 11, MAP_HALLOW_SPARK_CITY
    setobjectxyperm 11, 32, 17
    setobjectxy 11, 32, 17
    clearflag FLAG_TEMP_2
    addobject 1
    setobjectxy 1, 27, 11
    showobjectat 1, MAP_HALLOW_SPARK_CITY
    fadescreen FADE_FROM_BLACK
    addobject 1
    addobject 11
    delay 16
    applymovement 11, HallowSparkCity_LenaPullUp
    applymovement 1, HallowSparkCity_RivalPullUp
    waitmovement 1
    applymovement 11, Common_Movement_FaceUp
    applymovement 1, Common_Movement_FaceDown
    waitmovement 1
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 11, Common_Movement_ExclamationMark
    waitbuttonpress
    setvar VAR_FORTREE_CITY_STATE, 3
    warpsilent MAP_HALLOW_SPARK_CITY, VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
    end

HallowSparkCity_PostAngrbodaCutscene::
    lockall
    delay 32
    applymovement 11, HallowSparkCity_WalkDownFaceLeft
    applymovement OBJ_EVENT_ID_PLAYER, HallowSparkCity_WalkDownFaceLeft
    waitmovement 0
    delay 32
    applymovement 1, Common_Movement_FaceRight
    waitmovement 0
    applymovement 1, Common_Movement_ExclamationMark
    message HallowSparkCity_LenaThereYallAre
    waitmessage
    waitmovement 1
    applymovement 11, Common_Movement_FaceLeft
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    applymovement 11, Common_Movement_ExclamationMark
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
    message HallowSparkCity_LenaWorried
    waitmessage
    waitmovement 0
    waitbuttonpress
    closemessage
    applymovement 1, Common_Movement_FaceLeft
    waitmovement 0
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 9, HallowSparkCity_ShinPullUp
    waitmovement 9
    waitmovement 1
    applymovement 1, Common_Movement_FaceDown
    waitmovement 1
    message HallowSparkCity_ShinWantUpdate
    waitmessage
    applymovement 9, Common_Movement_FaceRight
    waitmovement 9
    applymovement 9, Common_Movement_ExclamationMark
    waitbuttonpress
    message HallowSparkCity_ShinWhoAreKids
    waitmessage
    waitmovement 0
    fadescreen FADE_TO_BLACK
    closemessage
    delay 32
    fadescreen FADE_FROM_BLACK
    delay 16
    message HallowSparkCity_ShinAnalyse
    waitmessage
    applymovement 9, Common_Movement_FaceUp
    waitmovement 0
    message HallowSparkCity_ShinLeave
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 9, HallowSparkCity_ShinWalkAway
    waitmovement 9
    setobjectxy 9, 34, 0
    setobjectxyperm 9, 34, 0
    applymovement 1, Common_Movement_FaceRight
    waitmovement 1
    message HallowSpark_LenaAskForHelp
    waitmessage
    waitbuttonpress
    applymovement 1, HallowSparkCity_ShinWalkAway
    waitmovement 1
    setobjectxy 1, 35, 0
    setobjectxyperm 1, 35, 0
    waitbuttonpress
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
    applymovement 11, Common_Movement_FaceUp
    waitmovement 0
    message HallowSpark_LiamOutro
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 11, HetonianPowerPlant2F_LiamLeave
    waitmovement 11
    setflag FLAG_TEMP_2
    removeobject 11
    setrespawn HEAL_LOCATION_HALLOW_SPARK_CITY
    setvar VAR_FORTREE_CITY_STATE, 6
    clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
    delay 16
    releaseall
    end

HallowSpark_LenaRivalEventTriggers::
    lockall
    getplayerxy VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
    delay 16
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 11, Common_Movement_ExclamationMark
    waitmovement 1
    delay 32
    message HallowSpark_LiamSurprised
    waitmessage
    waitbuttonpress
    waitmovement 11
    closemessage
    applymovement 1, Common_Movement_QuestionMark
    delay 32
    message HallowSpark_LenaConfuzzled
    waitmessage
    waitmovement 1
    message HallowSpark_LiamWhoRU
    waitmessage
    applymovement 11, Common_Movement_ExclamationMark
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
    applymovement 11, Common_Movement_ExclamationMark
    delay 32
    message HallowSpark_RivalHollaAtYou
    waitmessage
    waitmovement 11
    closemessage
    call HallowSpark_PlayerPullUp
    applymovement 11, Common_Movement_FaceUp
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
    applymovement 11, Common_Movement_ExclamationMark
    delay 32
    message HallowSpark_OverstepBounds
    waitmessage 
    waitmovement 11
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
    applymovement 11, HallowSpark_RivalGetBehindLena
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_RivalGetBehindLena
    waitmovement 0
    applymovement 1, HallowSpark_LenaGoToEntr
    applymovement 11, HallowSpark_RivalFollowLena
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_RivalFollowLena
    waitmovement 0
    delay 32
    message HallowSpark_LenaExplainMission
    waitmessage
    closemessage
    applymovement 1, HallowSpark_LenaGetInPos
    waitmovement 0
    applymovement 11, Common_Movement_FaceLeft
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
    waitmovement 0
    message HallowSpark_LiamWeBetterGetGoing
    waitmessage
    waitbuttonpress
    setrespawn HEAL_LOCATION_HALLOWSPARK_LENA
    closemessage
    applymovement 11, HallowSpark_RivalEnter
    waitmovement 0
    playse SE_EXIT
    setflag FLAG_TEMP_2
    removeobject 11
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
    turnobject 11, DIR_SOUTH
    return

HallowSpark_RivalLeft:
    turnobject 11, DIR_WEST
    return

HallowSpark_RivalUp:
    turnobject 11, DIR_NORTH
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
    applymovement 11, Common_Movement_FaceUp
    waitmovement 11
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
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Business here?\n"
    .string "What business do you have here?\p"
    .string "Wait...\p"
    .string "$"

HallowSpark_LiamAngrbodaAccusations:
    .string "That uniform...\p"
    .string "Could it be that you're one of those\n"
    .string "{COLOR BLUE}Angrboda{COLOR DARK_GRAY} people?$"

HallowSpark_LenaImNotAngrboda:
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: Wait what- No-\p"
    .string "I'm not part of Angrboda-\n"
    .string "How do you even know what Angrboda is?\p"
    .string "$"

HallowSpark_RivalBackAtYou:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Right back at you, how do YOU\n"
    .string "know about Angrboda?\p"
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: That's classified information.\p"
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Classified information?\p"
    .string "What does that even mean, classified-\n"
    .string "Are you a government agent or what?\p"
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: Well, I suppose I am something\n"
    .string "like that.$"

HallowSpark_RivalHollaAtYou:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: {PLAYER}! You're also here!$"

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
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}...\n"
    .string "I recognize that name...\p"
    .string "Oh, right, {COLOR BLUE}Khione{COLOR DARK_GRAY} mentioned you.\p"
    .string "You were the one that encountered\n"
    .string "{COLOR BLUE}Angrboda{COLOR DARK_GRAY} back in{COLOR BLUE}Kasaan{COLOR DARK_GRAY}, right?$"

HallowSpark_RivalWhoIsLena:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: You know Khione like that?\p"
    .string "Just who are you?\p"
    .string "Wait...\p"
    .string "Could it be that you're also a gym\n"
    .string "leader or something?\p"
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: Who, me?\p"
    .string "Something like that, yes.$"

HallowSpark_OverstepBounds:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Oh shoot- My fault for over\n"
    .string "stepping my boundaries back there.\p"
    .string "I thought you were a part of {COLOR BLUE}Angrboda\n"
    .string "{COLOR DARK_GRAY}because of your-\p"
    .string "$"

HallowSpark_AngrbodaUniform:
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: Because of my uniform?\p"
    .string "It's okay, you guys would be too young\n"
    .string "to know where it comes from anyways.\p"
    .string "My name is Lena- I'm grateful for your\n"
    .string "concern in this matter, but I can take\l"
    .string "things from here.$"

HallowSpark_LenaAboutToLeave:
    face_right
    walk_right
    step_end

HallowSpark_LenaForgotMons:
    .string "{COLOR BLUE}Lena{COLOR DARK_GRAY}: Oh dear god... There's no way...\n"
    .string "How did I forget to bring my Pokémon on\l"
    .string "this mission-\l"
    .string "I won't be able to battle like this-$"

HallowSpark_CanBeOfUseAfterAll:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Ms. Lena!\p"
    .string "We can still help!\p"
    .string "I promise me and {PLAYER}\n"
    .string "won't drag you down- we're definitely\l"
    .string "way stronger than you think!\p"
    .string "{COLOR BLUE}Lena{COLOR DARK_GRAY}: I'm so stupid...\n"
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
    .string "{COLOR BLUE}Lena{COLOR DARK_GRAY}: Since I can't fight in my current\n"
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
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Well, I guess that means we better\n"
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

HallowSpark_WalkUp:
    walk_up
    step_end

HallowSpark_WalkRight:
    walk_right
    step_end

HallowSpark_WalkLeft:
    walk_left
    step_end

HallowSparkCity_WalkDownFaceLeft:
    walk_down
    face_left
    step_end

HallowSparkCity_LenaThereYallAre:
    .string "Lena: Oh thank goodness, there you are!$"

HallowSparkCity_LenaWorried:
    .string "I was so worried if you guys were okay.\n"
    .string "I saw Angrboda coming out, so I was\l"
    .string "worried that something bad might have\l"
    .string "happened to you.\p"
    .string "I'm so glad to see you guys are fine.\p"
    .string "What happened in-\p"
    .string "???: Lena!$"

HallowSparkCity_ShinPullUp:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    face_up
    step_end

HallowSparkCity_ShinWantUpdate:
    .string "???: Lena, what's the update? Are you\n"
    .string "alright?\p"
    .string "Lena: I'm fine, geez..\n"
    .string "As for Angrboda, they already left...\p"
    .string "And for what actually happened, I really\l"
    .string "have no idea.\p"
    .string "???: You have no idea?\p"
    .string "$"

HallowSparkCity_ShinWhoAreKids:
    .string "Wait, who are they?\p"
    .string "Liam: No way...\p"
    .string "{PLAYER}! That's the Pokémon Champion-\n"
    .string "That's Nou!\p"
    .string "Lena: They were helping me because...\n"
    .string "because- because I left my Pokémon\l"
    .string "back home...\p"
    .string "Nou: Oh, is that the kid Khione was\n"
    .string "talking about?\p"
    .string "Thank you again.\p"
    .string "And you, what's your name?\p"
    .string "Liam: My name is Liam.. My brother-\n"
    .string "my brother served alongside you in-\p"
    .string "Nou: -the war? Was your brother Daiya?\n"
    .string "You look just like him.\p"
    .string "Thank you, too, for helping us.\p"
    .string "The government and the\n"
    .string "Pokémon Association are working on this\l"
    .string "case with Angrboda.\p"
    .string "It would be very helpful if you could\n"
    .string "brief me on what happened in there.$"

HallowSparkCity_ShinAnalyse:
    .string "I see... So they went to Emberfall...\n"
    .string "This is bad. We should follow them.\p"
    .string "$"

HallowSparkCity_ShinLeave:
    .string "I'll go on first.\p"
    .string "Lena, go get your Pokémon, and meet me\n"
    .string "at Mt. Emberfall.$"

HallowSparkCity_ShinWalkAway:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

HallowSpark_LenaAskForHelp:
    .string "Lena: Nou can be a bit cold sometimes,\n"
    .string "but he's really a good person.\p"
    .string "Anyways, we're a bit short staffed\n"
    .string "currently, so it would be extremely\l"
    .string "helpful if you two would continue to\l"
    .string "aid us in stopping Angrboda.\p"
    .string "Liam: Sure.\p"
    .string "Lena: Thank you so much!\p"
    .string "Here's what we're going to do:\n"
    .string "Surf back from here across Neptune's\l"
    .string "Drift.\p"
    .string "About halfway across the drift, I'll be\n"
    .string "waiting on an island.\p"
    .string "We'll continue from there.\n"
    .string "I must hurry, now. The matter at hand is\l"
    .string "quite pressing.$"

HallowSpark_LiamOutro:
    .string "I'll meet up with you at Neptune's Drift.$"

HetonianPowerPlant2F_LiamLeave:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

Text_HallowSpark_CantLeaveYet:
    .string "Gotta stop them!$"



