RuinveilCity_MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, RuinveilCity_OnLoad
    map_script MAP_SCRIPT_ON_TRANSITION, RuinveilCity_OnTransition
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RuinveilCity_OnWarp
    map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinveilCity_OnFrame
    .byte 0

RuinveilCity_OnWarp:
    map_script_2 VAR_LILYCOVE_CITY_STATE, 8, RuinveilCity_HidePlayer
    .2byte 0

RuinveilCity_HidePlayer:
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    end

RuinveilCity_OldMan::
    msgbox Text_RuinveilCity_OldMan, MSGBOX_NPC
    release
    end

Text_RuinveilCity_OldMan:
    .string "I keep finding things on the ground...$"

RuinveilCity_OnLoad:
    compare VAR_LILYCOVE_CITY_STATE, 0
    goto_if_eq RuinveilCity_SetWallUnbroken
    end

RuinveilCity_HideGruntsKanae:
    setobjectxyperm 9, 0, 0
    setobjectxyperm 10, 0, 0
    setobjectxyperm 8, 0, 0
    end

RuinveilCity_SetUpMinersGrunts:
    setobjectxyperm 1, 40, 48
    setobjectxyperm 2, 43, 48
    setobjectxyperm 8, 12, 43
    end

RuinveilCity_SetUpMinersGruntsKanae:
    setobjectxyperm 1, 40, 48
    setobjectxyperm 2, 43, 48
    setobjectxyperm 8, 40, 35
    setobjectxyperm 9, 41, 34
    setobjectmovementtype 8, MOVEMENT_TYPE_FACE_UP
    setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
    setobjectmovementtype 10, MOVEMENT_TYPE_FACE_DOWN
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
    compare VAR_LILYCOVE_CITY_STATE, 3
    goto_if_eq RuinveilCity_SetUpMinersGrunts
    compare VAR_LILYCOVE_CITY_STATE, 4
    goto_if_eq RuinveilCity_SetUpMinersGruntsKanae
    compare VAR_LILYCOVE_CITY_STATE, 5
    goto_if_eq RuinveilCity_HideGruntsKanae
    compare VAR_LILYCOVE_CITY_STATE, 7
    goto_if_eq RuinveilCity_SetUpPostEv
    compare VAR_LILYCOVE_CITY_STATE, 8
    goto_if_eq RuinveilCity_SetUpTunnelDig
    compare VAR_LILYCOVE_CITY_STATE, 9
    goto_if_eq RuinveilCity_ShowPlayer
    end

RuinveilCity_ShowPlayer:
    showobjectat OBJ_EVENT_ID_PLAYER, 0
    setobjectxyperm 1, 0, 0
    setobjectxyperm 2, 0, 0
    setobjectxyperm 3, 0, 0
    setobjectxyperm 4, 0, 0
    end

RuinveilCity_OnFrame:
    map_script_2 VAR_LILYCOVE_CITY_STATE, 1, RuinveilCity_ExcavationStart
    map_script_2 VAR_LILYCOVE_CITY_STATE, 3, RuinveilCity_StartMainEv
    map_script_2 VAR_LILYCOVE_CITY_STATE, 7, RuinveilCity_PostEv
    map_script_2 VAR_LILYCOVE_CITY_STATE, 8, RuinveilCity_TunnelDig
    .2byte 0

RuinveilCity_SetUpTunnelDig:
    setobjectxyperm 13, 19, 7
    setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    end

RuinveilCity_TunnelDig:
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    msgbox RuinveilCity_WishHadStrength, MSGBOX_AUTOCLOSE
    setvar VAR_LILYCOVE_CITY_STATE, 9
    warpsilent MAP_RUINVEIL_CITY, 41, 49
    end


RuinveilCity_WishHadStrength:
    .string "I wish I had Strength to move those\n"
    .string "boulders in the tunnel...\p"
    .string "Then I'd be able to get to Suna Town\n"
    .string "without crossing the desert...$"

RuinveilCity_SetUpPostEv:
    clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
    setobjectxyperm 1, 0, 0
    setobjectxyperm 2, 0, 0
    setobjectxyperm 3, 0, 0
    setobjectxyperm 4, 0, 0
    setobjectxyperm 11, 42, 49
    setobjectxyperm 5, 42, 50
    setobjectmovementtype 5, MOVEMENT_TYPE_FACE_UP
    setobjectxyperm 7, 41, 50
    setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
    end

RuinveilCity_PostEv:
    msgbox Text_RuinveilCity_PostEv, MSGBOX_AUTOCLOSE
    fadescreen FADE_TO_BLACK
    setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
    removeobject 5
    removeobject 7
    setobjectxyperm 11, 0, 0
    setobjectxy 11, 0, 0
    addobject 12
    setobjectxy 12, 51, 49
    fadescreen FADE_FROM_BLACK
    applymovement 12, RuinveilCity_OldManWalkUp
    waitmovement 12
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
    msgbox Text_RuinveilCity_GiveStrength, MSGBOX_DEFAULT
    waitmessage
    giveitem ITEM_HM04, 1
    msgbox Text_RuinveilCity_OldManLeave, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 12, RuinveilCity_OldManWalkBack
    waitmovement 12
    setobjectxyperm 12, 57, 40
    setvar VAR_LILYCOVE_CITY_STATE, 8
    setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
    warpsilent MAP_RUINVEIL_CITY, 19, 7
    release
    end

Text_RuinveilCity_OldManLeave:
    .string "These scatterbrained youngins...$"

Text_RuinveilCity_GiveStrength:
    .string "You there!\p"
    .string "You're a trainer right?\p"
    .string "You must've dropped this.$"

RuinveilCity_OldManWalkBack:
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

RuinveilCity_OldManWalkUp:
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

Text_RuinveilCity_PostEv:
    .string "Lena: I just got a message from Shin.\p"
    .string "Based on the Association's intel,\n"
    .string "Angrboda's hideout is located in\l"
    .string "Silverstone City.\p"
    .string "Kanae: I'll gather up the rest of the\n"
    .string "Elite Four and the gym leaders.\p"
    .string "Lena: I'll send out a signal when we\n"
    .string "storm their HQ.\p"
    .string "Liam: Wait where's Silverstone?\p"
    .string "Lena: You'll need to go back to\n"
    .string "Neptune's Drift, and Dive South.\p"
    .string "There's another dive patch there-\n"
    .string "It's not the same one as the one we\l"
    .string "took last time when we went to\l"
    .string "Mt. Emberfall.\p"
    .string "Liam: Alright. I'll make my way there.$"

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

RuinveilCity_GruntBattle::
    lockall
    faceplayer
    msgbox RuinveilCity_GruntPreBattle, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_GRUNT_WEATHER_INST_1, RuinveilCity_GruntDefeat
    delay 32
    applymovement 10, Common_Movement_ExclamationMark
    msgbox RuinveilCity_KanaeWin, MSGBOX_DEFAULT
    waitmovement 10
    waitmessage
    closemessage
    fadescreen FADE_TO_BLACK
    hideobjectat 9, MAP_RUINVEIL_CITY
    hideobjectat 10, MAP_RUINVEIL_CITY
    fadescreen FADE_FROM_BLACK
    setobjectxyperm 9, 0, 0
    setobjectxyperm 10, 0, 0
    setobjectxy 9, 0, 0
    setobjectxy 10, 0, 0
    call RuinveilCity_ReAdjustPlayerX
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    applymovement 8, Common_Movement_FaceRight
    waitmovement 0
    msgbox RuinveilCity_KanaePlayerEnterRuins, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 8, RuinveilCity_KanaeEnterRuins
    waitmovement 0
    playse SE_EXIT
    setobjectxyperm 8, 0, 0
    setobjectxy 8, 0, 0
    setrespawn HEAL_LOCATION_RUINVEIL_CITY
    setvar VAR_LILYCOVE_CITY_STATE, 5
    delay 64
    releaseall
    end


RuinveilCity_KanaeEnterRuins:
    walk_up
    walk_right
    walk_up
    step_end

RuinveilCity_KanaePlayerEnterRuins:
    .string "Kanae: The miners at the entrance said\n"
    .string "that there was a large group of them.\p"
    .string "We need to go in there and help Lena.\p"
    .string "I'll go in first.$"

RuinveilCity_ReAdjustPlayerX:
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    compare VAR_TEMP_0, 42
    call_if_eq RuinveilCity_MoveToKanae
    return

RuinveilCity_MoveToKanae:
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_DownLeft
    waitmovement 0
    return

RuinveilCity_DownLeft: 
    walk_down
    walk_left
    step_end

RuinveilCity_GruntPreBattle:
    .string "You're not getting past me!$"

RuinveilCity_GruntDefeat:
    .string "No!$"

RuinveilCity_KanaeWin:
    .string "Kanae: Your resistance was futile.\p"
    .string "Grunt: Ow... Let's go...$"

RuinveilCity_StartMainEv:
    lockall
    delay 64
    applymovement 8, RuinveilCity_KanaePullUp
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_PlayerPullUp
    waitmovement 8
    waitmovement OBJ_EVENT_ID_PLAYER
    applymovement 8, RuinveilCity_NouGoToRuins
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_PlayerGoToRuins
    waitmovement 8
    waitmovement OBJ_EVENT_ID_PLAYER
    applymovement 1, Common_Movement_FaceDown
    applymovement 2, Common_Movement_FaceDown
    waitmovement 1
    waitmovement 2
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 2, Common_Movement_ExclamationMark
    msgbox RuinveilCity_BadNews, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 8, RuinveilCity_KanaeGoToRuinEntrance
    applymovement OBJ_EVENT_ID_PLAYER, RuinveilCity_PlayerGoToRuinEntrance
    waitmovement 8
    waitmovement OBJ_EVENT_ID_PLAYER
    applymovement 10, Common_Movement_FaceDown
    applymovement 9, Common_Movement_FaceDown
    waitmovement 0
    applymovement 10, Common_Movement_ExclamationMark
    applymovement 9, Common_Movement_ExclamationMark
    msgbox RuinveilCity_IntrudersSpotted, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 9, RuinveilCity_SealOffEntrance
    waitmovement 9
    delay 64
    applymovement 8, Common_Movement_FaceRight
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    msgbox RuinveilCity_BeatTheseGrunts, MSGBOX_DEFAULT
    waitmessage
    closemessage
    call Common_EventScript_OutOfCenterPartyHeal
    delay 32
    msgbox RuinveilCity_HealYourMons, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 8, RuinveilCity_KanaeToGrunts
    waitmovement 0
    setrespawn HEAL_LOCATION_RUINVEIL_CITY_KANAE
    setvar VAR_LILYCOVE_CITY_STATE, 4
    releaseall
    end

RuinveilCity_KanaeHeal::
    lock
    faceplayer
    msgbox RuinveilCity_KanaeHealMons, MSGBOX_AUTOCLOSE
    call Common_EventScript_OutOfCenterPartyHeal
    delay 32
    applymovement 8, Common_Movement_FaceUp
    waitmovement 8
    release
    end

RuinveilCity_KanaeHealMons:
    .string "Here, let me heal your Pokémon.$"

RuinveilCity_KanaeToGrunts:
    walk_up
    step_end

RuinveilCity_HealYourMons:
    .string "Kanae: If you need to heal at any time,\p"
    .string "I have a lot of Full Restores in my bag.$"

RuinveilCity_BeatTheseGrunts:
    .string "Kanae: We need to beat these grunts.\p"
    .string "I'll take the one on the left, you\n"
    .string "take the one on the right.\p"
    .string "First, let me heal your party.$"

RuinveilCity_SealOffEntrance:
    walk_left
    face_down
    step_end

RuinveilCity_IntrudersSpotted:
    .string "Intruders! Seal off the entrance!$"

RuinveilCity_KanaeGoToRuinEntrance:
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
    walk_left
    face_up
    step_end

RuinveilCity_PlayerGoToRuinEntrance:
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

RuinveilCity_BadNews:
    .string "Miner 1: Mrs. Kanae!\p"
    .string "Kanae: How's the excavation going?\p"
    .string "Miner 2: We were just standing guard\n"
    .string "when all of a sudden, a huge group of\l"
    .string "people wearing dark blue uniforms\l"
    .string "forced their way past us!\p"
    .string "Miner 1: We tried to stop them, but they\n"
    .string "were too strong.\p"
    .string "We can't even tell Lena and the others\n"
    .string "inside the ruins, because they're\l"
    .string "blocking off the entrance!\p"
    .string "Kanae: No... This is exactly what Nou\n"
    .string "was scared of.\p"
    .string "{PLAYER}, we need to stop them.\p"
    .string "You two, contact the Association and try\n"
    .string "to get to Nou!$"


RuinveilCity_KanaePullUp:
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_right
    walk_right
    step_end

RuinveilCity_PlayerPullUp:
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_right
    step_end


RuinveilCity_MinersGuardingEntrance::
    lock
    compare VAR_LILYCOVE_CITY_STATE, 2
    goto_if_eq RuinveilCity_MinersGuardingEntranceES
    compare VAR_LILYCOVE_CITY_STATE, 3
    goto_if_ge RuinveilCity_MinersBeaten
    msgbox Text_RuinveilCity_MinersGuardingEntrance, MSGBOX_DEFAULT
    release
    end

RuinveilCity_MinersGuardingEntranceES:
    msgbox Text_RuinveilCity_MinersGuardingEntranceES, MSGBOX_DEFAULT
    release
    end

RuinveilCity_MinersBeaten: 
    msgbox Text_RuinveilCity_MinersBeaten, MSGBOX_DEFAULT
    release
    end

Text_RuinveilCity_MinersBeaten:
    .string "Oof...$"

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
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
    waitmovement 0
    goto RuinveilCity_TriggerEnd
    
RuinveilCity_TriggerEnd:
    msgbox Text_RuinveilCity_GymLeaderHelpingRN, MSGBOX_DEFAULT
    waitmessage
    closemessage
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
    waitmessage
    waitmovement 1
    waitmovement 2
    closemessage
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






