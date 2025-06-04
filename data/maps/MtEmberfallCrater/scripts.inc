MtEmberfallCrater_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmberfallCrater_OnTransition
	.byte 0

MtEmberfallCrater_OnTransition:
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq MtEmberfallCrater_SetUpTousLesGens
	compare VAR_SKY_PILLAR_STATE, 3
	goto_if_eq MtEmberfallCrater_SetUpHealer
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	end

MtEmberfallCrater_SetUpTousLesGens:
	clearflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	end

MtEmberfallCrater_SetUpHealer:
	clearflag FLAG_TEMP_2
	setflag FLAG_TEMP_1
	end

MtEmberfallCrater_TriggerLeft::
	lockall
	goto MtEmberfallCrater_UpdatePlayerGFX

MtEmberfallCrater_UpdatePlayerGFX:
    checkplayergender
    compare VAR_RESULT, FEMALE
    goto_if_eq MtEmberfallCrater_UpdatePlayerGFXGirl
	goto MtEmberfallCrater_UpdatePlayerGFXBoy
    
MtEmberfallCrater_UpdatePlayerGFXGirl:
    setobjectgfx 4, OBJ_EVENT_GFX_MAY_NORMAL
    goto MtEmberfallCrater_TriggerUnusedForNow

MtEmberfallCrater_UpdatePlayerGFXBoy:
	setobjectgfx 4, OBJ_EVENT_GFX_BRENDAN_NORMAL
	goto MtEmberfallCrater_TriggerUnusedForNow


MtEmberfallCrater_TriggerUnusedForNow::
	setobjectxyperm 4, 11, 41
	addobject 4
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallCrater_PanCamRightUp
	waitmovement 0
	msgbox MtEmberfallCrater_DiscussionTopMountain, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 4, MtEmberfallCrater_PanCamRightUp
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	setobjectxyperm 4, 0, 0
	removeobject 4
	delay 16
	applymovement 3, Common_Movement_FaceRight
	waitmovement 3
	applymovement 3, Common_Movement_ExclamationMark
	delay 16
	msgbox MtEmberfallCrater_RivalThereHeIs, MSGBOX_DEFAULT
	delay 8
	waitmovement 3
	applymovement 3, Common_Movement_FaceUp
	waitmessage
	waitmovement 3
	fadescreen FADE_TO_BLACK
	setvar VAR_SKY_PILLAR_STATE, 2
	setflag FLAG_TEMP_1
	removeobject 1
	removeobject 2
	removeobject 3
	fadescreen FADE_FROM_BLACK
	releaseall
	end

MtEmberfallCrater_TriggerRightt::
	lockall
	goto MtEmberfallCrater_UpdatePlayerGFX1

MtEmberfallCrater_UpdatePlayerGFX1:
    checkplayergender
    compare VAR_RESULT, FEMALE
    goto_if_eq MtEmberfallCrater_UpdatePlayerGFXGirl1
	goto MtEmberfallCrater_UpdatePlayerGFXBoy1
    
MtEmberfallCrater_UpdatePlayerGFXGirl1:
    setobjectgfx 4, OBJ_EVENT_GFX_MAY_NORMAL
    goto MtEmberfallCrater_TriggerUnusedForNow

MtEmberfallCrater_UpdatePlayerGFXBoy1:
	setobjectgfx 4, OBJ_EVENT_GFX_BRENDAN_NORMAL
	goto MtEmberfallCrater_TriggerUnusedForNow1

MtEmberfallCrater_TriggerUnusedForNow1:
	setobjectxyperm 4, 12, 41
	setobjectgfx 4, OBJ_EVENT_GFX_BRENDAN_NORMAL
	addobject 4
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallCrater_PanCamUp
	waitmovement 0
	msgbox MtEmberfallCrater_DiscussionTopMountain, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 4, MtEmberfallCrater_PanCamUp
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	setobjectxyperm 4, 0, 0
	removeobject 4
	delay 16
	applymovement 3, Common_Movement_FaceRight
	waitmovement 3
	applymovement 3, Common_Movement_ExclamationMark
	delay 16
	msgbox MtEmberfallCrater_RivalThereHeIs, MSGBOX_DEFAULT
	delay 8
	waitmovement 3
	applymovement 3, Common_Movement_FaceUp
	waitmessage
	waitmovement 3
	fadescreen FADE_TO_BLACK
	setvar VAR_SKY_PILLAR_STATE, 2
	setflag FLAG_TEMP_1
	removeobject 1
	removeobject 2
	removeobject 3
	fadescreen FADE_FROM_BLACK
	releaseall
	end

MtEmberfallCrater_PreEnterTriggerTop::
	lockall
	setobjectxyperm 2, 34, 15
	setobjectxyperm 1, 34, 16
	setobjectxyperm 3, 34, 17
	addobject 2
	addobject 1
	addobject 3
	applymovement 2, MtEmberfallCrater_ShinPullUp
	applymovement 1, MtEmberfallCrater_LenaPullUp
	applymovement 3, MtEmberfallCrater_LiamPullUp
	waitmovement 2
	waitmovement 1
	waitmovement 3
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	msgbox MtEmberfallCrater_FoundWhereTheyAre, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallCrater_PlayerGoToEntrance
	applymovement 2, MtEmberfallCrater_ShinGoToEntrance
	applymovement 1, MtEmberfallCrater_LenaGoToEntrance
	applymovement 3, MtEmberfallCrater_LiamGoToEntrance
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement 2
	waitmovement 1
	waitmovement 3
	delay 16
	msgbox MtEmberfallCrater_Plan, MSGBOX_DEFAULT
	waitmessage
	closemessage
	setobjectxyperm 5, 28, 11
	clearflag FLAG_TEMP_2
	addobject 5
	applymovement 5, MtEmberfallCrater_NursePullUp
	waitmovement 5
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	msgbox MtEmberfallCrater_LetsGo, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 2, MtEmberfallCrater_ShinEnter
	delay 8
	applymovement 1, MtEmberfallCrater_LenaEnter
	delay 8
	applymovement 3, MtEmberfallCrater_LiamEnter
	waitmovement 2
	hideobjectat 2, MAP_MT_EMBERFALL_CRATER
	playse SE_EXIT
	waitmovement 1
	hideobjectat 1, MAP_MT_EMBERFALL_CRATER
	playse SE_EXIT
	waitmovement 3
	hideobjectat 3, MAP_MT_EMBERFALL_CRATER
	playse SE_EXIT
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 1
	removeobject 3
	setvar VAR_SKY_PILLAR_STATE, 3
	releaseall
	end
	
MtEmberfallCrater_PreEnterTriggerBottom::
	lockall
	setobjectxyperm 2, 34, 15
	setobjectxyperm 1, 34, 16
	setobjectxyperm 3, 34, 17
	addobject 2
	addobject 1
	addobject 3
	applymovement 2, MtEmberfallCrater_ShinPullUp
	applymovement 1, MtEmberfallCrater_LenaPullUp
	applymovement 3, MtEmberfallCrater_LiamPullUp
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallCrater_PlayerMoveToTop
	waitmovement 2
	waitmovement 1
	waitmovement 3
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 2, Common_Movement_FaceUp
	waitmovement 0
	msgbox MtEmberfallCrater_FoundWhereTheyAre, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallCrater_PlayerGoToEntrance
	applymovement 2, MtEmberfallCrater_ShinGoToEntrance
	applymovement 1, MtEmberfallCrater_LenaGoToEntrance
	applymovement 3, MtEmberfallCrater_LiamGoToEntrance
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement 2
	waitmovement 1
	waitmovement 3
	delay 16
	msgbox MtEmberfallCrater_Plan, MSGBOX_DEFAULT
	waitmessage
	closemessage
	setobjectxyperm 5, 28, 11
	clearflag FLAG_TEMP_2
	addobject 5
	applymovement 5, MtEmberfallCrater_NursePullUp
	waitmovement 5
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	msgbox MtEmberfallCrater_LetsGo, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 2, MtEmberfallCrater_ShinEnter
	delay 8
	applymovement 1, MtEmberfallCrater_LenaEnter
	delay 8
	applymovement 3, MtEmberfallCrater_LiamEnter
	waitmovement 2
	hideobjectat 2, MAP_MT_EMBERFALL_CRATER
	playse SE_EXIT
	waitmovement 1
	hideobjectat 1, MAP_MT_EMBERFALL_CRATER
	playse SE_EXIT
	waitmovement 3
	hideobjectat 3, MAP_MT_EMBERFALL_CRATER
	playse SE_EXIT
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 1
	removeobject 3
	setvar VAR_SKY_PILLAR_STATE, 3
	releaseall
	end

MtEmberfallCrater_Healer::
	lock
	msgbox MtEmberfallCrater_Nurse, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox MtEmberfallCrater_NursePostHeal, MSGBOX_DEFAULT
	release
	end

MtEmberfallCrater_PanCamUp:
	walk_up
	walk_up
	walk_up
	step_end

MtEmberfallCrater_PanCamRightUp:
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

MtEmberfallCrater_ShinPullUp:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

MtEmberfallCrater_LenaPullUp:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	step_end

MtEmberfallCrater_LiamPullUp:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_left
	step_end

MtEmberfallCrater_DiscussionTopMountain:
	.string "Shin: Something's off. I don't like how\n"
	.string "we haven't seen any Angrboda members\l"
	.string "on the way up here.\p"
	.string "Lena: Where's {PLAYER}?\p"
	.string "Liam: Left HallowSpark City just a bit\n"
	.string "after me.\p"
	.string "Should be here soon.$"

MtEmberfallCrater_RivalThereHeIs:
	.string "Liam: There you are.\p"
	.string "Shin: Now that {PLAYER} is here, let's\n"
	.string "search the crater for any leads.\p"
	.string "If any of you find something, let me\n"
	.string "or Lena know.$"

MtEmberfallCrater_FoundWhereTheyAre:
	.string "Shin: This is probably where they are.\n"
	.string "Good job, {PLAYER}.\p"
	.string "Lena: When's backup from the Association\n"
	.string "arriving?\p"
	.string "Shin: They're short staffed, so only the\n"
	.string "healer will be here with us.\p"
	.string "Liam: So, what's the plan?$"

MtEmberfallCrater_PlayerGoToEntrance:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

MtEmberfallCrater_ShinGoToEntrance:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

MtEmberfallCrater_LenaGoToEntrance:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

MtEmberfallCrater_LiamGoToEntrance:
	walk_left
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	face_up
	step_end

MtEmberfallCrater_Plan:
	.string "Shin: There is no plan.\p"
	.string "We go in there, and we apprehend them.$"

MtEmberfallCrater_NursePullUp:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	face_down
	step_end

MtEmberfallCrater_LetsGo:
	.string "Lena: That's our healer.\n"
	.string "Let's go.$"

MtEmberfallCrater_ShinEnter:
	walk_up
	step_end

MtEmberfallCrater_LenaEnter:
	walk_up
	walk_up
	step_end

MtEmberfallCrater_LiamEnter:
	walk_left
	walk_up
	walk_up
	step_end

MtEmberfallCrater_PlayerMoveToTop:
	walk_up
	face_down
	step_end

MtEmberfallCrater_Nurse:
	.string "Let me heal your Pokémon.$"

MtEmberfallCrater_NursePostHeal:
	.string "All healed up!$"
