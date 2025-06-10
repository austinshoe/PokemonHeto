HetonianDesertEntrance_MapScripts::
	.byte 0

HetonianDesertEntrance_Triggers::
	lockall
	goto_if_set FLAG_RECEIVED_GO_GOGGLES, HetonianDesertEntrance_TriggerCannotProceed
	releaseall
	end

HetonianDesertEntrance_TriggerCannotProceed:
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	msgbox HetonianDesertEntrance_CannotProceed, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, HetonianDesertEntrance_MoveBack
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	end

HetonianDesertEntrance_CannotProceed:
	.string "Sorry, but you can't proceed without the\n"
	.string "Go Goggles.\p"
	.string "Without them, you'll be blinded by the\n"
	.string "sandstorms that rage through the desert.$"

HetonianDesertEntrance_MoveBack:
	walk_up
	step_end