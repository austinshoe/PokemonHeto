KuromisaRuins2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KuromisaRuins2_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KuromisaRuins2_OnFrame
	.byte 0

KuromisaRuins2_OnTransition:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	compare VAR_LILYCOVE_CITY_STATE, 5
	goto_if_eq KuromisaRuins2_HideRival
	end

KuromisaRuins2_HideRival:
	hideobjectat 9, MAP_KUROMISA_RUINS2
	end

KuromisaRuins2_OnFrame:
	map_script_2 VAR_LILYCOVE_CITY_STATE, 5, KuromisaRuins2_DraconarixCoreCutscene
	.2byte 0

KuromisaRuins2_DraconarixCoreCutscene:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, KuromisaRuins2_WalkNextToKanae
	waitmovement 0
	applymovement 8, Common_Movement_FaceLeft
	applymovement 8, Common_Movement_ExclamationMark
	playse SE_PIN
	msgbox KuromisaRuins2_ThereYouAre, MSGBOX_AUTOCLOSE
	delay 32
	playse SE_EXIT
	showobjectat 9, MAP_KUROMISA_RUINS2
	delay 32
	applymovement 9, KuromisaRuins2_RivalPullUp
	waitmovement 0
	applymovement 8, KuromisaRuins2_AdjustRight
	applymovement OBJ_EVENT_ID_PLAYER, KuromisaRuins2_AdjustRight
	applymovement 9, KuromisaRuins2_RivalFinishPullUp
	waitmovement 8
	waitmovement 9
	msgbox KuromisaRuins2_WhatdIMiss, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, KuromisaRuins2_ConfrontAngrboda
	applymovement 9, KuromisaRuins2_ConfrontAngrboda
	applymovement 8, KuromisaRuins2_ConfrontAngrboda
	waitmovement 8
	waitmovement 9
	checkplayergender
	setvar VAR_TEMP_4, 10
	compare VAR_RESULT, FEMALE
	call_if_eq KuromisaRuins2_PlayerIsGirl
	setobjectxyperm VAR_TEMP_4, 9, 9
	addobject VAR_TEMP_4
	setobjectxy VAR_TEMP_4, 9, 9
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, KuromisaRuins2_PanCameraUp
	waitmovement 0
	@ @ @ @ STUB @ @ @ @
	releaseall
	end

KuromisaRuins2_PanCameraUp:
	walk_up
	walk_up
	walk_up
	step_end

KuromisaRuins2_PlayerIsGirl:
	setvar VAR_TEMP_4, 11
	return

KuromisaRuins2_ConfrontAngrboda:
	walk_up
	walk_up
	step_end

KuromisaRuins2_WhatdIMiss:
	.string "Liam: I felt the tremors and vibrations\n"
	.string "earlier, so I came to check it out.$"
	.string "What'd I miss? How did Angrboda even\n"
	.string "find out about this place?\p"
	.string "Kanae: I don't know either.\p"
	.string "What's important now is that we need to\p"
	.string "stop them.$"


KuromisaRuins2_RivalFinishPullUp:
	walk_up
	step_end

KuromisaRuins2_AdjustRight:
	walk_right
	face_up
	step_end

KuromisaRuins2_RivalPullUp:
	walk_left
	walk_up
	walk_up
	step_end
	

KuromisaRuins2_ThereYouAre:
	.string "Kanae: There you are, {PLAYER}.\p"
	.string "The situation isn't looking too good at\n"
	.string "the moment.\p"
	.string "We're severely outnumbered, but we have\n"
	.string "no choice.\p"
	.string "We need to stop them at all cost.$"
	

KuromisaRuins2_WalkNextToKanae:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end





