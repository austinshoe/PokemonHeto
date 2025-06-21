NewMap14_MapScripts::
	.byte 0

PixisPath_Officers::
    lockall
    applymovement 2, Common_Movement_FaceUp
    applymovement 3, Common_Movement_FaceUp
    waitmovement 0
    applymovement 2, Common_Movement_ExclamationMark
    applymovement 3, Common_Movement_ExclamationMark
    delay 32
    msgbox PixisPath_OfficersCantPass, MSGBOX_AUTOCLOSE
    applymovement 2, Common_Movement_FaceDown
    applymovement 3, Common_Movement_FaceDown
    applymovement OBJ_EVENT_ID_PLAYER, PixisPath_WalkUp
    waitmovement 0
    releaseall
    end

PixisPath_WalkUp:
    walk_up
    step_end

PixisPath_OfficersCantPass:
    .string "I'm terribly sorry, we're temporarily\n"
    .string "closing the path to Silverstone City.\p"
    .string "Try coming back later.$"

Script_NewMap14Woman1::
    lock
    faceplayer
    msgbox Text_NewMap14Woman1, MSGBOX_DEFAULT
    release
    end

Text_NewMap14Woman1:
    .string "The flowers in this area form quite\n"
    .string "the beautiful pattern, no?$"
