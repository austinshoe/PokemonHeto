SilverstoneCity_MapScripts::
	.byte 0

SilverstoneCity_Trigger4::
	applymovement OBJ_EVENT_ID_PLAYER, SilverstoneCity_Right2
	waitmovement 0
	goto SilverstoneCity_Trigger

SilverstoneCity_Trigger3::
	applymovement OBJ_EVENT_ID_PLAYER, SilverstoneCity_Right
	waitmovement 0
	goto SilverstoneCity_Trigger

SilverstoneCity_Trigger1::
	applymovement OBJ_EVENT_ID_PLAYER, SilverstoneCity_Left
	waitmovement 0
	goto SilverstoneCity_Trigger

SilverstoneCity_Trigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, SilverstoneCity_PlayerMeetRival
	applymovement 1, Common_Movement_FaceUp
	waitmovement 1
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SilverstoneCity_RivalSeePlayer, MSGBOX_AUTOCLOSE
	applymovement 1, SilverstoneCity_RivalGoToEntrance
	waitmovement 0
	releaseall
	end
	

SilverstoneCity_PlayerMeetRival:
	walk_down
	walk_down
	step_end


SilverstoneCity_Left:
	walk_left
	step_end

SilverstoneCity_Right:
	walk_right
	step_end

SilverstoneCity_Right2:
	walk_right
	walk_right
	step_end

SilverstoneCity_RivalSeePlayer:
	.string "Liam: {PLAYER}! Come quick!\p"
	.string "I think they tracked down where Angrboda is!$"