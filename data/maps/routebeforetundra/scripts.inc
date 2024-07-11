routebeforetundra_MapScripts::
	.byte 0

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
    .string "Kid, use {SHADOW DARK_GRAY}Flash {SHADOW LIGHT_GRAY}to light up caves.$"

PostEverbloomNeedFlash:
    .string "Hey!\n"
    .string "Kid, you need to be able to use{SHADOW DARK_GRAY} Flash\l"
    .string "{SHADOW LIGHT_GRAY}if you want to be able to navigate the\l"
    .string "cave systems, so you need to beat the\l"
    .string "Everbloom Gym.$"

Movement_KeepItSteppin:
    walk_right
    walk_right
    step_end
