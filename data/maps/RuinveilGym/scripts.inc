RuinveilGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RuinveilGym_OnTransition
	.byte 0

RuinveilGym_OnTransition::
	setvar VAR_UNUSED_0x40A1, 0
	end

RuinveilGym_Kanae::
	trainerbattle_single TRAINER_WINONA_1, RuinveilGym_KanaeIntro, RuinveilGym_KanaeDefeat, RuinveilGym_KanaeDefeated
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, RuinveilGym_KanaeDefeated_GivePsychic2
	msgbox RuinveilGym_KanaePostBattle, MSGBOX_DEFAULT
	release
	end

RuinveilGym_KanaeDefeated:
	message RuinveilGym_ReceivedVeilBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RuinveilGym_ExplainVeilBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	call RuinveilGym_KanaeDefeated_GivePsychic
	release
	end

RuinveilGym_KanaeDefeated_GivePsychic2::
	giveitem ITEM_TM_PSYCHIC
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox RuinveilGym_KanaeExplainPsychic, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	release
	end

RuinveilGym_KanaeDefeated_GivePsychic::
	giveitem ITEM_TM_PSYCHIC
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox RuinveilGym_KanaeExplainPsychic, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	return

RuinveilGym_ReceivedVeilBadge:
	.string "{PLAYER} received the VEIL BADGE\n"
	.string "from Kanae.$"

RuinveilGym_ExplainVeilBadgeTakeThis:
	.string "Kanae: With the VEIL BADGE, you'll be\n"
	.string "to use the HM move Strength outside of\l"
	.string "battle.\p"
	.string "And this…\n"
	.string "This is a gift from me.$"

RuinveilGym_KanaeExplainPsychic:
	.string "This TM contains the move Psychic.\p"
	.string "It's a strong, reliable psychic type\l"
	.string "move.\p"
	.string "Congratulations.$"


RuinveilGym_KanaeIntro:
	.string "Kanae: You're the kid that was with\n"
	.string "Nou back there…\p"
	.string "Welcome to the Ruinveil City Gym.\p"
	.string "I've heard a lot about you from\n"
	.string "Nou, Lena, and the other Gym Leaders.\p"
	.string "The city… ruins… they judge you…\n"
	.string "They tell me things too…\p"
	.string "Only in the darkness can true clarity\n"
	.string "emerge…$"

RuinveilGym_KanaeDefeat:
	.string "Walk the path of reason and instinct.$"

RuinveilGym_KanaePostBattle:
	.string "How did you like the puzzles?\n"
	.string "My assistant, Chet Gippittee, came up\l"
	.string "most of them...\p"
	.string "He's a mysterious, person...\n"
	.string "Come to think of it, I think he's on\l"
	.string "vacation right now...$"

RuinveilGym_GymGuide::
	lock
	faceplayer
	msgbox Text_RuinveilGym_GymGuide, MSGBOX_DEFAULT
	release
	end

RuinveilGym_SumAndModHint::
	lock
	faceplayer
	msgbox Text_RuinveilGymPuzzle1_Hint, MSGBOX_DEFAULT
	release
	end

RuinveilGym_SumAndModTrigger::
	lockall
	@ random 4
	@ setvar VAR_TEMP_1, VAR_RESULT
	@ random 4
	@ setvar VAR_TEMP_2, VAR_RESULT
	@ random 4
	@ setvar VAR_TEMP_3, VAR_RESULT

	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, 2
	setvar VAR_TEMP_3, 3

	setvar VAR_UNUSED_0x4091, 0
	delay 16
	addvar VAR_UNUSED_0x4091, VAR_TEMP_1
	addvar VAR_UNUSED_0x4091, VAR_TEMP_2
	addvar VAR_UNUSED_0x4091, VAR_TEMP_3
	addvar VAR_UNUSED_0x4091, 3
	goto RuinveilGym_SetNumberMetatiles1


RuinveilGym_SumAndModTrigger2:
	setvar VAR_0x8004, 5  @ vertical pan
	setvar VAR_0x8005, 5  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 16
	setvar VAR_0x8004, 5  @ vertical pan
	setvar VAR_0x8005, 5  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	delay 16
	fadescreen FADE_TO_WHITE
	call RuinveilGym_SumAndModUpdateFloor
	delay 32
	special DrawWholeMapView
	fadescreen FADE_FROM_WHITE
	goto RuinveilGym_ModFour

RuinveilGym_ModFour:
	compare VAR_UNUSED_0x4091, 4
	goto_if_ge RuinveilGym_SubFour
	setvar VAR_TEMP_F, 1
	releaseall
	end

RuinveilGym_SubFour:
	subvar VAR_UNUSED_0x4091, 4
	goto RuinveilGym_ModFour

RuinveilGym_SetNumberMetatiles1::
	compare VAR_TEMP_1, 0
	goto_if_eq RuinveilGym_SetNumberMetatiles11
	compare VAR_TEMP_1, 1
	goto_if_eq RuinveilGym_SetNumberMetatiles12
	compare VAR_TEMP_1, 2
	goto_if_eq RuinveilGym_SetNumberMetatiles13
	setvar VAR_TEMP_1, METATILE_RuinveilGym_Four
	goto RuinveilGym_SetNumberMetatiles2

RuinveilGym_SetNumberMetatiles11:
	setvar VAR_TEMP_1, METATILE_RuinveilGym_One
	goto RuinveilGym_SetNumberMetatiles2

RuinveilGym_SetNumberMetatiles12:
	setvar VAR_TEMP_1, METATILE_RuinveilGym_Two
	goto RuinveilGym_SetNumberMetatiles2

RuinveilGym_SetNumberMetatiles13:
	setvar VAR_TEMP_1, METATILE_RuinveilGym_Three
	goto RuinveilGym_SetNumberMetatiles2

RuinveilGym_SetNumberMetatiles2::
	compare VAR_TEMP_2, 0
	goto_if_eq RuinveilGym_SetNumberMetatiles21
	compare VAR_TEMP_2, 1
	goto_if_eq RuinveilGym_SetNumberMetatiles22
	compare VAR_TEMP_2, 2
	goto_if_eq RuinveilGym_SetNumberMetatiles23
	setvar VAR_TEMP_2, METATILE_RuinveilGym_Four
	goto RuinveilGym_SetNumberMetatiles3

RuinveilGym_SetNumberMetatiles21:
	setvar VAR_TEMP_2, METATILE_RuinveilGym_One
	goto RuinveilGym_SetNumberMetatiles3

RuinveilGym_SetNumberMetatiles22:
	setvar VAR_TEMP_2, METATILE_RuinveilGym_Two
	goto RuinveilGym_SetNumberMetatiles3

RuinveilGym_SetNumberMetatiles23:
	setvar VAR_TEMP_2, METATILE_RuinveilGym_Three
	goto RuinveilGym_SetNumberMetatiles3

RuinveilGym_SetNumberMetatiles3::
	compare VAR_TEMP_3, 0
	goto_if_eq RuinveilGym_SetNumberMetatiles31
	compare VAR_TEMP_3, 1
	goto_if_eq RuinveilGym_SetNumberMetatiles32
	compare VAR_TEMP_3, 2
	goto_if_eq RuinveilGym_SetNumberMetatiles33
	setvar VAR_TEMP_3, METATILE_RuinveilGym_Four
	goto RuinveilGym_SumAndModTrigger2

RuinveilGym_SetNumberMetatiles31:
	setvar VAR_TEMP_3, METATILE_RuinveilGym_One
	goto RuinveilGym_SumAndModTrigger2

RuinveilGym_SetNumberMetatiles32:
	setvar VAR_TEMP_3, METATILE_RuinveilGym_Two
	goto RuinveilGym_SumAndModTrigger2

RuinveilGym_SetNumberMetatiles33:
	setvar VAR_TEMP_3, METATILE_RuinveilGym_Three
	goto RuinveilGym_SumAndModTrigger2

RuinveilGym_SumAndModUpdateFloor:
	setmetatile 17, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 18, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 19, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 20, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 21, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 22, 28, METATILE_RuinveilGym_Floor, FALSE

	setmetatile 28, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 29, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 30, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 31, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 32, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 33, 28, METATILE_RuinveilGym_Floor, FALSE

	setmetatile 17, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 18, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 19, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 20, 27, VAR_TEMP_1, FALSE

	setmetatile 21, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 22, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 23, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 24, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 27, VAR_TEMP_2, FALSE

	setmetatile 26, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 27, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 28, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 29, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 30, 27, VAR_TEMP_3, FALSE

	setmetatile 31, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 32, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 33, 27, METATILE_RuinveilGym_Floor, FALSE

	setmetatile 17, 26, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 18, 26, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 19, 26, METATILE_RuinveilGym_WallLeftBottom, TRUE
	setmetatile 20, 26, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 21, 26, METATILE_RuinveilGym_WallRightBottom, TRUE

	setmetatile 22, 26, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 23, 26, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 24, 26, METATILE_RuinveilGym_WallLeftBottom, TRUE
	setmetatile 25, 26, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 26, 26, METATILE_RuinveilGym_WallRightBottom, TRUE

	setmetatile 27, 26, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 28, 26, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 29, 26, METATILE_RuinveilGym_WallLeftBottom, TRUE
	setmetatile 30, 26, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 31, 26, METATILE_RuinveilGym_WallRightBottom, TRUE

	setmetatile 32, 26, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 33, 26, METATILE_RuinveilGym_PurplePath, FALSE

	setmetatile 17, 25, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 18, 25, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 19, 25, METATILE_RuinveilGym_WallTopLeft, TRUE
	setmetatile 20, 25, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 21, 25, METATILE_RuinveilGym_WallTopRight, TRUE

	setmetatile 22, 25, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 23, 25, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 24, 25, METATILE_RuinveilGym_WallTopLeft, TRUE
	setmetatile 25, 25, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 26, 25, METATILE_RuinveilGym_WallTopRight, TRUE

	setmetatile 27, 25, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 28, 25, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 29, 25, METATILE_RuinveilGym_WallTopLeft, TRUE
	setmetatile 30, 25, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 31, 25, METATILE_RuinveilGym_WallTopRight, TRUE

	setmetatile 32, 25, METATILE_RuinveilGym_PurplePath, FALSE
	setmetatile 33, 25, METATILE_RuinveilGym_PurplePath, FALSE

	setmetatile 17, 24, METATILE_RuinveilGym_YellowPath, FALSE
	setmetatile 18, 24, METATILE_RuinveilGym_YellowPath, FALSE
	setmetatile 19, 24, METATILE_RuinveilGym_TopBottomLeft, TRUE
	setmetatile 20, 24, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 21, 24, METATILE_RuinveilGym_TopBottomRight, TRUE

	setmetatile 22, 24, METATILE_RuinveilGym_YellowPath, FALSE
	setmetatile 23, 24, METATILE_RuinveilGym_YellowPath, FALSE
	setmetatile 24, 24, METATILE_RuinveilGym_TopBottomLeft, TRUE
	setmetatile 25, 24, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 26, 24, METATILE_RuinveilGym_TopBottomRight, TRUE

	setmetatile 27, 24, METATILE_RuinveilGym_YellowPath, FALSE
	setmetatile 28, 24, METATILE_RuinveilGym_YellowPath, FALSE
	setmetatile 29, 24, METATILE_RuinveilGym_TopBottomLeft, TRUE
	setmetatile 30, 24, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 31, 24, METATILE_RuinveilGym_TopBottomRight, TRUE

	setmetatile 32, 24, METATILE_RuinveilGym_YellowPath, FALSE
	setmetatile 33, 24, METATILE_RuinveilGym_YellowPath, FALSE

	setmetatile 17, 23, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 18, 23, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 19, 23, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 20, 23, METATILE_RuinveilGym_Top, TRUE
	setmetatile 21, 23, METATILE_RuinveilGym_TopRight, TRUE

	setmetatile 22, 23, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 23, 23, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 24, 23, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 25, 23, METATILE_RuinveilGym_Top, TRUE
	setmetatile 26, 23, METATILE_RuinveilGym_TopRight, TRUE

	setmetatile 27, 23, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 28, 23, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 29, 23, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 30, 23, METATILE_RuinveilGym_Top, TRUE
	setmetatile 31, 23, METATILE_RuinveilGym_TopRight, TRUE

	setmetatile 32, 23, METATILE_RuinveilGym_WallBottom, TRUE
	setmetatile 33, 23, METATILE_RuinveilGym_WallBottom, TRUE

	setmetatile 17, 22, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 18, 22, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 19, 22, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 20, 22, METATILE_RuinveilGym_Top, TRUE
	setmetatile 21, 22, METATILE_RuinveilGym_TopRight, TRUE

	setmetatile 22, 22, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 23, 22, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 24, 22, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 25, 22, METATILE_RuinveilGym_Top, TRUE
	setmetatile 26, 22, METATILE_RuinveilGym_TopRight, TRUE

	setmetatile 27, 22, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 28, 22, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 29, 22, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 30, 22, METATILE_RuinveilGym_Top, TRUE
	setmetatile 31, 22, METATILE_RuinveilGym_TopRight, TRUE

	setmetatile 32, 22, METATILE_RuinveilGym_WallTop, TRUE
	setmetatile 33, 22, METATILE_RuinveilGym_WallTop, TRUE

	setmetatile 17, 21, METATILE_RuinveilGym_TopBottomLeft, TRUE
	setmetatile 18, 21, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 19, 21, METATILE_RuinveilGym_TopCornerLeft, TRUE
	setmetatile 20, 21, METATILE_RuinveilGym_Top, TRUE
	setmetatile 21, 21, METATILE_RuinveilGym_TopCornerRight, TRUE

	setmetatile 22, 21, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 23, 21, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 24, 21, METATILE_RuinveilGym_TopCornerLeft, TRUE
	setmetatile 25, 21, METATILE_RuinveilGym_Top, TRUE
	setmetatile 26, 21, METATILE_RuinveilGym_TopCornerRight, TRUE

	setmetatile 27, 21, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 28, 21, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 29, 21, METATILE_RuinveilGym_TopCornerLeft, TRUE
	setmetatile 30, 21, METATILE_RuinveilGym_Top, TRUE
	setmetatile 31, 21, METATILE_RuinveilGym_TopCornerRight, TRUE

	setmetatile 32, 21, METATILE_RuinveilGym_TopBottom, TRUE
	setmetatile 33, 21, METATILE_RuinveilGym_TopBottomRight, TRUE

	setmetatile 17, 20, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 18, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 19, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 20, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 21, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 22, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 23, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 24, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 25, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 26, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 27, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 28, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 29, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 30, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 31, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 32, 20, METATILE_RuinveilGym_Top, TRUE
	setmetatile 33, 20, METATILE_RuinveilGym_TopRight, TRUE

	setmetatile 17, 19, METATILE_RuinveilGym_EmptyTopLeft, TRUE
	setmetatile 18, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 19, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 20, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 21, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 22, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 23, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 24, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 25, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 26, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 27, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 28, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 29, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 30, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 31, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 32, 19, METATILE_RuinveilGym_EmptyTop, TRUE
	setmetatile 33, 19, METATILE_RuinveilGym_EmptyTopRight, TRUE

	return


RuinveilGym_SumAndModWarp1::
	setvar VAR_TEMP_F, 0
	compare VAR_UNUSED_0x4091, 0
	goto_if_eq RuinveilGym_SumAndModWarpNextStage
	goto RuinveilGym_SumAndModWarpFail


RuinveilGym_SumAndModWarp2::
	setvar VAR_TEMP_F, 0
	compare VAR_UNUSED_0x4091, 1
	goto_if_eq RuinveilGym_SumAndModWarpNextStage
	goto RuinveilGym_SumAndModWarpFail


RuinveilGym_SumAndModWarp3::
	setvar VAR_TEMP_F, 0
	compare VAR_UNUSED_0x4091, 2
	goto_if_eq RuinveilGym_SumAndModWarpNextStage
	goto RuinveilGym_SumAndModWarpFail


RuinveilGym_SumAndModWarp4::
	setvar VAR_TEMP_F, 0
	compare VAR_UNUSED_0x4091, 2
	goto_if_eq RuinveilGym_SumAndModWarpNextStage
	goto RuinveilGym_SumAndModWarpFail

RuinveilGym_SumAndModWarpFail::
	warpsilent MAP_RUINVEIL_GYM_FAIL, 2, 4
	end

RuinveilGym_SumAndModWarpNextStage::
	warpsilent MAP_RUINVEIL_GYM2, 0
	end
	
Text_RuinveilGymPuzzle1_Hint:
	.string "Step upon the glowing rune,\n"
	.string "And watch the sigils shift and tune.\l"
	.string "Three sigils carved on stone,\l"
	.string "In ancient script,\l"
	.string "their truths are shown.\l"
	.string "Add their values, let none stray-\l"
	.string "Take what's left when four holds sway.\l"
	.string "The path you seek, the gold shall heed,\l"
	.string "The mod of four reveals the lead.$"

Text_RuinveilGym_GymGuide:
	.string "Hello there, champ!\n"
	.string "Welcome to the gym of Ruinveil City\p"
	.string "The gym leader, Kanae, specializes in\n"
	.string "multiple different types, specifically\l"
	.string "the Dark and Psychic Types.\p"
	.string "She also battles in doubles format.\p"
	.string "As you make your way across the gym to\n"
	.string "her, you'll be forced to solve riddles\l"
	.string "and get through traps.\p"
	.string "Good luck, challenger!$"


