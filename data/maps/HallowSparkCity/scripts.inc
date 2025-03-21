HallowSparkCity_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, HallowSparkCity_OnTransition
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, HallowSparkCity_OnWarp
    map_script MAP_SCRIPT_ON_FRAME_TABLE, HallowSparkCity_OnFrame
	.byte 0

HallowSparkCity_OnTransition:
    setflag FLAG_TEMP_1
    setvar VAR_UNUSED_0x4091, 0
    goto_if_set FLAG_VISITED_FORTREE_CITY, HallowSparkCity_SetUpObjxy
    setvar VAR_FORTREE_CITY_STATE, 0
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

HallowsparkCity_ShowPlayer:
    showobjectat OBJ_EVENT_ID_PLAYER, 0
    return

HallowSparkCity_OnFrame:
    map_script_2 VAR_FORTREE_CITY_STATE, 0, HallowSparkCity_LenaCutscene1
    map_script_2 VAR_FORTREE_CITY_STATE, 2, HallowSparkCity_AngrbodaCutscene
    map_script_2 VAR_FORTREE_CITY_STATE, 10, HallowSparkCity_AngrbodaCutscene2
    .2byte 0

HallowSparkCity_SetUpObjxy:
    switch VAR_FORTREE_CITY_STATE
    case 0: HallowSparkCity_SetUpLenaPos
    case 3: HallowSparkCity_SetUpRivalLenaPos
    end

HallowSparkCity_SetUpLenaPos:
    setobjectxyperm, 3, 5
    return

HallowSparkCity_SetUpRivalLenaPos:
    clearflag FLAG_TEMP_1
    addobject 2
    setobjectgfx 2, OBJ_EVENT_GFX_BRENDAN_NORMAL
    addobject 1
    setobjectxyperm 1, 32, 11
    setobjectxyperm 2, 32, 12
    return

HallowSparkCity_LenaCutscene1:
    lockall
    delay 16
    applymovement 1, Common_Movement_FaceDown
    waitmovement 1
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    addobject 2
    setobjectxyperm VAR_TEMP_0, VAR_TEMP_1
    clearflag FLAG_TEMP_1
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    compare VAR_TEMP_0, 2
    goto_if_eq HallowSparkCity_LenaCutscene1OtherMvmt
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraUp1
    waitmovement 0
    call HallowSparkCity_LenaCutscene1pt2
    waitmovement 1
    applymovemnt 1, HallowSpark_LenaLeaveForNow2
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraDown1
    waitmovement 0
    waitmovement 1
    HallowSparkCity_LenaCutscene1pt3

HallowSparkCity_LenaCutscene1OtherMvmt:
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraUp2
    waitmovement 0
    call HallowSparkCity_LenaCutscene1pt2
    waitmovement 1
    applymovemnt 1, HallowSpark_LenaLeaveForNow2
    applymovement OBJ_EVENT_ID_PLAYER, HallowsparkCity_PanCameraDown2
    waitmovement 0
    waitmovement 1
    goto HallowSparkCity_LenaCutscene1pt3

HallowSparkCity_LenaCutscene1pt2
    msgbox HallowSpark_LenaSawAngrboda, MSGBOX_DEFAULT
    applymovement 1, HallowSpark_LookAround
    waitmovement 1
    msgbox HallowSpark_LenaBetterWatchOut, MSGBOX_DEFAULT
    applymovement 1, HallowSpark_LenaStepUp
    applymovement OBJ_EVENT_ID_PLAYER, HallowSpark_LenaStepUp
    waitmovement 1
    waitmovement OBJ_EVENT_ID_PLAYER
    msgbox HallowSpark_LenaLieLow, MSGBOX_DEFAULT
    applymovemnt 1, HallowSpark_LenaLeaveForNow
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
    setvar VAR_FORTREE_CITY_STATE, 10
    getplayerxy VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
    warpsilent MAP_HALLOW_SPARK_CITY, 36, 10
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
    msgbox HallowSpark_TextAngrbodaLetsGo2, MSGBOX_DEFAULT
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
    addobject 1
    setobjectxyperm 1, 32, 17
    clearflag FLAG_TEMP_1
    addobject 2
    setobjectgfx 2, OBJ_EVENT_GFX_BRENDAN_NORMAL
    setobjectxy 2, 27, 11
    fadescreen FADE_FROM_BLACK
    delay 16
    applymovement 1, HallowSparkCity_LenaPullUp
    applymovement 2, HallowSparkCity_RivalPullUp
    waitmovement 2
    applymovement 1, Common_Movement_FaceDown
    waitmovement 1
    applymovement 2, Common_Movement_ExclamationMark
    applymovement 1, Common_Movement_ExclamationMark
    waitbuttonpress
    setvar VAR_FORTREE_CITY_STATE, 3
    warpsilent MAP_HALLOW_SPARK_CITY, VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
    end

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
    face_end
    step_end

HallowsparkCity_PanCameraDown2:
    walk_up
    walk_left
    walk_up
    walk_up
    face_up
    step_end

HallowSpark_LenaSawAngrboda:
    .string "???: So this is where he said Angrboda\n"
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
    step_up
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
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    step_end

HallowSparkCity_AngrbodaWalkUpMiniLeader:
    walk_faster_up
    face_down
    step_end

HallowSparkCity_AngrbodaGetInFormation:
    walk_faster_right
    walk_faster_right
    walk_faster_right
    face_up
    step_end

HallowSpark_TextAngrbodaLetsGo:
    .string "{COLOR BLUE}Grunt{COLOR DARK_GRAT}: Boss and them should already be\n"
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
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    walk_faster_right
    step_end

HallowSparkCity_RivalPullUp:
    walk_faster_up
    walk_faster_up
    walk_faster_up
    walk_faster_up
    walk_faster_up
    step_end
