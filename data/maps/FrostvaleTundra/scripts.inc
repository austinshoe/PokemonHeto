FrostvaleTundra_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, FrostvaleTundra_OnTransition
	.byte 0

FrostvaleTundra_OnTransition::
    call_if_unset FLAG_DEFEATED_RIVAL_ROUTE_104, Tundra_State0
    call_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Tundra_State1
    end
    
Tundra_State0:
    setvar VAR_ROUTE101_STATE, 0
    end

Tundra_State1:
    setvar VAR_ROUTE101_STATE, 1
    end

Frostvale_Tundra_Rival_Trigger::
    lock
    applymovement 5, Common_Movement_ExclamationMark
    waitmovement 0
    applymovement 5, Common_Movement_WalkUp
    waitmovement 0
    msgbox Text_Frostvale_Rival_Intro, MSGBOX_DEFAULT
    applymovement 5, Common_Movement_FaceAwayPlayer
    waitmovement 0
    msgbox Text_Frostvale_Rival_Got_Stronger, MSGBOX_DEFAULT
    applymovement 5, Frostvale_Movement_Rival_Battle
    waitmovement 0
    msgbox Text_Frostvale_Rival_Battle, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Text_FrostvaleLiamDefeated
    setflag FLAG_DEFEATED_RIVAL_ROUTE_104
    setvar VAR_ROUTE101_STATE, 1
    applymovement 5, Common_Movement_WalkUp
    waitmovement 0
    msgbox Text_FrostvaleLiamOutro, MSGBOX_DEFAULT
    applymovement 5, Common_Movement_FaceAwayPlayer
    waitmovement 0
    msgbox Text_FrostvaleLiamNextGym, MSGBOX_DEFAULT
    applymovement 5, Frostvale_Movement_RivalSkedaddle
    waitmovement 0
    fadescreen FADE_TO_BLACK
    removeobject 5
    hideobjectat 5, MAP_FROSTVALE_TUNDRA
    fadescreen FADE_FROM_BLACK
    releaseall
    end

    
Script_FrostvaleTundraMan1::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraMan1, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraMan1:
    .string "Certain pokémon types are better\n"
    .string "against other types.\l"
    .string "For example, flying types are very\l"
    .string "effective against ice types.$"

Script_FrostvaleTundraWoman1::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraWoman1, MSGBOX_DEFAULT
    closemessage
    call Common_EventScript_OutOfCenterPartyHeal
    fadescreen FADE_TO_BLACK
    fadescreen FADE_FROM_BLACK
    release
    end

Text_FrostvaleTundraWoman1:
    .string "You’re looking quite cold.\n"
    .string "Here, have some hot chocolate.$"

Script_FrostvaleTundraKid2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraKid2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraKid2:
    .string "Have you seen my Swinub?\n"
    .string "He looks like a Swinub.$"

Script_FrostvaleTundraKid1::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraKid1, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraKid1:
    .string "A lot of kids I know have been talking\n"
    .string "about the power of Caterpie and Weedle,\l"
    .string "but I never hear anyone talking about\l"
    .string "Wurmple.\l"
    .string "That thing one shot my Charizard\l"
    .string "and Blaziken.$"

Script_FrostvaleTundraSign::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraSign, MSGBOX_DEFAULT
    release
    end
    
Text_FrostvaleTundraSign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Frostvale Tundra$"
    .string "There's snow here!!!$"

Text_Frostvale_Rival_Intro:
    .string "{COLOR BLUE}Liam: {COLOR DARK_GRAY}{PLAYER}!\n"
    .string "Long time no see!\l"
    .string "Looks like you beat the {COLOR GREEN}Everbloom Gym{COLOR DARK_GRAY}, \l"
    .string "huh?\p"
    .string "$"
    
Text_Frostvale_Rival_Got_Stronger:
    .string "...to be honest, after you beat me back\n"
    .string "home, I've worked hard to get way\l"
    .string "stronger.$"

Text_Frostvale_Rival_Battle:
    .string "Prepare yourself,\n"
    .string "I'm not losing this time!$"

Text_FrostvaleLiamDefeated:
    .string "Damn...$"

Text_FrostvaleLiamOutro:
    .string "{COLOR BLUE}Liam: {COLOR DARK_GRAY}Even after working so hard,\n"
    .string "I still can't beat you yet...\p"
    .string "But I guess it was much closer than\n"
    .string "last time.$"

Text_FrostvaleLiamNextGym:
    .string "The next gym is right ahead, past this\n"
    .string "tundra, in {COLOR BLUE}Kasaan{COLOR DARK_GRAY}.\p"
    .string "I won't lose next time.$"

Frostvale_Movement_Rival_Battle:
    walk_down
    face_up
    step_end

Frostvale_Movement_RivalSkedaddle:
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    face_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    face_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    walk_fast_down
    step_end
