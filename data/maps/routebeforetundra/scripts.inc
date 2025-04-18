routebeforetundra_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, routebeforetundra_OnTransition
	.byte 0

routebeforetundra_OnTransition::
    call_if_unset FLAG_DEFEATED_RUSTBORO_GYM, routebeforetundra_VarZero
    call_if_set FLAG_DEFEATED_RUSTBORO_GYM, routebeforetundra_VarOne
    end

routebeforetundra_VarZero::
    setvar VAR_RUSTBORO_CITY_STATE, 0
    return

routebeforetundra_VarOne::
    setvar VAR_RUSTBORO_CITY_STATE, 1
    return

PostEverbloomTrigger::
    lockall
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 1
    msgbox PostEverbloomNeedFlash, MSGBOX_DEFAULT
    applymovement OBJ_EVENT_ID_PLAYER, Movement_KeepItSteppin
    waitmovement OBJ_EVENT_ID_PLAYER
    releaseall
    end


PostEverbloomHiker::
    lock
    faceplayer
    goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, PostEverbloomHiker2
    msgbox PostEverbloomNeedFlash, MSGBOX_DEFAULT
    release
    end

PostEverbloomHiker2::
    msgbox PostEverbloomUseFlash, MSGBOX_DEFAULT
    release
    end

PostEverbloomUseFlash:
    .string "Hey!\n"
    .string "Kid, use {SHADOW DARK_GRAY}{COLOR LIGHT_GRAY}Flash {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}to light up caves.$"

PostEverbloomNeedFlash:
    .string "Hey!\n"
    .string "Kid, you need to be able to use {SHADOW DARK_GRAY}{COLOR LIGHT_GRAY}Flash{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\l"
    .string "if you want to be able to navigate the\l"
    .string "cave systems, so you need to beat the\l"
    .string "Everbloom Gym.$"

Movement_KeepItSteppin:
    walk_right
    walk_right
    step_end

Script_EverbloomCaveRouteKid1::
    lock
    faceplayer
    msgbox Text_EverbloomCaveRouteKid1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCaveRouteKid1:
    .string "Those caves are realy scary, but I’m\n"
    .string "a big boy.\l"
    .string "I’m strong, fast, smart, and I have\l"
    .string "both a Caterpie AND a Weedle!\l"
    .string "The cave monsters don’t stand a chance.$"

Script_EverbloomCaveRouteMan1::
    lock
    faceplayer
    msgbox Text_EverbloomCaveRouteMan1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCaveRouteMan1:
    .string "Certain Pokéballs work better in caves.\n"
    .string "I personally prefer {COLOR RED}Dusk Balls{COLOR DARK_GRAY}, they\l"
    .string "catch everything in caves.\l"
    .string "It doesn’t even have to be dark!$"
