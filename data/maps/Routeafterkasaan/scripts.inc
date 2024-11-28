Routeafterkasaan_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Routeafterkasaan_OnTransition
	.byte 0

Routeafterkasaan_OnTransition:
    call_if_unset FLAG_MET_RIVAL_RUSTBORO, Routeafterkasaan_Var0
    call_if_set FLAG_MET_RIVAL_RUSTBORO, Routeafterkasaan_Var1
    end

Routeafterkasaan_Var0:
    setvar VAR_ROUTE102_STATE, 0
    end

Routeafterkasaan_Var1:
    setvar VAR_ROUTE102_STATE, 1
    end

RouteafterkasaanTrigger1::
    lockall
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement 3, Common_Movement_FaceRight
    waitmovement 0
    msgbox Text_RAKRivalGreeting, MSGBOX_DEFAULT
    applymovement 3, RAKMovementApproachPlayer1
    waitmovement 0
    goto RAKTrigger3

RouteafterkasaanTrigger2::
    lockall
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement 3, Common_Movement_FaceRight
    waitmovement 0
    msgbox Text_RAKRivalGreeting, MSGBOX_DEFAULT
    applymovement 3, RAKMovementApproachPlayer2
    waitmovement 0
    goto RAKTrigger3

RAKTrigger3:
    message Text_RAKRival1
    waitmessage
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 0
    message Text_RAKRival2
    waitmessage
    fadescreen FADE_TO_BLACK
    closemessage
    delay 16
    fadescreen FADE_FROM_BLACK
    message Text_RAKRival3
    waitmessage
    applymovement 3, Common_Movement_FaceLeft
    waitmovement 0
    message Text_RAKRival4
    waitmessage
    closemessage
    setflag FLAG_MET_RIVAL_RUSTBORO
    applymovement 3, RAKMovementSkedaddlydoo
    waitmovement 0
    removeobject 3
    releaseall
    end

Script_RouteAfterKassanLittleBoy1::
    lock
    faceplayer
    msgbox Text_RouteAfterKassanLittleBoy1, MSGBOX_DEFAULT
    release
    end

Text_RouteAfterKassanLittleBoy1:
    .string "You're finally leaving?\n"
    .string "Took you long enough.$"

Script_RouteAfterKassanLittleGirl1::
    lock
    faceplayer
    msgbox Text_RouteAfterKassanLittleGirl1, MSGBOX_DEFAULT
    release
    end

Text_RouteAfterKassanLittleGirl1:
    .string "Can you walk faster?\n"
    .string "I don't want to see you a second more\l"
    .string "than I have to.$"

Script_RouteAfterKassanExitSign::
    lock
    faceplayer
    msgbox Text_RouteAfterKassanExitSign, MSGBOX_DEFAULT
    release
    end

Text_RouteAfterKassanExitSign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Exit$"

Text_RAKRivalGreeting:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: {PLAYER}!$"

Text_RAKRival1:
    .string "Looks like you've beaten {COLOR BLUE}Kasaan{COLOR DARK_GRAY}'s gym.\n"
    .string "Anyways-\p"
    .string "$"

Text_RAKRival2:
    .string "You have something to tell me?\n"
    .string "What happened?\p"
    .string "$"

Text_RAKRival3:
    .string "I see...\p"
    .string "So something like that happened...\p"
    .string "You said their name was {COLOR BLUE}Angrboda{COLOR DARK_GRAY}?\p"
    .string "I'll be sure to watch out for them.\p"
    .string "In his last letter to us, my brother\n"
    .string "mentioned that the old Hehehehatian\l"
    .string "government went into hiding after the\l"
    .string "coup.\p"
    .string "That must've been them.\p"
    .string "$"

Text_RAKRival4:
    .string "I'll keep an eye out for them.\p"
    .string "If I see them, I'll let you know.$"

RAKMovementApproachPlayer1:
    walk_right
    walk_right
    walk_right
    step_end
    
RAKMovementApproachPlayer2:
    walk_right
    walk_right
    walk_down
    walk_right
    step_end

RAKMovementSkedaddlydoo:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    step_end

Script_RouteafterkassanOp1::
    lock
    faceplayer
    trainerbattle_single TRAINER_LOLA_2, Text_RouteafterkassanOp1Intro, Text_RouteafterkassanOp1Defeat
    msgbox Text_RouteafterkassanOp1PostBattle, MSGBOX_AUTOCLOSE
    end

Text_RouteafterkassanOp1Intro:
    .string "Good job.\n"
    .string "You made it through Kassan.\l"
    .string "Now you have to make it through me!$"
    
Text_RouteafterkassanOp1Defeat:
    .string "I didn't lose.\n"
    .string "I merely failed to win.$"

Text_RouteafterkassanOp1PostBattle:
    .string "I just realized that what I said\n"
    .string "was a bit <word that means happy>$"

Script_RouteafterkassanOp2::
    lock
    faceplayer
    trainerbattle_single TRAINER_LOLA_3, Text_RouteafterkassanOp2Intro, Text_RouteafterkassanOp2Defeat
    msgbox Text_RouteafterkassanOp2PostBattle, MSGBOX_AUTOCLOSE
    end

Text_RouteafterkassanOp2Intro:
    .string "Check out my balls!$"
    
Text_RouteafterkassanOp2Defeat:
    .string "Dang, it appears your balls were\n"
    .string "more powerful.$"

Text_RouteafterkassanOp2PostBattle:
    .string "I hope to witness your balls\n"
    .string "another time.$"

Script_RouteafterkassanOp3::
    lock
    faceplayer
    trainerbattle_single TRAINER_LOLA_4, Text_RouteafterkassanOp3Intro, Text_RouteafterkassanOp3Defeat
    msgbox Text_RouteafterkassanOp3PostBattle, MSGBOX_AUTOCLOSE
    end

Text_RouteafterkassanOp3Intro:
    .string "You are about to meet your maker$"
    
Text_RouteafterkassanOp3Defeat:
    .string "You're lucky I left my Charizard\n"
    .string "at home.$"

Text_RouteafterkassanOp3PostBattle:
    .string "If beans were brown, we'd die$"
