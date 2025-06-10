MtEmberfallDraconarixLair_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmberfallDraconarixLair_OnTransition
	.byte 0

MtEmberfallDraconarixLair_OnTransition:
	call_if_set FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, MtEmberfallDraconarixLair_SetFloorDamaged
	end

MtEmberfallDraconarixLair_TriggerTop::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerMoveDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtEmberfallDraconarixLair_WeGottaGo, MSGBOX_DEFAULT
	closemessage
	applymovement 10, MtEmberfallDraconarixLair_StevenGoDown
	applymovement 11, MtEmberfallDraconarixLair_LenaGoDown
	applymovement 12, MtEmberfallDraconarixLair_LiamGoDown
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerGoDown
	waitmovement 10
	waitmovement 11
	waitmovement 12
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MtEmberfallDraconarixLair_UpdatePlayerGFX

MtEmberfallDraconarixLair_TriggerBottom::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerMoveDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerMoveUp
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtEmberfallDraconarixLair_WeGottaGo, MSGBOX_DEFAULT
	closemessage
	applymovement 10, MtEmberfallDraconarixLair_StevenGoDown
	applymovement 11, MtEmberfallDraconarixLair_LenaGoDown
	applymovement 12, MtEmberfallDraconarixLair_LiamGoDown
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PlayerGoDown
	waitmovement 10
	waitmovement 11
	waitmovement 12
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq MtEmberfallDraconarixLair_UpdatePlayerGFXGirl
	goto MtEmberfallDraconarixLair_UpdatePlayerGFXBoy

MtEmberfallDraconarixLair_UpdatePlayerGFXGirl:
	addobject 13
	setobjectgfx 13, OBJ_EVENT_GFX_MAY_NORMAL
	goto MtEmberfallDraconarixLair_TriggerPartTwo

MtEmberfallDraconarixLair_UpdatePlayerGFXBoy:
	addobject 13
	setobjectgfx 13, OBJ_EVENT_GFX_BRENDAN_NORMAL
	goto MtEmberfallDraconarixLair_TriggerPartTwo

MtEmberfallDraconarixLair_TriggerPartTwo:
	setobjectxyperm 13, 56, 16
	addobject 13
	delay 32
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamRight
	waitmovement 0
	applymovement 10, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_ShinRecognize
	waitmessage
	applymovement 11, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_DraconarixOnlyInLegends
	waitmessage
	waitmovement 10
	waitmovement 11
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamLeftDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 6, Common_Movement_FaceLeft
	waitmovement 6
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	delay 16
	message MtEmberfallDraconarixLair_JormungandrSeeIntruders
	waitmessage
	waitmovement 6
	applymovement 10, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_ShinSoItWasYou
	waitmessage
	waitmovement 10
	applymovement 7, Common_Movement_ExclamationMark
	applymovement 8, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_AngrbodaRestrainDraconarix
	waitmessage
	waitmovement 7
	waitmovement 8
	applymovement 9, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_AngrbodaTakeCareOfThem
	waitmessage
	waitmovement 9
	closemessage
	applymovement 6, Common_Movement_FaceUp
	applymovement 9, MtEmberfallDraconarixLair_DullahanPullUp
	applymovement 8, MtEmberfallDraconarixLair_AlexandrAdjust
	applymovement 7, MtEmberfallDraconarixLair_KirschbluteAdjust
	waitmovement 8
	waitmovement 7
	addobject 16
	addobject 15
	addobject 14
	setobjectxyperm 16, 60, 16
	setobjectxyperm 15, 61, 16
	setobjectxyperm 14, 62, 16
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
	waitmovement 9 
	applymovement 13, Common_Movement_FaceDown
	applymovement 10, Common_Movement_FaceDown
	applymovement 11, Common_Movement_FaceDown
	applymovement 12, Common_Movement_FaceDown
	waitmovement 10
	waitmovement 11
	waitmovement 12
	waitmovement 13
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamBack
	waitmovement OBJ_EVENT_ID_PLAYER
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	setobjectxyperm 13, 79, 0
	removeobject 13
	delay 32
	message MtEmberfallDraconarixLair_PlayerTakeDullahan
	waitmessage
	closemessage
	applymovement 10, MtEmberfallDraconarixLair_ShinToGrunt
	applymovement 11, MtEmberfallDraconarixLair_LenaToGrunt
	applymovement 12, MtEmberfallDraconarixLair_LiamToGrunt
	waitmovement 12
	applymovement 17 Common_Movement_FaceUp
	waitmovement 11
	applymovement 18 Common_Movement_FaceUp
	waitmovement 10
	applymovement 19 Common_Movement_FaceUp
	waitmovement 19
	applymovement 17, Common_Movement_ExclamationMark
	applymovement 18, Common_Movement_ExclamationMark
	applymovement 19, Common_Movement_ExclamationMark
	playse SE_PIN
	waitmovement 0
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, MtEmberfallDraconarixLair_DullahanIntro, MtEmberfallDraconarixLair_DullahanDefeat, MtEmberfallDraconarixLair_TriggerSegue

MtEmberfallDraconarixLair_TriggerSegue:
	message MtEmberfallDraconarixLair_DullahanPostDefeat
	waitmessage
	closemessage
	setobjectxyperm 13, 79, 0
	addobject 13
	applymovement 13, Common_Movement_FaceRight
	applymovement 9, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq MtEmberfallDraconarixLair_UpdatePlayerGFXGirl2
	goto MtEmberfallDraconarixLair_UpdatePlayerGFXBoy2

MtEmberfallDraconarixLair_UpdatePlayerGFXGirl2:
	addobject 13
	setobjectgfx 13, OBJ_EVENT_GFX_MAY_NORMAL
	goto MtEmberfallDraconarixLair_TriggerPartThree

MtEmberfallDraconarixLair_UpdatePlayerGFXBoy2:
	addobject 13
	setobjectgfx 13, OBJ_EVENT_GFX_BRENDAN_NORMAL
	goto MtEmberfallDraconarixLair_TriggerPartThree

MtEmberfallDraconarixLair_TriggerPartThree:
	setobjectxyperm 13, 56, 16
	addobject 13
	delay 32
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamRightDown
	waitmovement 0
	message MtEmberfallDraconarixLair_JormungandrTryCatch
	waitmessage
	closemessage
	delay 32
	setobjectgfx 1, OBJ_EVENT_GFX_ITEM_BALL
	delay 64
	applymovement 1, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 1
	delay 16
	applymovement 1, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 1
	delay 16
	setobjectgfx 1, OBJ_EVENT_GFX_GROUDON_FRONT
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
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_JormungandrTryCatch2
	waitmessage
	waitmovement 6
	closemessage
	delay 32
	setobjectgfx 1, OBJ_EVENT_GFX_ITEM_BALL
	delay 64
	applymovement 1, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 1
	delay 16
	applymovement 1, MtEmberfallDraconarixLair_PokemonJump
	waitmovement 1
	delay 16
	playse SE_PIN
	delay 32
	removeobject 1
	removeobject 14
	removeobject 15
	removeobject 16
	message MtEmberfallDraconarixLair_JormungandrCatchSuccess
	waitmessage
	applymovement 7, Common_Movement_ExclamationMark
	applymovement 8, Common_Movement_ExclamationMark
	applymovement 9, Common_Movement_ExclamationMark
	applymovement 17, Common_Movement_FaceDown
	applymovement 18, Common_Movement_FaceDown
	applymovement 19, Common_Movement_FaceDown
	waitmovement 17
	waitmovement 18
	waitmovement 19
	applymovement 17, Common_Movement_ExclamationMark
	applymovement 18, Common_Movement_ExclamationMark
	applymovement 19, Common_Movement_ExclamationMark
	message MtEmberfallDraconarixLair_JormungandrAboutToBreak
	waitmessage
	waitmovement 0
	closemessage
	addobject 1
	setobjectgfx 1, OBJ_EVENT_GFX_ITEM_BALL
	delay 32
	setobjectgfx 1, OBJ_EVENT_GFX_GROUDON_FRONT
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
	delay 16
	fadescreen FADE_TO_BLACK
	waitstate
	call MtEmberfallDraconarixLair_SetFloorDamaged
	delay 16
	fadescreen FADE_FROM_BLACK
	delay 16
	applymovement 6, Common_Movement_ExclamationMark
	playse SE_PIN
	message MtEmberfallDraconarixLair_JormungandrDisbelief
	waitmessage
	waitmovement 6
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallDraconarixLair_PanCamBAckToOrig
	waitmovement OBJ_EVENT_ID_PLAYER
	showobjectat OBJ_EVENT_ID_PLAYER, 0
	setobjectxyperm 13, 79, 0
	removeobject 13
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	applymovement 9, Common_Movement_FaceUp
	message MtEmberfallDraconarixLair_DullahanGottaGo
	waitmessage
	closemessage
	delay 16
	setvar VAR_SKY_PILLAR_STATE, 4
	warpsilent MAP_MT_EMBERFALL_CRATER, 0
	releaseall
	end




MtEmberfallDraconarixLair_SetFloorDamaged:
	setmetatile 65, 11, METATILE_volcano1_BoulderTopLeft, TRUE
	setmetatile 66, 11, METATILE_volcano1_BoulderTopRight, TRUE
	setmetatile 65, 12, METATILE_volcano1_BoulderBottomLeft, TRUE
	setmetatile 66, 12, METATILE_volcano1_BoulderBottomRight, TRUE
	setmetatile 65, 18, METATILE_volcano1_LavaHole1, FALSE
	setmetatile 59, 14, METATILE_volcano1_LavaHole1, FALSE
	setmetatile 66, 11, METATILE_volcano1_LavaHole1, FALSE
	setmetatile 53, 18, METATILE_volcano1_LavaHole2, FALSE
	setmetatile 58, 14, METATILE_volcano1_LavaHole2, FALSE
	setmetatile 59, 18, METATILE_volcano1_LavaHole3, FALSE
	setmetatile 58, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 59, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 60, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 61, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 62, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 63, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 64, 14, METATILE_volcano1_Lava, TRUE
	setmetatile 58, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 59, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 60, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 61, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 62, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 63, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 64, 15, METATILE_volcano1_Lava, TRUE
	setmetatile 58, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 59, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 60, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 61, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 62, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 63, 16, METATILE_volcano1_Lava, TRUE
	setmetatile 64, 16, METATILE_volcano1_Lava, TRUE
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	return


MtEmberfallDraconarixLair_PlayerMoveDown:
	walk_right
	walk_diag_southeast
	walk_diag_southeast
	walk_diag_southeast
	step_end

MtEmberfallDraconarixLair_WeGottaGo:
	.string "Shin: There's no time to waste.\n"
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
	.string "Shin: That- No way...\p"
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
	.string "Shin: So it was you behind everything.\p"
	.string "???: Miss me?\p"
	.string "Shin: Not in the slightest.\p"
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
	.string "Shin: We need to stop them, fast!$"

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

MtEmberfallDraconarixLair_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, Text_MtEmberfallDraconarixLair_Grunt1, TextMtEmberfallDraconarixLair_Grunt1Defeat
	msgbox MtEmberfallDraconarixLair_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt1:
	.string "You shouldn't be here!\n"
	.string "Leave now or face my wrath!$"

TextMtEmberfallDraconarixLair_Grunt1Defeat:
	.string "Gah! I can't believe I lost!\p"
	.string "I should have known better than to\n"
	.string "mess with you!$"

MtEmberfallDraconarixLair_Grunt1PostBattle:
	.string "I hope boss doesn't kill me...$"

MtEmberfallDraconarixLair_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, Text_MtEmberfallDraconarixLair_Grunt2, TextMtEmberfallDraconarixLair_Grunt2Defeat
	msgbox MtEmberfallDraconarixLair_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt2:
	.string "You think you can just waltz in here?\p"
	.string "I'll show you what happens to\n"
	.string "intruders!$"

TextMtEmberfallDraconarixLair_Grunt2Defeat:
	.string "Damn it!$"

MtEmberfallDraconarixLair_Grunt2PostBattle:
	.string "I guess you CAN just waltz in here...$"

MtEmberfallDraconarixLair_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, Text_MtEmberfallDraconarixLair_Grunt3, TextMtEmberfallDraconarixLair_Grunt3Defeat
	msgbox MtEmberfallDraconarixLair_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt3:
	.string "Prepare to be crushed!$"

TextMtEmberfallDraconarixLair_Grunt3Defeat:
	.string "Crushing...$"

MtEmberfallDraconarixLair_Grunt3PostBattle:
	.string "I was not prepared to be crushed...$"

MtEmberfallDraconarixLair_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, Text_MtEmberfallDraconarixLair_Grunt4, TextMtEmberfallDraconarixLair_Grunt4Defeat
	msgbox MtEmberfallDraconarixLair_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt4:
	.string "I gotta stop you!$"

TextMtEmberfallDraconarixLair_Grunt4Defeat:
	.string "Ts tragic...$"

MtEmberfallDraconarixLair_Grunt4PostBattle:
	.string "I hope I bought enough time for them.$"

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


