KuromisaRuins2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KuromisaRuins2_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, KuromisaRuins2_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KuromisaRuins2_OnFrame
	.byte 0

KuromisaRuins2_OnLoad:
	compare VAR_LILYCOVE_CITY_STATE, 6
	call_if_gt KuromisaRuins2_HideOrb
	end

KuromisaRuins2_Alexandr::
	msgbox KuromisaRuins2_AlexandrText, MSGBOX_DEFAULT
	end

KuromisaRuins2_Dullahan::
	msgbox KuromisaRuins2_DullahanText, MSGBOX_DEFAULT
	end

KuromisaRuins2_Kanae::
	lock
	faceplayer
	msgbox KuromisaRuins2_KanaeHeal, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	applymovement 8, Common_Movement_FaceUp
	end

KuromisaRuins2_Liam::
	msgbox KuromisaRuins2_LiamText, MSGBOX_DEFAULT
	end

KuromisaRuins2_Lena::
	msgbox KuromisaRuins2_LenaText, MSGBOX_DEFAULT
	end

KuromisaRuins2_AlexandrText:
	.string "Hahahaha! You're strong!$"

KuromisaRuins2_DullahanText:
	.string "Not bad, kiddo.$"

KuromisaRuins2_LiamText:
	.string "Gyarados! Use Dragon Dance!$"

KuromisaRuins2_LenaText:
	.string "Lucario! Use Bullet Punch!$"

KuromisaRuins2_OnTransition:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	compare VAR_LILYCOVE_CITY_STATE, 5
	goto_if_eq KuromisaRuins2_HideRival
	compare VAR_LILYCOVE_CITY_STATE, 6
	goto_if_eq KuromisaRuins2_MidBattle
	end

KuromisaRuins2_MidBattle:
	setobjectxyperm 6, 11, 9
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 8, 10, 8
	setobjectxyperm 9, 8, 8
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	end


KuromisaRuins2_HideRival:
	setobjectxyperm 9, 0, 0
	end

KuromisaRuins2_OnFrame:
	map_script_2 VAR_LILYCOVE_CITY_STATE, 5, KuromisaRuins2_DraconarixCoreCutscene
	.2byte 0

KuromisaRuins2_HideOrb:
	setmetatile 8, 5, METATILE_KuromisaRuins_EmptyBottomLeft, FALSE
	setmetatile 9, 5, METATILE_KuromisaRuins_Floor, FALSE
	setmetatile 10, 5, METATILE_KuromisaRuins_EmptyBottomRight, FALSE
	setmetatile 8, 4, METATILE_KuromisaRuins_EmptyTopLeft, FALSE
	setmetatile 9, 4, METATILE_KuromisaRuins_Floor, FALSE
	setmetatile 10, 4, METATILE_KuromisaRuins_EmptyTopRight, FALSE
	return


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
	addobject 9
	setobjectxyperm 9, 9, 14
	setobjectxy 9, 9, 14
	addobject 9
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
	applymovement 8, Common_Movement_FaceRight
	waitmovement 0
	applymovement 8, Common_Movement_ExclamationMark
	delay 16
	msgbox KuromisaRuins2_KanaeSeeLena, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	applymovement 9, Common_Movement_FaceRight
	applymovement 8, KuromisaRuins2_KanaeGoToGrunt
	waitmovement 0
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 6
	applymovement 6, Common_Movement_ExclamationMark
	delay 16
	waitmovement 6
	applymovement 8, KuromisaRuins2_KanaeGoToLena
	applymovement 6, KuromisaRuins2_GruntMove
	waitmovement 6
	msgbox KuromisaRuins2_KanaeHealLena, MSGBOX_AUTOCLOSE
	applymovement 7, Common_Movement_FaceUp
	waitmovement 7
	applymovement 8, KuromisaRuins2_KanaeRet
	waitmovement 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	applymovement 9, Common_Movement_FaceUp
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
	msgbox KuromisaRuins2_ThisMustBeCore MSGBOX_AUTOCLOSE
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	applymovement 4, Common_Movement_FaceDown
	waitmovement 4
	applymovement 2, Common_Movement_ExclamationMark
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, Common_Movement_ExclamationMark
	delay 16
	msgbox KuromisaRuins2_AngrbodaSeePLayer, MSGBOX_AUTOCLOSE
	waitmovement 0
	applymovement 1, Common_Movement_FaceDown
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	msgbox KuromisaRuins2_JormungandrSee, MSGBOX_AUTOCLOSE
	applymovement VAR_TEMP_4, KuromisaRuins2_ConfrontAngrboda
	applymovement OBJ_EVENT_ID_PLAYER, KuromisaRuins2_PanCamBack
	applymovement 8, KuromisaRuins2_Confront
	applymovement 9, KuromisaRuins2_Confront
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	setobjectxyperm VAR_TEMP_4, 0, 0
	setobjectxy VAR_TEMP_4, 0, 0
	removeobject VAR_TEMP_4
	applymovement 8, Common_Movement_FaceLeft
	msgbox KuromisaRuins2_KanaeHeal MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox KuromisaRuins2_KanaeComeToMeForHeal, MSGBOX_AUTOCLOSE
	setvar VAR_LILYCOVE_CITY_STATE, 6
	applymovement 8, Common_Movement_FaceUp
	goto KuromisaRuins2_KbluteBattle

KuromisaRuins2_KbluteNPC::
	lock
	faceplayer
	goto KuromisaRuins2_KbluteBattle

KuromisaRuins2_KbluteBattle::
	msgbox KuromisaRuins2_KbluteIntro, MSGBOX_DEFAULT
	call KuromisaRuins2_HideOrb
	trainerbattle_no_intro TRAINER_SHELLY_WEATHER_INSTITUTE, KuromisaRuins2_KbluteDefeat
	hideobjectat 1, MAP_KUROMISA_RUINS2
	special DrawWholeMapView
	applymovement 8, Common_Movement_ExclamationMark
	msgbox KuromisaRuins2KblutePostBattle, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	hideobjectat 2, MAP_KUROMISA_RUINS2
	hideobjectat 3, MAP_KUROMISA_RUINS2
	hideobjectat 4, MAP_KUROMISA_RUINS2
	hideobjectat 5, MAP_KUROMISA_RUINS2
	hideobjectat 6, MAP_KUROMISA_RUINS2
	fadescreen FADE_FROM_BLACK
	msgbox KuromisaRuins2_PostEv, MSGBOX_AUTOCLOSE
	setvar VAR_LILYCOVE_CITY_STATE, 7
	warpsilent MAP_RUINVEIL_CITY, 41, 49
	delay 64
	releaseall
	end
	
KuromisaRuins2_PostEv:
	.string "Lena: We need to go. Now.\p"
	.string "Kanae, get a hold of Nou asap.$"

KuromisaRuins2KblutePostBattle:
	.string "Kanae: The orb... It's gone...\p"
	.string "Liam: Jörmungandr's gone, too.\p"
	.string "Kirschblüte: Looks like we bought enough\n"
	.string "time for him to escape.\p"
	.string "Let's go, guys.$"

KuromisaRuins2_KbluteIntro:
	.string "Kirschblüte: So we meet again...\n"
	.string "Long time no see.$"

KuromisaRuins2_KbluteDefeat:
	.string "Ridiculous...$"


KuromisaRuins2_PanCamBack:
	walk_down
	walk_down
	face_up
	step_end

KuromisaRuins2_KanaeComeToMeForHeal:
	.string "Come to me if you need to heal at any\n"
	.string "point.$"

KuromisaRuins2_KanaeHeal:
	.string "Kanae: Let me heal your Pokémon.$"

KuromisaRuins2_Confront:
	walk_up
	step_end

KuromisaRuins2_JormungandrSee:
	.string "Jörmungandr: Always a thorn in my side.\p"
	.string "I don't have time to deal with them.\p"
	.string "Take care of them for me.$"

KuromisaRuins2_KanaeRet:
	walk_left
	walk_up
	step_end

KuromisaRuins2_KanaeHealLena:
	.string "Kanae: Let me heal your Pokémon, Lena.\p"
	.string "Lena: Thanks. I can take these two by\n"
	.string "myself.\p"
	.string "Go and stop them!$"

KuromisaRuins2_GruntMove:
	walk_up
	face_down
	step_end

KuromisaRuins2_KanaeGoToLena:
	walk_right
	step_end


KuromisaRuins2_KanaeGoToGrunt:
	walk_down
	face_right
	step_end

KuromisaRuins2_KanaeSeeLena:
	.string "Kanae: Lena?$"

KuromisaRuins2_AngrbodaSeePLayer:
	.string "Alexandr: Uhhhhh...\p"
	.string "Sir, I think we might have company...$"

KuromisaRuins2_ThisMustBeCore:
	.string "Jörmungandr: This... This must be it...\p"
	.string "With Draconarix's unleashed power,\n"
	.string "nobody will be able to stop me...$"

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





