RuinveilCity_MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, RuinveilCity_OnLoad
    map_script MAP_SCRIPT_ON_TRANSITION, RuinveilCity_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinveilCity_OnFrame
    .byte 0

RuinveilCity_OnLoad:
    compare VAR_LILYCOVE_CITY_STATE, 0
    goto_if_eq RuinveilCity_SetWallUnbroken
    end

RuinveilCity_SetWallUnbroken:
    setmetatile 40, 31, METATILE_Ruinveil_BrownCliff, TRUE
    setmetatile 41, 31, METATILE_Ruinveil_BrownCliff, TRUE
    setmetatile 42, 31, METATILE_Ruinveil_BrownCliff, TRUE
    setmetatile 40, 32, METATILE_ruinveil2_PurpleCliff, TRUE
    setmetatile 41, 32, METATILE_ruinveil2_PurpleCliff, TRUE
    setmetatile 42, 32, METATILE_ruinveil2_PurpleCliff, TRUE
    setmetatile 40, 33, METATILE_ruinveil2_PurpleBrownCliff, TRUE
    setmetatile 41, 33, METATILE_ruinveil2_PurpleBrownCliff, TRUE
    setmetatile 42, 33, METATILE_ruinveil2_PurpleBrownCliff, TRUE
    setmetatile 40, 34, METATILE_ruinveil2_PurpleStone, FALSE
    setmetatile 42, 34, METATILE_ruinveil2_PurpleStone, FALSE
    end
    

RuinveilCity_OnTransition:
    setflag FLAG_VISITED_LILYCOVE_CITY
    end

RuinveilCity_OnFrame:
    map_script_2 VAR_LILYCOVE_CITY_STATE, 1, RuinveilCity_ExcavationStart
    .2byte 0

RuinveilCity_ExcavationStart:
    lockall
    delay 64
	setvar VAR_0x8004, 4  @ vertical pan
	setvar VAR_0x8005, 4  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
    setvar VAR_LILYCOVE_CITY_STATE, 2
    releaseall
    end


RuinveilCity_MinersGuardingEntrance::
    lock
    compare VAR_LILYCOVE_CITY_STATE, 2
    goto_if_eq RuinveilCity_MinersGuardingEntranceES
    msgbox Text_RuinveilCity_MinersGuardingEntrance, MSGBOX_DEFAULT
    release
    end

RuinveilCity_MinersGuardingEntranceES:
    msgbox Text_RuinveilCity_MinersGuardingEntranceES, MSGBOX_DEFAULT
    release
    end


Text_RuinveilCity_MinersGuardingEntrance:
    .string "So this is where Mr. Nou said to \n"
    .string "excavate.\p"
    .string "Let's close off this area for now.$"

Text_RuinveilCity_MinersGuardingEntranceES:
    .string "Now that the excavation has started,\n"
    .string "make sure nobody comes in.$"

RuinveilCity_TriggerLeft::
    msgbox Text_RuinveilCity_GymNotOpen, MSGBOX_DEFAULT
    waitmessage
    closemessage
    addobject 6
    setobjectxyperm 6, 23, 50
    setobjectxy 6, 23, 50
    addobject 6
    applymovement 6, RuinveilCity_ShinPullUp
    waitmovement 6
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_PlayerMeetShin
    waitmovement 0
    goto RuinveilCity_TriggerEnd
    

RuinveilCity_TriggerRight::
    msgbox Text_RuinveilCity_GymNotOpen, MSGBOX_DEFAULT
    waitmessage
    closemessage
    addobject 6
    setobjectxyperm 6, 23, 50
    setobjectxy 6, 23, 50
    addobject 6
    applymovement 6, RuinveilCity_ShinPullUp
    waitmovement 6
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    goto RuinveilCity_TriggerEnd
    
RuinveilCity_TriggerEnd:
    msgbox Text_RuinveilCity_GymLeaderHelpingRN, MSGBOX_DEFAULT
    applymovement 6, RuinveilCity_NouGoToRuins
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_PlayerGoToRuins
    waitmovement 0
    addobject 3
    setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
    applymovement 1, Common_Movement_FaceDown
    applymovement 2, Common_Movement_FaceDown
    waitmovement 1
    waitmovement 2
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 2, Common_Movement_ExclamationMark
    msgbox Text_RuinveilCity_MinersMoveOutofWay, MSGBOX_DEFAULT
    waitmovement 1
    waitmovement 2
    applymovement 1, RuinveilCity_MinersMoveOutofWayLeft
    applymovement 2, RuinveilCity_MinersMoveOutofWayRight
    applymovement 6, RuinveilCity_ShinEnterRuins
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_ShinEnterRuins
    waitmovement OBJ_EVENT_ID_PLAYER
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_PlayerMoveUp
    waitmovement OBJ_EVENT_ID_PLAYER
    applymovement 5, Common_Movement_FaceDown
    applymovement 7, Common_Movement_FaceDown
    waitmovement 5
    waitmovement 7
    msgbox Text_RuinveilCity_ShinTellLena, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_PlayerMoveOutOfWay
    applymovement 7, RuinveilCity_KanaeSkedaddle
    msgbox RuinveilCity_NouLeave, MSGBOX_DEFAULT
    setvar VAR_LILYCOVE_CITY_STATE, 1
    warpsilent MAP_RUINVEIL_CITY, 41, 50
    setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
    end
    

Text_RuinveilCity_GymNotOpen:
    .string "The gym isn't open right now.$"

RuinveilCity_ShinPullUp:
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

RuinveilCity_PlayerMeetShin:
    walk_right
    step_end

Text_RuinveilCity_GymLeaderHelpingRN:
    .string "Nou: Remember the energy core Dr. Stone\n"
    .string "mentioned?\p"
    .string "We think we've located it in the ruins\n"
    .string "in the center of the city.\p"
    .string "The gym leader, Kanae, is currently\n"
    .string "helping us prepare for excavation.\p"
    .string "She's almost done, and she'll return in\n"
    .string "a bit.\p"
    .string "Here, let me take you to the ruins.$"

RuinveilCity_NouGoToRuins:
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
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_up
    step_end

RuinveilCity_PlayerGoToRuins:
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
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    face_up
    step_end

Text_RuinveilCity_MinersMoveOutofWay:
    .string "Miner 1: Mr. Nou!\n"
    .string "Preparations are complete!\p"
    .string "Miner 2: We're ready to start excavating\n"
    .string "the ruins on your command.\p"
    .string "Nou: Good work.\n"
    .string "I'll go check some things with Lena and\l"
    .string "Kanae, and we'll start the excavation.\p"
    .string "In the meantime, please wait here.$"

RuinveilCity_MinersMoveOutofWayLeft:
    walk_left
    face_right
    step_end

RuinveilCity_MinersMoveOutofWayRight:
    walk_right
    face_left
    step_end

RuinveilCity_ShinEnterRuins:
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

RuinveilCity_PlayerMoveUp:
    walk_left
    walk_up
    face_right
    step_end

Text_RuinveilCity_ShinTellLena:
    .string "Nou: Lena, Kanae, how are things on\n"
    .string "your end?\p"
    .string "Lena: Everything is ready to go.\p"
    .string "Nou: Good.\n"
    .string "Thank you for your help, Kanae.\n"
    .string "You can go back to your gym now.\p"
    .string "Kanae: Of course.\n"
    .string "I'll take my leave, then.\p"
    .string "I'll come back to check on you later.$"

RuinveilCity_PlayerMoveOutOfWay:
    walk_left
    walk_right
    face_up
    step_end

RuinveilCity_KanaeSkedaddle:
    walk_down
    walk_down
    walk_down
    walk_right
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    step_end

RuinveilCity_NouLeave:
    .string "Nou: Alright, I'll leave you in charge\n"
    .string "of things here, Lena.\p"
    .string "{PLAYER},\n"
    .string "Kanae just returned to her gym, so you\l"
    .string "should be able to challenge her now.\p"
    .string "Lena: I'll keep you updated, Nou.\n"
    .string "You can go back to the Association.$"






