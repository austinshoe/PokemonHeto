FrostvaleTundra2_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, FrostvaleTundra2_OnTransition
	.byte 0

FrostvaleTundra2_OnTransition:
    goto_if_set FLAG_VISITED_RUSTBORO_CITY, FrostvaleTundra2_NoTrigger
    setvar VAR_ROUTE101_STATE, 1
    end

FrostvaleTundra2_NoTrigger:
    setvar VAR_ROUTE101_STATE, 2
    end

FrostvaleTundra2_Trigger::
    lock
    applymovement 5, FrostvaleTundra2_Movement_Kirschblute_LookAround
    message Text_FrostvaleTundra2_Context
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 6, Common_Movement_ExclamationMark
    applymovement 7, Common_Movement_ExclamationMark
    applymovement 8, Common_Movement_ExclamationMark
    applymovement 9, Common_Movement_ExclamationMark
    waitmovement 6
    waitmovement 7
    waitmovement 8
    waitmovement 9
    message Text_FrostvaleTundra2_GruntAffirm
    waitmessage
    waitbuttonpress
    closemessage
    message Text_FrostvaleTundra2_KirschbluteLeave
    waitmessage
    waitbuttonpress
    closemessage
    applymovement 5, Common_Movement_FaceUp
    waitmovement 5,
    hideobjectat 5, MAP_FROSTVALE_TUNDRA2
    playse SE_WARP_OUT
    applymovement 6, FrostvaleTundra2_Movement_Grunt6Leave
    applymovement 7, FrostvaleTundra2_Movement_Grunt7Leave
    applymovement 8, FrostvaleTundra2_Movement_Grunt8Leave
    applymovement 9, FrostvaleTundra2_Movement_Grunt9Leave
    waitmovement 9
    hideobjectat 9, MAP_FROSTVALE_TUNDRA2
    playse SE_WARP_OUT
    waitmovement 6
    hideobjectat 6, MAP_FROSTVALE_TUNDRA2
    playse SE_WARP_OUT
    waitmovement 8
    hideobjectat 8, MAP_FROSTVALE_TUNDRA2
    playse SE_WARP_OUT
    waitmovement 7
    hideobjectat 7, MAP_FROSTVALE_TUNDRA2
    playse SE_WARP_OUT
    setvar VAR_ROUTE101_STATE, 2
    setobjectxyperm 5, 0, 59
    setobjectxyperm 6, 0, 59
    setobjectxyperm 7, 0, 59
    setobjectxyperm 8, 0, 59
    setobjectxyperm 9, 0, 59
    release
    end

Script_FrostvaleTundraMan2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraMan2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraMan2:
    .string "Hey kid, be careful.\n"
    .string "The ground here is extremely slippery.\l"
    .string "Make sure you walk slowly and\l"
    .string "carefully, I don’t want to have to dig\l"
    .string "you out of the snow if you fall.$"

Script_FrostvaleTundraWoman2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraWoman2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraWoman2:
    .string "Are you lost? Because there is no way\n"
    .string "that you would willingly come here.\l"
    .string "This place is terrible.\l"
    .string "You should leave.\p"
    .string "Why do I live here?\l"
    .string "So I can warn other people not to.$"

Script_FrostvaleTundra2Op1::
    lock
    faceplayer
    trainerbattle_single TRAINER_AUSTINA, Text_FrostvaleTundra2Op1Intro, Text_FrostvaleTundra2Op1Defeat
    msgbox Text_FrostvaleTundra2Op1PostBattle, MSGBOX_AUTOCLOSE
    end

Text_FrostvaleTundra2Op1Intro:
    .string "Your pokémon.\n"
    .string "Show them to me!$"
    
Text_FrostvaleTundra2Op1Defeat:
    .string "You may have won this one,\n"
    .string "but I'll be back to take what's mine.$"

Text_FrostvaleTundra2Op1PostBattle:
    .string "I must be going now.$"

Script_FrostvaleTundra2Op2::
    lock
    faceplayer
    trainerbattle_single TRAINER_GWEN, Text_FrostvaleTundra2Op2Intro, Text_FrostvaleTundra2Op2Defeat
    msgbox Text_FrostvaleTundra2Op2PostBattle, MSGBOX_AUTOCLOSE
    end

Text_FrostvaleTundra2Op2Intro:
    .string "Fine. I guess I'll battle you$"
    
Text_FrostvaleTundra2Op2Defeat:
    .string "Oh no I lost.$"

Text_FrostvaleTundra2Op2PostBattle:
    .string "Imma go sleep now.$"

FrostvaleTundra2_Movement_Kirschblute_LookAround:
    face_right
    delay_16
    face_down
    delay_16
    face_right
    delay_16
    face_down
    delay_16
    face_right
    step_end

Text_FrostvaleTundra2_Context:
    .string "{COLOR BLUE}???:{COLOR DARK_GRAY} Alright, according to our intel,\n"
    .string "he should live around here.\p"
    .string "We're just here to extract information,\n"
    .string "so don't hurt him. and do your best to\l"
    .string "keep civilians out of it.\p"
    .string "If you fail...\p$"
    .string "I'll dispose of you-\n"
    .string "Y'all are just low level grunts\l"
    .string "anyways...\p"
    .string "Understood?$"

Text_FrostvaleTundra2_GruntAffirm:
    .string "{COLOR BLUE}Grunts:{COLOR DARK_GRAY} YES, MA'AM!$"

Text_FrostvaleTundra2_KirschbluteLeave:
    .string "{COLOR BLUE}???:{COLOR DARK_GRAY} Good. Notify me immediately when\n"
    .string "you locate him.$"

FrostvaleTundra2_Movement_Grunt6Leave:
    walk_up
    walk_up
    step_end

FrostvaleTundra2_Movement_Grunt7Leave:
    walk_up
    walk_left
    walk_up
    step_end

FrostvaleTundra2_Movement_Grunt8Leave:
    walk_up
    walk_left
    face_up
    step_end

FrostvaleTundra2_Movement_Grunt9Leave:
    walk_left
    face_up
    step_end