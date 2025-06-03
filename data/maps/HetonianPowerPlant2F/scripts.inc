HetonianPowerPlant2F_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, HetonianPowerPlant2F_OnTransition
    map_script MAP_SCRIPT_ON_LOAD, HetonianPowerPlant2F_OnLoad
	.byte 0

HetonianPowerPlant2F_OnTransition:
    compare VAR_NEW_MAUVILLE_STATE, 3
    goto_if_eq HetonianPowerPlant1F_ShowAngrboda
    setflag FLAG_TEMP_5
    setflag FLAG_TEMP_3
    setflag FLAG_TEMP_4
    setflag FLAG_TEMP_2
    setflag FLAG_TEMP_1
    end

HetonianPowerPlant1F_ShowAngrboda:
    clearflag FLAG_TEMP_1
    setflag FLAG_TEMP_2
    setflag FLAG_TEMP_3
    setflag FLAG_TEMP_4
    setflag FLAG_TEMP_5
    end

HetonianPowerPlant2F_OnLoad:
    call_if_eq VAR_NEW_MAUVILLE_STATE, 2, HetonianPowerPlant2F_EventScript_SetGeneratorOffMetatiles
    end

HetonianPowerPlant2F_AngrbodaTrigger1::
    lockall
    setobjectxyperm 4, 5, 14
    call HetonianPowerPlant2F_UpdatePlayerGFX
    clearflag FLAG_TEMP_2
    addobject 4
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    applymovement OBJ_EVENT_ID_PLAYER HetonianPowerPlant2F_AdjustPlayerX
    applymovement 5, HetonianPowerPlant2F_AngrboaWalkUp
    waitmovement OBJ_EVENT_ID_PLAYER
    waitmovement 5
    call HetonianPowerPlant2F_AngrbodaTriggerEnd
    goto HetonianPowerPlant2F_AngrbodaTriggerFinal
    end

HetonianPowerPlant2F_UpdatePlayerGFX:
    checkplayergender
    compare VAR_RESULT, FEMALE
    call_if_eq HetonianPowerPlant2F_PlayerGFXGirl
    return
    
HetonianPowerPlant2F_PlayerGFXGirl:
    setobjectgfx 2, OBJ_EVENT_GFX_MAY_NORMAL
    return

HetonianPowerPlant2F_AngrbodaTrigger2::
    lockall
    setobjectxyperm 4, 5, 15
    call HetonianPowerPlant2F_UpdatePlayerGFX
    clearflag FLAG_TEMP_2
    addobject 4
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    applymovement OBJ_EVENT_ID_PLAYER HetonianPowerPlant2F_AdjustPlayerX
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER HetonianPowerPlant2F_AdjustPlayerY2
    applymovement 5, HetonianPowerPlant2F_AngrboaWalkUp
    waitmovement OBJ_EVENT_ID_PLAYER
    waitmovement 5
    call HetonianPowerPlant2F_AngrbodaTriggerEnd
    applymovement 4, HetonianPowerPlant2F_AdjustPlayerY2
    goto HetonianPowerPlant2F_AngrbodaTriggerFinal
    end

HetonianPowerPlant2F_AngrbodaTrigger3::
    lockall
    setobjectxyperm 4, 5, 16
    call HetonianPowerPlant2F_UpdatePlayerGFX
    clearflag FLAG_TEMP_2
    addobject 4
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    applymovement OBJ_EVENT_ID_PLAYER HetonianPowerPlant2F_AdjustPlayerX
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER HetonianPowerPlant2F_AdjustPlayerY3
    applymovement 5, HetonianPowerPlant2F_AngrboaWalkUp
    waitmovement OBJ_EVENT_ID_PLAYER
    waitmovement 5
    call HetonianPowerPlant2F_AngrbodaTriggerEnd
    applymovement 4, HetonianPowerPlant2F_AdjustPlayerY3
    goto HetonianPowerPlant2F_AngrbodaTriggerFinal
    end

HetonianPowerPlant2F_AngrbodaTrigger4::
    lockall
    setobjectxyperm 4, 5, 17
    call HetonianPowerPlant2F_UpdatePlayerGFX
    clearflag FLAG_TEMP_2
    addobject 4
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    applymovement OBJ_EVENT_ID_PLAYER HetonianPowerPlant2F_AdjustPlayerX
    waitmovement 0
    applymovement OBJ_EVENT_ID_PLAYER HetonianPowerPlant2F_AdjustPlayerY4
    applymovement 5, HetonianPowerPlant2F_AngrboaWalkUp
    waitmovement OBJ_EVENT_ID_PLAYER
    waitmovement 5
    call HetonianPowerPlant2F_AngrbodaTriggerEnd
    applymovement 4,HetonianPowerPlant2F_AdjustPlayerY4
    waitmovement 4
    goto HetonianPowerPlant2F_AngrbodaTriggerFinal
    end
    

HetonianPowerPlant2F_AngrbodaTriggerEnd:
    applymovement OBJ_EVENT_ID_PLAYER, HetonianPowerPlant2F_PlayerWalkUp
    applymovement 5, HetonianPowerPlant2F_PlayerWalkUp
    waitmovement 0
    applymovement 2, Common_Movement_FaceDown
    applymovement 3, Common_Movement_FaceDown
    waitmovement 0
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 2, Common_Movement_ExclamationMark
    applymovement 3, Common_Movement_ExclamationMark
    delay 16
    message HetonianPowerPlant2F_WhatAreYouDoingHere
    waitmessage
    waitmovement 0
    delay 16
    applymovement 5, Common_Movement_ExclamationMark
    waitbuttonpress
    message HetonianPowerPlant2F_GruntReport
    waitmessage
    waitmovement 0
    applymovement 2, Common_Movement_FaceUp
    waitmovement 2
    applymovement 2, Common_Movement_ExclamationMark
    message HetonianPowerPlant2F_ScientistWorried1
    waitmessage
    waitmovement 0
    waitbuttonpress
    closemessage
    applymovement 3, Common_Movement_FaceUp
    waitmovement 3
    applymovement 3, Common_Movement_ExclamationMark
    message HetonianPowerPlant2F_ScientistWorried2
    waitmessage
    waitmovement 0
    waitbuttonpress
    message HetonianPowerPlant2F_AlexandrCalmDown
    waitmessage
    waitbuttonpress
    return

HetonianPowerPlant2F_AngrbodaTriggerFinal:
    setobjectxyperm 4, 5, 14 
    addobject 4
    applymovement 4, HetonianPowerPlant2F_AdjustPlayerX
    waitmovement 4
    applymovement 4, HetonianPowerPlant2F_PlayerPullUp
    waitmovement 4
    applymovement OBJ_EVENT_ID_PLAYER, HetonianPowerPlant2F_ReFocusCam
    waitmovement OBJ_EVENT_ID_PLAYER
    showobjectat OBJ_EVENT_ID_PLAYER, 0
    setflag FLAG_TEMP_2
    removeobject 4
    applymovement 5, Common_Movement_FaceDown
    waitmovement 5
    applymovement 5, Common_Movement_ExclamationMark
    waitmovement 5
    message HetonianPowerPlant2F_GruntSeePlayer
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 2, Common_Movement_FaceDown
    applymovement 3, Common_Movement_FaceDown
    waitmovement 2
    waitmovement 3
    applymovement 1, Common_Movement_ExclamationMark
    applymovement 2, Common_Movement_ExclamationMark
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 2
    waitmovement 3
    message HetonianPowerPlant2F_AlexandrSeePlayer
    waitmessage
    waitmovement 1
    waitbuttonpress
    closemessage
    clearflag FLAG_TEMP_3
    clearflag FLAG_TEMP_4
    addobject 7
    addobject 6
    addobject 8
    addobject 9
    applymovement 7, HetonianPowerPlant2F_AngrbodaPullUp1
    applymovement 6, HetonianPowerPlant2F_AngrbodaPullUp2
    applymovement 8, HetonianPowerPlant2F_AngrbodaPullUp3
    waitmovement 7
    applymovement OBJ_EVENT_ID_PLAYER, HetonianPowerPlant2F_PlayerOutOfWay
    applymovement 7, HetonianPowerPlant2F_AngrbodaContinuePullUp
    waitmovement 7
    applymovement 5, HetonianPowerPlant2F_FirstGruntOutOfWay
    applymovement 7, HetonianPowerPlant2F_AngrbodaContinuePullUpF
    waitmovement 7
    waitmovement 6
    applymovement 6, HetonianPowerPlant2F_OtherGruntsToSide
    waitmovement 8 
    applymovement 8, HetonianPowerPlant2F_OtherGruntsToSide
    waitmovement 6
    waitmovement 8
    applymovement 1, Common_Movement_ExclamationMark
    message HetonianPowerPlant2F_WhyAreAllGruntsHere
    waitmessage
    waitmovement 1
    waitbuttonpress
    message HetonianPowerPlant2F_BeatenBySomeCaerulea
    waitmessage
    waitbuttonpress
    closemessage
    clearflag FLAG_TEMP_4
    addobject 9
    applymovement 9, HetonianPowerPlant2F_RivalPullUp1
    waitmovement 9
    message HetonianPowerPlant2F_LiamWhereAreYouGoing
    applymovement 9, HetonianPowerPlant2F_RivalPullUp2
    waitmovement 9
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 9, Common_Movement_FaceRight
    waitmovement 0
    applymovement 9, Common_Movement_ExclamationMark
    message HetonianPowerPlant2F_PlayerHereToo
    waitmessage
    waitmovement 9
    waitbuttonpress
    message HetonianPowerPlant2F_AlexandrYouThere
    waitmessage
    waitbuttonpress
    applymovement 9, Common_Movement_FaceUp
    applymovement 2, Common_Movement_FaceUp
    applymovement 3, Common_Movement_FaceUp
    waitmovement 2
    waitmovement 3
    applymovement 2, Common_Movement_ExclamationMark
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 2
    waitmovement 3
    message HetonianPowerPlant2F_ScientistsProtest
    waitmessage
    waitmovement 2
    waitmovement 3
    waitbuttonpress
    message HetonianPowerPlant2F_AlexandrJustGo
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 2, HetonianPowerPlant2F_Scientist2PullUp
    applymovement 3, HetonianPowerPlant2F_Scientist1PullUp
    applymovement 7, HetonianPowerPlant2F_ReadjustGruntPos
    waitmovement 2
    waitmovement 3
    waitmovement 7
    message HetonianPowerPlant2F_LiamHoldThemOff
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 9, HetonianPowerPlant2F_LiamBackUp
    waitmovement 0
    clearflag FLAG_TEMP_5
    addobject 10
    delay 16
    setobjectgfx 10, OBJ_EVENT_GFX_LOTAD_DOLL
    applymovement 10, HetonianPowerPlant2F_WeavileEnter
    delay 16
    applymovement OBJ_EVENT_ID_PLAYER, HetonianPowerPlant2F_PlayerApproachAlexandr
    waitmovement 0
    msgbox HetonianPowerPlant2F_PreAlexandrBattle, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_MATT, HetonianPowerPlant2F_PostAlexandrBattle
    message HetonianPowerPlant2F_AlexandrUnderestimated
    waitmessage
    applymovement 2, Common_Movement_FaceUp
    waitmovement 2
    applymovement 2, Common_Movement_ExclamationMark
    message HetonianPowerPlant2F_GotMessageFromHQ
    waitmessage
    waitbuttonpress
    waitmovement 2
    applymovement 2, Common_Movement_FaceDown
    waitmovement 2
    message HetonianPowerPlant2F_ReceiveRestOfMsg
    waitmessage
    applymovement 2, Common_Movement_FaceUp
    waitmovement 2
    applymovement 1, Common_Movement_ExclamationMark
    waitbuttonpress
    message HetonianPowerPlant2F_AlexandrWhatWasMsg
    waitmessage
    waitbuttonpress
    closemessage
    waitmovement 1
    applymovement 2, Common_Movement_FaceUp
    applymovement 3, Common_Movement_FaceUp
    applymovement 5, Common_Movement_FaceUp
    applymovement 6, Common_Movement_FaceUp
    applymovement 7, Common_Movement_FaceUp
    applymovement 8, Common_Movement_FaceUp
    waitmovement 8
    applymovement 2, Common_Movement_ExclamationMark
    applymovement 3, Common_Movement_ExclamationMark
    applymovement 5, Common_Movement_ExclamationMark
    applymovement 6, Common_Movement_ExclamationMark
    applymovement 7, Common_Movement_ExclamationMark
    applymovement 8, Common_Movement_ExclamationMark
    message HetonianPowerPlant2F_MoveOut
    waitmessage
    waitbuttonpress
    closemessage
    fadescreen FADE_TO_BLACK
    clearflag FLAG_TEMP_1
    clearflag FLAG_TEMP_2
    clearflag FLAG_TEMP_3
    clearflag FLAG_TEMP_5
    removeobject 1
    removeobject 2
    removeobject 3
    removeobject 5
    removeobject 6
    removeobject 7
    removeobject 8
    removeobject 10
    call HetonianPowerPlant2F_EventScript_SetGeneratorBackOnMetatiles
    delay 32
    fadescreen FADE_FROM_BLACK
    applymovement 9, HetonianPowerPlant2F_RivalMeetPlayer
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
    msgbox HetonianPowerPlant2F_RivalLetsGoDown, MSGBOX_DEFAULT
    special HealPlayerParty
    setvar VAR_NEW_MAUVILLE_STATE, 3
    setvar VAR_FORTREE_CITY_STATE, 5
    delay 32
    warpsilent MAP_HALLOW_SPARK_CITY, 7
    releaseall
    end
    

HetonianPowerPlant2F_EventScript_SetGeneratorOffMetatiles::
    setmetatile 12, 3, METATILE_BikeShop_Generator_Off_Tile1, TRUE
    setmetatile 13, 3, METATILE_BikeShop_Generator_Off_Tile2, TRUE
    setmetatile 11, 4, METATILE_BikeShop_Generator_Off_Tile4, TRUE
    setmetatile 12, 4, METATILE_BikeShop_Generator_Off_Tile5, TRUE
    setmetatile 13, 4, METATILE_BikeShop_Generator_Off_Tile6, TRUE
    setmetatile 14, 4, METATILE_BikeShop_Generator_Off_Tile7, TRUE
    special DrawWholeMapView
    return

HetonianPowerPlant2F_EventScript_SetGeneratorBackOnMetatiles::
    setmetatile 12, 3, METATILE_BikeShop_Generator_On_Tile1, TRUE
    setmetatile 13, 3, METATILE_BikeShop_Generator_On_Tile2, TRUE
    setmetatile 11, 4, METATILE_BikeShop_Generator_On_Tile4, TRUE
    setmetatile 12, 4, METATILE_BikeShop_Generator_On_Tile5, TRUE
    setmetatile 13, 4, METATILE_BikeShop_Generator_On_Tile6, TRUE
    setmetatile 14, 4, METATILE_BikeShop_Generator_On_Tile7, TRUE
    special DrawWholeMapView
    return

HetonianPowerPlant2F_EventScript_GeneratorOff::
    msgbox HetonianPowerPlant2F_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
    releaseall
    end

HetonianPowerPlant2F_Text_GeneratorRadiatingHeat:
    .string "The generator is radiating heat that\n"
    .string "can be felt even at a distance.\p"
    .string "It looks like it should be turned off\n"
    .string "as soon as possible.$"

HetonianPowerPlant2F_Text_GeneratorQuietedDown:
    .string "The generator quieted down.$"

HetonianPowerPlant2F_Text_SteppedOnSwitchGeneratorStopped:
    .string "{PLAYER} stepped on the switch.\p"
    .string "Click…\p"
    .string "… … … … … … … …\n"
    .string "… … … … … … … …\p"
    .string "The generator appears to have\n"
    .string "stopped…$"

HetonianPowerPlant2F_AdjustPlayerX:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    step_end

HetonianPowerPlant2F_AdjustPlayerY2:
    walk_fast_up
    step_end

HetonianPowerPlant2F_AdjustPlayerY3:
    walk_fast_up
    walk_fast_up
    step_end

HetonianPowerPlant2F_AdjustPlayerY4:
    walk_fast_up
    walk_fast_up
    walk_fast_up
    step_end

HetonianPowerPlant2F_AngrboaWalkUp:
    walk_up
    step_end

HetonianPowerPlant2F_PlayerWalkUp:
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_WhatAreYouDoingHere:
    .string "???: You, what are you doing here?\p"
    .string "I thought I told you to guard the\n"
    .string "staircase.\p"
    .string "Should I... take this as a sign of\n"
    .string "disobedience..?$"

HetonianPowerPlant2F_GruntReport:
    .string "N-No!\p"
    .string "Not at all!\p"
    .string "Sir, Alexandr, sir, it's just that we\n"
    .string "have an intruder here, and they've\l"
    .string "beaten me and the other grunts!$"

HetonianPowerPlant2F_ScientistWorried1:
    .string "Scientist 1: S-Sir, what do we do?\n"
    .string "Ever since Lady Kirschblüte had that\l"
    .string "incident in Kasaan, the Pokémon\l"
    .string "Association has been extra watchful!$"

HetonianPowerPlant2F_ScientistWorried2:
    .string "Scientist 2: Y-Yeah! If the scientific\n"
    .string "community f-finds out what our true\l"
    .string "motives are, they'll t-take our license\l"
    .string "away, and we'll all be i-imprisoned!$"

HetonianPowerPlant2F_AlexandrCalmDown:
    .string "Alexandr: Woah there, woah there, let's\n"
    .string "all calm down.\p"
    .string "Why are we getting all riled up over\n"
    .string "some intruder?\p"
    .string "Nothing I can't handle.\p"
    .string "Scientist 1: B-But, what if its THEM?\p"
    .string "Alexandr: Sure, if it were the champion\n"
    .string "things could get a bit sticky, but even\l"
    .string "then we should still be fine.\p"
    .string "As for that traitor... I could beat her\n"
    .string "with my hands and feet tied up.$"

HetonianPowerPlant2F_PlayerPullUp:
    walk_up
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_ReFocusCam:
    walk_down
    walk_down
    face_up
    step_end

HetonianPowerPlant2F_GruntSeePlayer:
    .string "Grunt: There, sir! The intruder!$"

HetonianPowerPlant2F_AlexandrSeePlayer:
    .string "Alexandr: This is the trainer that beat\n"
    .string "all of you?\p"
    .string "He's just a little kid-$"

HetonianPowerPlant2F_AngrbodaPullUp1:
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
    walk_up
    walk_up
    step_end


HetonianPowerPlant2F_AngrbodaPullUp2:
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
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_AngrbodaPullUp3:
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
    walk_up
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_PlayerOutOfWay:
    walk_right
    face_up
    step_end

HetonianPowerPlant2F_AngrbodaContinuePullUp:
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_FirstGruntOutOfWay:
    walk_right
    walk_right
    face_left
    step_end

HetonianPowerPlant2F_AngrbodaContinuePullUpF:
    walk_up
    step_end

HetonianPowerPlant2F_OtherGruntsToSide:
    walk_left
    walk_left
    face_right
    step_end

HetonianPowerPlant2F_WhyAreAllGruntsHere:
    .string "Alexandr: Why are you guys here too?\p"
    .string "Don't tell me you were also all defeated\n"
    .string "by this little kid too.$"

HetonianPowerPlant2F_BeatenBySomeCaerulea:
    .string "Grunt: Some Caerulea kid came out of\n"
    .string "nowhere, and defeated us, sir!\p"
    .string "He was really strong... There was little\n"
    .string "we could do...\p"
    .string "Alexandr: Caerulea kid? I meant that\n"
    .string "Viola brat back there...\p"
    .string "What Caerulea kid-$"

HetonianPowerPlant2F_RivalPullUp1:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_LiamWhereAreYouGoing:
    .string "Liam: Hey! Where do you grunts think\n"
    .string "you're running off to?$"

HetonianPowerPlant2F_RivalPullUp2:
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_PlayerHereToo:
    .string "{PLAYER}!\p"
    .string "You're here too!$"

HetonianPowerPlant2F_AlexandrYouThere:
    .string "Alexandr: tch...\p"
    .string "You there! Scientists!$"

HetonianPowerPlant2F_ScientistsProtest:
    .string "Scientist 1: U-Us?\p"
    .string "But we're just s-scientists, we c-can't\n"
    .string "f-fight at all-$"

HetonianPowerPlant2F_AlexandrJustGo:
    .string "Alexandr: Just. Go.$"

HetonianPowerPlant2F_Scientist1PullUp:
    walk_down
    walk_left
    walk_down
    step_end

HetonianPowerPlant2F_Scientist2PullUp:
    walk_down
    walk_down
    step_end

HetonianPowerPlant2F_LiamHoldThemOff:
    .string "Liam: {PLAYER}!\p"
    .string "I'll take care of these two-\n"
    .string "Go stop him!$"

HetonianPowerPlant2F_ReadjustGruntPos:
    walk_up
    walk_right
    face_down
    step_end

HetonianPowerPlant2F_PlayerApproachAlexandr:
    walk_up
    walk_up
    walk_left
    walk_up
    step_end

HetonianPowerPlant2F_PreAlexandrBattle:
    .string "Alexandr: I guess I have no choice.\p"
    .string "I'll indulge your foolishness for now.$"

HetonianPowerPlant2F_PostAlexandrBattle:
    .string "Tch...$"

HetonianPowerPlant2F_AlexandrUnderestimated:
    .string "It looks like I underestimated you...\p"
    .string "Oh well. HQ should be getting back to me\n"
    .string "any second now...$"

HetonianPowerPlant2F_GotMessageFromHQ:
    .string "Scientist: Sir! I've received a message\n"
    .string "from HQ-\p"
    .string "They say that the p-power from the\n"
    .string "generator s-still isn't enough!\p"
    .string "Alexandr: Impossible! The generator\n"
    .string "supples all of Heto with electrical\l"
    .string "energy!\p"
    .string "Scientist: Wait, sir, there's still more-\n"
    .string "$"

HetonianPowerPlant2F_ReceiveRestOfMsg:
    .string "Mhm- yes... No way... T-This-$"

HetonianPowerPlant2F_AlexandrWhatWasMsg:
    .string "Alexandr: What did they say?\p"
    .string "Scientist: T-They said there's a n-new\n"
    .string "energy reading on the map-\l"
    .string "They say it's even more s-stronger than\l"
    .string "the p-power levels h-here-\p"
    .string "Alexandr: Where?\p"
    .string "Scientist: M-Mount E-Emberfall's\n"
    .string "s-south-eastern ridge.\p"
    .string "Alexandr: All right, then...\p"
    .string "GRUNTS!$"

HetonianPowerPlant2F_MoveOut:
    .string "We're moving out! We have a new target!$"

HetonianPowerPlant2F_LiamBackUp:
    walk_down
    face_up
    step_end

HetonianPowerPlant2F_WeavileEnter:
    jump_in_place_up
    delay_16
    jump_in_place_up
    delay_16
    step_end

HetonianPowerPlant2F_RivalMeetPlayer:
    walk_up
    walk_up
    step_end

HetonianPowerPlant2F_RivalLetsGoDown:
    .string "Looks like they left...\p"
    .string "Here, let me heal up your Pokémon real\n"
    .string "quick\p"
    .string "\p"
    .string "Let's go down, we gotta tell Lena!\p"
    .string "Meet up at the entrance where she's\n"
    .string "waiting!$"


