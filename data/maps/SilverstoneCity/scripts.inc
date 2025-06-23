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
	applymovement OBJ_EVENT_ID_PLAYER, SilverstoneCity_PlayerGoToEntrance
	waitmovement 1
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 1
	applymovement 1, Common_Movement_ExclamationMark
	msgbox SilverstoneCity_RivalSeePolicemen, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement 1, SilverstoneCity_RivalGoToHideout
	applymovement OBJ_EVENT_ID_PLAYER, SilverstoneCity_PlayerGoToHideout
	waitmovement 0
	waitmovement 1
	applymovement 4, Common_Movement_FaceRight
	waitmovement 4
	applymovement 4, Common_Movement_ExclamationMark
	msgbox SilverstoneCity_LeadIn, MSGBOX_AUTOCLOSE
	applymovement 4, SilverstoneCity_WalkLeft
	applymovement 1, SilverstoneCity_WalkLeft
	applymovement OBJ_EVENT_ID_PLAYER, SilverstoneCity_WalkDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	releaseall
	end

SilverstoneCity_WalkLeft:
	walk_left
	step_end

SilverstoneCity_WalkDown:
	walk_down
	step_end

SilverstoneCity_LeadIn:
	.string "Policeman: Hey you two!\p"
	.string "Are you two                             \n"
	.string "uh....\p"
	.string "Are you two Liam and {PLAYER}?\p"
	.string "Mr. Nou notified us ahead of time of\n"
	.string "your involvement in this matter.\p"
	.string "We believe that we have found Angrboda's\n"
	.string "hideout.\p"
	.string "Please come this way.$"

SilverstoneCity_RivalGoToHideout:
	walk_left
	walk_left
	walk_down
	face_left
	step_end

SilverstoneCity_PlayerGoToHideout:
	walk_down
	walk_left
	walk_left
	step_end

SilverstoneCity_RivalSeePolicemen:
	.string "Look, {PLAYER}.\p"
	.string "It seems that the Association found the\n"
	.string "hideout.\p"
	.string "Let's go take a closer look.$"
	
SilverstoneCity_PlayerGoToEntrance:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
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
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SilverstoneCity_RivalGoToEntrance:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
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
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

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