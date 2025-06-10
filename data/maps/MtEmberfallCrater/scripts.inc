MtEmberfallCrater_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmberfallCrater_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtEmberfallCrater_OnFrameTable
	.byte 0

MtEmberfallCrater_OnTransition:
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq MtEmberfallCrater_SetUpTousLesGens
	compare VAR_SKY_PILLAR_STATE, 3
	goto_if_eq MtEmberfallCrater_SetUpHealer
	compare VAR_SKY_PILLAR_STATE, 4
	goto_if_eq MtEmberfallCrater_WaitForPlayerSetUp
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	end

MtEmberfallCrater_WaitForPlayerSetUp:
	setflag FLAG_TEMP_2
	clearflag FLAG_TEMP_1
	setobjectxyperm 3, 19, 9
	setobjectxyperm 1, 20, 10
	setobjectxyperm 2, 19, 10
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	end
	
MtEmberfallCrater_OnFrameTable:
	map_script_2 VAR_SKY_PILLAR_STATE, 4, MtEmberfallCrater_Aftermath1
	.2byte 0

MtEmberfallCrater_Aftermath1:
	lockall
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	message MtEmberfallCrater_Aftermath1Text
	waitmessage
	closemessage
	applymovement 1, MtEmberfallCrater_LenaLeave
	applymovement 2, MtemberfallCrater_ShinMoveOutofWay
	applymovement 3, MtEmberfallCrater_LiamLeave
	waitmovement 1
	waitmovement 2
	waitmovement 3
	message MtEmberfallCrater_Aftermath1ShinPostDitch
	waitmessage
	closemessage
	applymovement 2, Common_Movement_FaceDown
	waitmovement 2
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	msgbox MtEmberfallCrater_Aftermath1ShinGiveGoggles, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox MtEmberfallCrater_Aftermath1ShinExplainGoggles, MSGBOX_DEFAULT
	applymovement 2, MtEmberfallCrater_LenaLeave
	setflag FLAG_TEMP_1
	removeobject 1
	removeobject 2
	removeobject 3
	setvar VAR_SKY_PILLAR_STATE, 5
	setrespawn HEAL_LOCATION_ONSEN_CITY
	releaseall
	end


MtEmberfallCrater_SetUpTousLesGens:
	clearflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	end

MtEmberfallCrater_SetUpHealer:
	clearflag FLAG_TEMP_2
	setflag FLAG_TEMP_1
	end

MtEmberfallCrater_TriggerCannotLeave::
	lockall
	msgbox Text_MtEmberfallCrater_CannotLeave, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallCrater_MoveBack
	waitmovement 0
	releaseall
	end

Text_MtEmberfallCrater_CannotLeave:
	.string "You can't leave now!\n"
	.string "The others need your help!$"

MtEmberfallCrater_MoveBack:
	walk_left
	step_end

MtEmberfallCrater_TriggerLeft::
	lockall
    checkplayergender
    compare VAR_RESULT, FEMALE
    goto_if_eq MtEmberfallCrater_UpdatePlayerGFXGirl
	goto MtEmberfallCrater_UpdatePlayerGFXBoy
    
MtEmberfallCrater_UpdatePlayerGFXGirl:
	addobject 4
    setobjectgfx 4, OBJ_EVENT_GFX_MAY_NORMAL
    goto MtEmberfallCrater_TriggerUnusedForNow

MtEmberfallCrater_UpdatePlayerGFXBoy:
	addobject 4
	setobjectgfx 4, OBJ_EVENT_GFX_BRENDAN_NORMAL
	goto MtEmberfallCrater_TriggerUnusedForNow

MtEmberfallCrater_TriggerUnusedForNow::
	setobjectxyperm 4, 11, 41
	addobject 4
	delay 16
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
    checkplayergender
    compare VAR_RESULT, FEMALE
    goto_if_eq MtEmberfallCrater_UpdatePlayerGFXGirl1
	goto MtEmberfallCrater_UpdatePlayerGFXBoy1
    
MtEmberfallCrater_UpdatePlayerGFXGirl1:
	addobject 4
    setobjectgfx 4, OBJ_EVENT_GFX_MAY_NORMAL
    goto MtEmberfallCrater_TriggerUnusedForNow

MtEmberfallCrater_UpdatePlayerGFXBoy1:
	addobject 4
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
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
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
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setrespawn HEAL_LOCATION_MT_EMBERFALL_CRATER
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
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

MtEmberfallCrater_LenaGoToEntrance:
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

MtEmberfallCrater_LiamGoToEntrance:
	walk_left
	walk_left
	walk_up
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

MtEmberfallCrater_Aftermath1Text:
	.string "Shin: We barely managed to prevent them\n"
	.string "from breaking through.\p"
	.string "I think we should keep an eye on any\n"
	.string "unusual activity, as we still don't know\l"
	.string "where their hideout is.\p"
	.string "Lena: I agree.\p"
	.string "I'll go back to headquarters and get\n"
	.string "more hands on this case.\p"
	.string "Liam: I'll leave too.$"

MtEmberfallCrater_LenaLeave:
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
	walk_right
	walk_right
	step_end

MtEmberfallCrater_LiamLeave:
	walk_up
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
	walk_right
	walk_right
	step_end

MtemberfallCrater_ShinMoveOutofWay:
	walk_left
	face_right
	delay_16
	walk_right
	walk_right
	face_down
	step_end

MtEmberfallCrater_Aftermath1ShinPostDitch:
	.string "Shin: About your friend, Liam...\n"
	.string "He's strong. But at the same time he\l"
	.string "seems troubled...\p"
	.string "Did he ever tell you what happened to\n"
	.string "his brother?\p"
	.string "No? I guess I'm not that surprised.\p"
	.string "Ten years ago, during the war, when\n"
	.string "Toemayto and Hehehatia were at war,\l"
	.string "I was the leader of a regiment.\p"
	.string "You and Liam were probably too young to\n"
	.string "remember much from the war, but Liam's\l"
	.string "brother was a soldier in my squad.\p"
	.string "We were stationed in Fall Grove Town\n"
	.string "when we were given orders to attack\l"
	.string "Kasaan, then a part of Hehehatia, in a\l"
	.string "frontal assault.\p"
	.string "Liam's brother, Daiya, was taken in the\n"
	.string "battle.\p"
	.string "As the officer in charge of the attack,\n"
	.string "I'm sure that Liam still blames me to\l"
	.string "some extent for his brother's death.\p"
	.string "As you know, the war ended with a coup\n"
	.string "d'état in Hehehatia, when some high\l"
	.string "ranking officers, like Lena, seized\l"
	.string "power to end the conflict.\p"
	.string "Angrboda is the remnants of the old\n"
	.string "Hehehatian army and government, and\l"
	.string "Jörmungandr was the lead general of\l"
	.string "Hehehatia during the war.\p"
	.string "I don't know what his end goal is, but\n"
	.string "for the sake of the region, we must\l"
	.string "stop him.$"

MtEmberfallCrater_Aftermath1ShinGiveGoggles:
	.string "That's right, before I leave, let me\n"
	.string "give you these.$"

MtEmberfallCrater_Aftermath1ShinExplainGoggles:
	.string "These goggles will protect you from the\n"
	.string "harsh sandstorms in the Hetonian Desert.\p"
	.string "You'll be able to go South from\n"
	.string "HallowSpark City to continue your\l"
	.string "journey.\p"
	.string "In the meantime, I'll go back to\n"
	.string "the Pokémon Association headquarters.\p"
	.string "Keep an eye out for Angrboda, won't you?$"



