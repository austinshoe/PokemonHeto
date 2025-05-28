HetonianPowerPlant1F_MapScripts::
    map_script MAP_SCRIPT_ON_RESUME, HetonianPowerPlant_OnResume
    map_script MAP_SCRIPT_ON_TRANSITION, HetonianPowerPlant_OnTransition
    map_script MAP_SCRIPT_ON_LOAD, HetonianPowerPlant_OnLoad
    map_script MAP_SCRIPT_ON_FRAME_TABLE, HetonianPowerPlant_OnFrame
    .byte 0

HetonianPowerPlant_OnResume:
    call_if_eq VAR_TEMP_1, 1, HetonianPowerPlant_EventScript_SetBarrierStateBlueButton
    call_if_eq VAR_TEMP_2, 1, HetonianPowerPlant_EventScript_SetBarrierStateGreenButton
    end

HetonianPowerPlant_OnTransition:
    compare VAR_NEW_MAUVILLE_STATE, 1
    goto_if_eq HetonianPowerPlant_SetUpRival
    compare VAR_NEW_MAUVILLE_STATE, 2
    goto_if_eq HetonianPowerPlant_SetUpRival2
    compare VAR_NEW_MAUVILLE_STATE, 3
    goto_if_eq HetonianPowerPLant_SetUpExceptGrunt
    setflag FLAG_TEMP_1
    setflag FLAG_TEMP_2
    end

HetonianPowerPlant_SetUpRival:
    clearflag FLAG_TEMP_1
    clearflag FLAG_TEMP_2
    addobject 1
    end

HetonianPowerPlant_SetUpRival2:
    setobjectxyperm 1, 30, 3
    clearflag FLAG_TEMP_1
    clearflag FLAG_TEMP_2
    addobject 1
    end

HetonianPowerPLant_SetUpExceptGrunt:
    setobjectxyperm 1, 30, 3
    clearflag FLAG_TEMP_1
    setflag FLAG_TEMP_2
    addobject 1
    end

HetonianPowerPlant_OnLoad:
    end

HetonianPowerPlant_OnFrame:
    map_script_2 VAR_NEW_MAUVILLE_STATE, 1, HetonianPowerPlant_Rival_Player_SplitUp
    .2byte 0

HetonianPowerPlant_Rival_Player_SplitUp:
    lockall
    applymovement OBJ_EVENT_ID_PLAYER, HetonianPowerPlant_MoveUp
    waitmovement 0
    msgbox HetonianPowerPlant_LetsSplitUp, MSGBOX_DEFAULT
    applymovement 1, HetonianPowerPlant_RivalLeave1
    waitmovement 1
    delay 16
    setvar VAR_TEMP_1, 1
    setvar VAR_TEMP_2, 0
    playse SE_PIN
    call HetonianPowerPlant_EventScript_SetBarrierStateBlueButton
    special DrawWholeMapView
    delay 16
    applymovement 1, HetonianPowerPlant_RivalLeave2
    waitmovement 0
    setflag FLAG_TEMP_1
    setvar VAR_NEW_MAUVILLE_STATE, 2
    releaseall
    end

HetonianPowerPlant_ShouldntGoThere::
    msgbox Text_HetonianPowerPlant_ShouldntGoThere, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, HetonianPowerPlant_Walk_Left
    waitmovement 0
    end

HetonianPowerPlant_AngrbodaGrunt1::
    trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, HetonianPowerPlant_Text_Grunt1, HetonianPowerPlant_Text_Grunt1Defeat
	msgbox HetonianPowerPlant_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

HetonianPowerPlant_AngrbodaGrunt2::
    trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, HetonianPowerPlant_Text_Grunt2, HetonianPowerPlant_Text_Grunt2Defeat
	msgbox HetonianPowerPlant_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

HetonianPowerPlant_AngrbodaGrunt3::
    trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, HetonianPowerPlant_Text_Grunt3, HetonianPowerPlant_Text_Grunt3Defeat
	msgbox HetonianPowerPlant_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

HetonianPowerPlant_AngrbodaGrunt4::
    trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, HetonianPowerPlant_Text_Grunt4, HetonianPowerPlant_Text_Grunt4Defeat
	msgbox HetonianPowerPlant_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

HetonianPowerPlant_AngrbodaGrunt5::
    msgbox HetonianPowerPlant_Text_Grunt5, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_6, HetonianPowerPlant_Text_Grunt5Defeat
	msgbox HetonianPowerPlant_Text_Grunt5PostBattle, MSGBOX_DEFAULT
    closemessage
    applymovement 6, HetonianPowerPlant_GruntSkedaddle
    waitmovement 6
    call HetonianPowerPlant_AdjustGruntY
    setvar VAR_NEW_MAUVILLE_STATE, 3
    waitmovement 0
    setflag FLAG_TEMP_2
    playse SE_EXIT
    removeobject 6
	end

HetonianPowerPlant_AdjustGruntY:
    getplayerxy VAR_TEMP_5, VAR_TEMP_6
    switch VAR_TEMP_6
    case 4, HetonianPowerPlant_AngrbodaGrunt4Up1
    case 5, HetonianPowerPlant_AngrbodaGrunt4Up2
    return

HetonianPowerPlant_AngrbodaGrunt4Up1:
    applymovement 6, HetonianPowerPlant_GruntSkedaddle1
    waitmovement 0
    return

HetonianPowerPlant_AngrbodaGrunt4Up2:
    applymovement 6, HetonianPowerPlant_GruntSkedaddle2
    waitmovement 0
    return

HetonianPowerPlant_EventScript_BlueButton::
    lockall
    setvar VAR_TEMP_1, 1
    setvar VAR_TEMP_2, 0
    playse SE_PIN
    call HetonianPowerPlant_EventScript_SetBarrierStateBlueButton
    special DrawWholeMapView
    releaseall
    end

HetonianPowerPlant_EventScript_GreenButton::
    lockall
    setvar VAR_TEMP_1, 0
    setvar VAR_TEMP_2, 1
    playse SE_PIN
    call HetonianPowerPlant_EventScript_SetBarrierStateGreenButton
    special DrawWholeMapView
    releaseall
    end

HetonianPowerPlant_EventScript_SetBarrierStateBlueButton::
    setmetatile 26, 15, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 26, 16, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 26, 17, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 26, 18, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 26, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 10, 9, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 10, 10, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 10, 11, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 10, 12, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 10, 13, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 26, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 26, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 26, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 26, 3, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 26, 4, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 26, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 9, 15, METATILE_BikeShop_Barrier_Green_Top, TRUE
    setmetatile 9, 16, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
    setmetatile 9, 17, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 18, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 19, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
    setmetatile 25, 9, METATILE_BikeShop_Barrier_Green_Top, TRUE
    setmetatile 25, 10, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
    setmetatile 25, 11, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 25, 12, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 25, 13, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
    setmetatile 9, 0, METATILE_BikeShop_Barrier_Green_Top, TRUE
    setmetatile 9, 1, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
    setmetatile 9, 2, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 3, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
    setmetatile 20, 18, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 32, 12, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 3, 12, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 14, 10, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 21, 5, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 31, 3, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 3, 17, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 15, 18, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 21, 10, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 32, 17, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 14, 5, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 4, 3, METATILE_BikeShop_Button_Green, FALSE
    return

HetonianPowerPlant_EventScript_SetBarrierStateGreenButton::
    setmetatile 9, 15, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 9, 16, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 9, 17, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 9, 18, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 9, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 25, 9, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 25, 10, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 25, 11, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 25, 12, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 25, 13, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 9, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 9, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 9, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 9, 3, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 9, 4, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 9, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 26, 15, METATILE_BikeShop_Barrier_Blue_Top, TRUE
    setmetatile 26, 16, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
    setmetatile 26, 17, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
    setmetatile 10, 9, METATILE_BikeShop_Barrier_Blue_Top, TRUE
    setmetatile 10, 10, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
    setmetatile 10, 11, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 10, 12, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 10, 13, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
    setmetatile 26, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
    setmetatile 26, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
    setmetatile 26, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 3, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 4, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 5, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
    setmetatile 20, 18, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 32, 12, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 3, 12, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 14, 10, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 21, 5, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 31, 3, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 3, 17, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 15, 18, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 21, 10, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 32, 17, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 14, 5, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 4, 3, METATILE_BikeShop_Button_Pressed, FALSE
    return

HetonianPowerPlant_MoveUp:
    walk_up
    walk_up
    walk_up
    step_end

HetonianPowerPlant_LetsSplitUp:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: It looks like the power plant\n"
    .string "branches off into two directions.\p"
    .string "I take the right side, you take left.$"

HetonianPowerPlant_RivalLeave1:
    walk_up
    walk_up
    walk_right
    walk_right
    step_end

HetonianPowerPlant_RivalLeave2:
    walk_right
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

HetonianPowerPlant_Walk_Left:
    walk_left
    step_end

Text_HetonianPowerPlant_ShouldntGoThere:
    .string "That's the right side...\p"
    .string "Shouldn't go there!$"

HetonianPowerPlant_Text_Grunt1:
    .string "Intruder spotted!$"

HetonianPowerPlant_Text_Grunt1Defeat:
    .string "Hu-Huh???$"

HetonianPowerPlant_Text_Grunt1PostBattle:
    .string "I swear to Bidoof you look so familiar.$"

HetonianPowerPlant_Text_Grunt2:
    .string "What's this-\p"
    .string "A colored rat scurrying around?$"

HetonianPowerPlant_Text_Grunt2Defeat:
    .string "Yowch! I'll get rabies!$"

HetonianPowerPlant_Text_Grunt2PostBattle:
    .string "Why is it you again?$"

HetonianPowerPlant_Text_Grunt3:
    .string "Get outta here!$"

HetonianPowerPlant_Text_Grunt3Defeat:
    .string "I'm warning ya...$"

HetonianPowerPlant_Text_Grunt3PostBattle:
    .string "Better get out while you still can.$"

HetonianPowerPlant_Text_Grunt4:
    .string "We have business here!$"

HetonianPowerPlant_Text_Grunt4Defeat:
    .string "Mind your own business, monkey!$"

HetonianPowerPlant_Text_Grunt4PostBattle:
    .string "Can't you see that we're doing important\n"
    .string "things here?$"

HetonianPowerPlant_Text_Grunt5:
    .string "An intruder! I'll stop you here!$"

HetonianPowerPlant_Text_Grunt5Defeat:
    .string "Oh, no...$"

HetonianPowerPlant_Text_Grunt5PostBattle:
    .string "I can't let this happen-\p"
    .string "I gotta warn him!$"

HetonianPowerPlant_GruntSkedaddle:
    walk_left
    walk_left
    walk_up
    step_end

HetonianPowerPlant_GruntSkedaddle1:
    walk_up
    step_end

HetonianPowerPlant_GruntSkedaddle2:
    walk_up
    walk_up
    step_end

