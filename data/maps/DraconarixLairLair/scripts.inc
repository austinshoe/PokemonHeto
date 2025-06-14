DraconarixLairLair_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DraconarixLairLair_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, DraconarixLairLair_OnLoad
	.byte 0

DraconarixLairLair_OnTransition:
	call_if_unset FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, DraconarixLairLair_SetFloorNormal
	end

DraconarixLairLair_OnLoad:
	call_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, DraconarixLairLair_SetFloorDamaged
	end

DraconarixLairLair_SetFloorDamaged:
	setmetatile 24, 11, METATILE_volcano1_BoulderTopLeft, TRUE
	setmetatile 25, 11, METATILE_volcano1_BoulderTopRight, TRUE
	setmetatile 24, 12, METATILE_volcano1_BoulderBottomLeft, TRUE
	setmetatile 25, 12, METATILE_volcano1_BoulderBottomRight, TRUE
	setmetatile 24, 18, METATILE_volcano1_LavaHole1, FALSE
	setmetatile 18, 14, METATILE_volcano1_LavaHole1, FALSE
	setmetatile 12, 18, METATILE_volcano1_LavaHole2, FALSE
	setmetatile 17, 14, METATILE_volcano1_LavaHole2, FALSE
	setmetatile 18, 18, METATILE_volcano1_LavaHole3, FALSE
	setmetatile 17, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 18, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 19, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 20, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 21, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 22, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 23, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 17, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 18, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 19, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 20, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 21, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 22, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 23, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 17, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 18, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 19, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 20, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 21, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 22, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 23, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 16, 14, METATILE_volcano1_RightLava, TRUE
	setmetatile 16, 15, METATILE_volcano1_RightLava, TRUE
	setmetatile 16, 16, METATILE_volcano1_RightLava, TRUE
	setmetatile 24, 14 METATILE_volcano1_LeftLava, TRUE
	setmetatile 24, 15 METATILE_volcano1_LeftLava, TRUE
	setmetatile 24, 16 METATILE_volcano1_LeftLava, TRUE
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	return

DraconarixLairLair_SetFloorNormal:
	removeobject 18
	removeobject 19
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	return


MtEmberfallDraconarixLair_TriggerTop::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerMoveDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtEmberfallDraconarixLair_WeGottaGo, MSGBOX_DEFAULT
	closemessage
	applymovement 1, MtEmberfallDraconarixLair_StevenGoDown
	applymovement 2, MtEmberfallDraconarixLair_LenaGoDown
	applymovement 3, MtEmberfallDraconarixLair_LiamGoDown
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerGoDown
	waitmovement 1
	waitmovement 2
	waitmovement 3
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq MtEmberfallDraconarixLair_UpdatePlayerGFXGirl
	goto MtEmberfallDraconarixLair_UpdatePlayerGFXBoy

MtEmberfallDraconarixLair_TriggerBottom::
	lockall
	removeobject 18
	removeobject 19
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerMoveDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerMoveUp
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtEmberfallDraconarixLair_WeGottaGo, MSGBOX_DEFAULT
	closemessage
	applymovement 1, MtEmberfallDraconarixLair_StevenGoDown
	applymovement 2, MtEmberfallDraconarixLair_LenaGoDown
	applymovement 3, MtEmberfallDraconarixLair_LiamGoDown
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerGoDown
	waitmovement 1
	waitmovement 2
	waitmovement 3
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq MtEmberfallDraconarixLair_UpdatePlayerGFXGirl
	goto MtEmberfallDraconarixLair_UpdatePlayerGFXBoy

MtEmberfallDraconarixLair_UpdatePlayerGFXGirl:
	setvar VAR_TEMP_4, 10
	goto MtEmberfallDraconarixLair_TriggerPartTwo

MtEmberfallDraconarixLair_UpdatePlayerGFXBoy:
	setvar VAR_TEMP_4, 9
	goto MtEmberfallDraconarixLair_TriggerPartTwo

MtEmberfallDraconarixLair_TriggerPartTwo:
	addobject VAR_TEMP_4
	setobjectxyperm VAR_TEMP_4, 15, 16
	setobjectmovementtype VAR_TEMP_4, MOVEMENT_TYPE_FACE_RIGHT
	addobject VAR_TEMP_4
	delay 32
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamRight
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_ShinRecognize
	waitmessage
	applymovement 2, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_DraconarixOnlyInLegends
	waitmessage
	waitmovement 1
	waitmovement 2
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamLeftDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 5, Common_Movement_FaceLeft
	waitmovement 5
	applymovement 5, Common_Movement_ExclamationMark
	playse SE_PIN
	delay 16
	message MtEmberfallDraconarixLair_JormungandrSeeIntruders
	waitmessage
	waitmovement 5
	waitbuttonpress
	applymovement 1, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_ShinSoItWasYou
	waitmessage
	waitmovement 1
	applymovement 7, Common_Movement_ExclamationMark
	applymovement 8, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_AngrbodaRestrainDraconarix
	waitmessage
	waitmovement 7
	waitmovement 8
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_AngrbodaTakeCareOfThem
	waitmessage
	waitmovement 6
	closemessage
	applymovement 5, Common_Movement_FaceUp
	applymovement 6, MtEmberfallDraconarixLair_DullahanPullUp
	applymovement 7, MtEmberfallDraconarixLair_AlexandrAdjust
	applymovement 8, MtEmberfallDraconarixLair_KirschbluteAdjust
	waitmovement 7
	waitmovement 8
	addobject 16
	addobject 15
	addobject 14
	setobjectxyperm 16, 19, 16
	setobjectxyperm 15, 20, 16
	setobjectxyperm 14, 21, 16
	addobject 16
	addobject 15
	addobject 14
	delay 32
	setobjectgfx 16, OBJ_EVENT_GFX_LOTAD_DOLL
	setobjectgfx 15, OBJ_EVENT_GFX_LOTAD_DOLL
	setobjectgfx 14, OBJ_EVENT_GFX_LOTAD_DOLL
	applymovement 16, MtEmberfallDraconarixLair_PokemonJump
	applymovement 15, MtEmberfallDraconarixLair_PokemonJump
	applymovement 14, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 6
	applymovement VAR_TEMP_4, Common_Movement_FaceDown
	applymovement 1, Common_Movement_FaceDown
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	waitmovement 1
	waitmovement 2
	waitmovement 3
	waitmovement VAR_TEMP_4
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamBack
	waitmovement OBJ_EVENT_ID_PLAYER
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	removeobject VAR_TEMP_4
	setobjectxyperm VAR_TEMP_4, 38, 0
	removeobject VAR_TEMP_4
	delay 32
	message MtEmberfallDraconarixLair_PlayerTakeDullahan
	waitmessage
	closemessage
	applymovement 1, MtEmberfallDraconarixLair_ShinToGrunt
	applymovement 2, MtEmberfallDraconarixLair_LenaToGrunt
	applymovement 3, MtEmberfallDraconarixLair_LiamToGrunt
	waitmovement 3
	applymovement 11 Common_Movement_FaceUp
	waitmovement 2
	applymovement 12 Common_Movement_FaceUp
	waitmovement 1
	applymovement 13 Common_Movement_FaceUp
	waitmovement 13
	applymovement 11, Common_Movement_ExclamationMark
	applymovement 12, Common_Movement_ExclamationMark
	applymovement 13, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	msgbox MtEmberfallDraconarixLair_DullahanIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_5, MtEmberfallDraconarixLair_DullahanDefeat
	applymovement 11, Common_Movement_FaceUp
	applymovement 12, Common_Movement_FaceUp
	applymovement 13, Common_Movement_FaceUp
	applymovement 1, Common_Movement_FaceDown
	applymovement 2, Common_Movement_FaceDown
	applymovement 3, Common_Movement_FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq MtEmberfallDraconarixLair_UpdatePlayerGFXGirl2
	goto MtEmberfallDraconarixLair_UpdatePlayerGFXBoy2

MtEmberfallDraconarixLair_UpdatePlayerGFXGirl2:
	setvar VAR_TEMP_4, 10
	goto MtEmberfallDraconarixLair_TriggerPartThree

MtEmberfallDraconarixLair_UpdatePlayerGFXBoy2:
	setvar VAR_TEMP_4, 9
	goto MtEmberfallDraconarixLair_TriggerPartThree
	
MtEmberfallDraconarixLair_TriggerPartThree:
	applymovement VAR_TEMP_4, Common_Movement_FaceDown
	waitmovement VAR_TEMP_4
	message MtEmberfallDraconarixLair_DullahanPostDefeat
	waitmessage
	closemessage
	setobjectxyperm VAR_TEMP_4, 38, 0
	addobject VAR_TEMP_4
	applymovement VAR_TEMP_4, Common_Movement_FaceRight
	applymovement 6, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement VAR_TEMP_4
	waitmovement 6
	waitmovement OBJ_EVENT_ID_PLAYER
	setobjectxyperm VAR_TEMP_4, 15, 16
	addobject VAR_TEMP_4
	delay 32
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamRightDown
	waitmovement 0
	message MtEmberfallDraconarixLair_JormungandrTryCatch
	waitmessage
	closemessage
	delay 32
	removeobject 4
	addobject 17
	setobjectxyperm 17, 20, 15
	setobjectxy 17, 20, 15
	addobject 17
	delay 64
	applymovement 17, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 17
	delay 16
	applymovement 17, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 17
	delay 16
	removeobject 17
	addobject 4
	setobjectxyperm 4, 20, 15
	addobject 4
	delay 16
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 8
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 8
	applymovement 5, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_JormungandrTryCatch2
	waitmessage
	waitmovement 5
	closemessage
	delay 32
	removeobject 4
	addobject 17
	setobjectxyperm 17, 20, 15
	addobject 17
	delay 64
	applymovement 17, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 17
	delay 16
	applymovement 17, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 17
	delay 16
	playse SE_PIN
	delay 32
	removeobject 17
	removeobject 14
	removeobject 15
	removeobject 16
	message MtEmberfallDraconarixLair_JormungandrCatchSuccess
	waitmessage
	applymovement 7, Common_Movement_ExclamationMark
	applymovement 8, Common_Movement_ExclamationMark
	applymovement 6, Common_Movement_ExclamationMark
	applymovement 11, Common_Movement_FaceDown
	applymovement 12, Common_Movement_FaceDown
	applymovement 13, Common_Movement_FaceDown
	waitmovement 11
	waitmovement 12
	waitmovement 13
	applymovement 11, Common_Movement_ExclamationMark
	applymovement 12, Common_Movement_ExclamationMark
	applymovement 13, Common_Movement_ExclamationMark
	message MtEmberfallDraconarixLair_JormungandrAboutToBreak
	waitmessage
	waitmovement 0
	closemessage
	addobject 17
	setobjectxyperm 17, 20, 15
	addobject 17
	delay 32
	removeobject 17
	delay 16
	addobject 4
	setobjectxyperm 4, 20, 15
	addobject 4
	delay 32
	setvar VAR_0x8004, 3  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	setvar VAR_0x8004, 3  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	fadescreen FADE_TO_BLACK
	call DraconarixLairLair_SetFloorDamaged
	addobject 18
	addobject 19
	setobjectxyperm 17, 38, 0
	special DrawWholeMapView
	delay 16
	fadescreen FADE_FROM_BLACK
	delay 16
	applymovement 5, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_JormungandrDisbelief
	waitmessage
	waitmovement 5
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamBAckToOrig
	waitmovement OBJ_EVENT_ID_PLAYER
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	setobjectxyperm VAR_TEMP_4, 38, 0
	removeobject VAR_TEMP_4
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement 6, Common_Movement_FaceUp
	message MtEmberfallDraconarixLair_DullahanGottaGo
	waitmessage
	closemessage
	delay 16
	setvar VAR_SKY_PILLAR_STATE, 4
	warpsilent MAP_MT_EMBERFALL_CRATER, 0
	releaseall
	end


MtEmberfallDraconarixLair_PlayerMoveDown:
	walk_right
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	step_end

MtEmberfallDraconarixLair_WeGottaGo:
	.string "Nou: There's no time to waste.\n"
	.string "Let's stop them.$"

MtEmberfallDraconarixLair_StevenGoDown:
	walk_right
	walk_diag_southeast
	walk_diag_southeast
	walk_up
	walk_up
	face_right
	step_end

MtEmberfallDraconarixLair_LenaGoDown:
	walk_up
	walk_right
	walk_diag_southeast
	walk_diag_southeast
	walk_up
	face_right
	step_end

MtEmberfallDraconarixLair_LiamGoDown:
	walk_up
	walk_up
	walk_right
	walk_diag_southeast
	walk_diag_southeast
	face_right
	step_end

MtEmberfallDraconarixLair_PlayerGoDown:
	walk_up
	walk_up
	walk_right
	walk_diag_southeast
	walk_diag_southeast
	face_right
	step_end

MtEmberfallDraconarixLair_PanCamRight:
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

MtEmberfallDraconarixLair_ShinRecognize:
	.string "Nou: That- No way...\p"
	.string "$"

MtEmberfallDraconarixLair_DraconarixOnlyInLegends:
	.string "Lena: That's Draconarix...\n"
	.string "But I thought it was just a legend-\p"
	.string "Liam: If the legends are true, then the\n"
	.string "whole region is in danger!$"

MtEmberfallDraconarixLair_PlayerMoveUp:
	walk_up
	step_end

MtEmberfallDraconarixLair_PanCamLeftDown:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MtEmberfallDraconarixLair_JormungandrSeeIntruders:
	.string "???: Can't a man have a little privacy\n"
	.string "with his affairs?\p"
	.string "I see a pretender, a disgraceful traitor\n"
	.string "and two little monkeys...\p"
	.string "These must be the Viola and Caerulea\n"
	.string "kids you were talking about, Alexandr.$"

MtEmberfallDraconarixLair_ShinSoItWasYou:
	.string "Nou: So it was you behind everything.\p"
	.string "???: Miss me?\p"
	.string "Nou: Not in the slightest.\p"
	.string "Liam: I'm confused. Who's this old man?\p"
	.string "Lena: That's Jörmungandr.\n"
	.string "During the war, he was the leader of\l"
	.string "Hehehatia's forces.\p"
	.string "Jörmungandr: Well, I've moved on now.\n"
	.string "Angrboda is my sole focus now.\p"
	.string "Growing our forces, and terrorizing the\n"
	.string "pitiful northern vermin- it's all part\l"
	.string "of my plan to reinstitute Hehehatia and\l"
	.string "dominate this region.\p"
	.string "Kirschblüte, Alexandr!\p"
	.string "$"

MtEmberfallDraconarixLair_AngrbodaRestrainDraconarix:
	.string "Help me restrain Draconarix.\p"
	.string "Dullahan!\p"
	.string "$"

MtEmberfallDraconarixLair_AngrbodaTakeCareOfThem:
	.string "???: Yes, sir.\p"
	.string "Jörmungandr: Take care of our friends,\n"
	.string "will you?\p"
	.string "Dullahan: With pleasure.$"

MtEmberfallDraconarixLair_DullahanPullUp:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MtEmberfallDraconarixLair_AlexandrAdjust:
	walk_left
	walk_up
	step_end

MtEmberfallDraconarixLair_KirschbluteAdjust:
	walk_up
	step_end

MtEmberfallDraconarixLair_PokemonJump:
	jump_in_place_up
	delay_16
	jump_in_place_up
	step_end

MtEmberfallDraconarixLair_PanCamBack:
	walk_left
	face_down
	step_end

MtEmberfallDraconarixLair_PlayerTakeDullahan:
	.string "Lena: {PLAYER}, you'll need to\n"
	.string "hold off Dullahan while we take care of\l"
	.string "the other grunts!\p"
	.string "Nou: We need to stop them, fast!$"

MtEmberfallDraconarixLair_ShinToGrunt:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtEmberfallDraconarixLair_LenaToGrunt:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtEmberfallDraconarixLair_LiamToGrunt:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

MtEmberfallDraconarixLair_DullahanIntro:
	.string "Dullahan: Sorry kid, boss's orders.$"

MtEmberfallDraconarixLair_DullahanDefeat:
	.string "Sullied...$"

MtEmberfallDraconarixLair_DullahanPostDefeat:
	.string "Dullahan: So I lost...\p"
	.string "Doesn't matter. It looks like they're\n"
	.string "just about to finish up anyways.$"

MtEmberfallDraconarixLair_PanCamRightDown:
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

MtEmberfallDraconarixLair_JormungandrTryCatch:
	.string "Jörmungandr: It should be weak enough.\p"
	.string "Go! Ultra Ball!$"

MtEmberfallDraconarixLair_JormungandrTryCatch2:
	.string "So even that wasn't enough to catch it.\p"
	.string "Oh well.\p"
	.string "Go! Master Ball!$"

MtEmberfallDraconarixLair_JormungandrCatchSuccess:
	.string "Jörmungandr: Yes...\n"
	.string "With that, ladies and gentlemen, I have\l"
	.string "come one step closer to my end goal...\p"
	.string "Prepare for impact!\n"
	.string "$"

MtEmberfallDraconarixLair_JormungandrAboutToBreak:
	.string "I'm about to break through the bedrock!\p"
	.string "Draconarix, blast this place to pieces!$"

MtEmberfallDraconarixLair_JormungandrDisbelief:
	.string "Jörmungandr: What? No! It can't be!\p"
	.string "Even with Draconarix, the bedrock still\n"
	.string "refuses to break!\p"
	.string "Kirschblüte: Sir! I think we should\n"
	.string "retreat for now!\p"
	.string "There might be something that we haven't\n"
	.string "picked up on yet.\p"
	.string "Jörmungandr: That's true...\p"
	.string "Draconarix, Dig us out of here!$"

MtEmberfallDraconarixLair_PanCamBAckToOrig:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	face_right
	step_end

MtEmberfallDraconarixLair_DullahanGottaGo:
	.string "Dullahan: Welp, I guess I gotta go.\p"
	.string "Take care, kid... or not.$"
