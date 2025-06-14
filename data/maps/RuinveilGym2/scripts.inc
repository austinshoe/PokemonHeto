RuinveilGym2_MapScripts::
	.byte 0

RuinveilGym2_VoiceInHead::
	setvar VAR_UNUSED_0x40A1, 1
	msgbox Text_RuinveilGym2_VoiceInHead, MSGBOX_AUTOCLOSE
	end

RuinveilGym2_VoiceInHead2::
	setvar VAR_UNUSED_0x40A1, 0
	msgbox Text_RuinveilGym2_VoiceInHead, MSGBOX_AUTOCLOSE
	end

Text_RuinveilGym2_VoiceInHead:
	.string "A voice in your head tells you to jump\n"
	.string "into the abyss.$"

RuinveilGym2_Puzzle1::
	goto_if_set FLAG_TEMP_1, RuinveilGym2_PuzzleEnd
	msgbox Text_RuinveilGym2_Puzzle1 MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RuinveilGym2_Puzzle1Correct
	msgbox Text_RuinveilGym2_WrongAnswer, MSGBOX_DEFAULT
	waitmessage
	delay 16
	closemessage
	goto RuinveilGymFail_JarBattle

RuinveilGym2_Puzzle1Correct:
	closemessage
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
	fadescreen FADE_TO_WHITE
	call RuinveilGym2_Puzzle1UpdateMap
	delay 32
	setflag FLAG_TEMP_1
	special DrawWholeMapView
	fadescreen FADE_FROM_WHITE
	delay 32
	end

RuinveilGym2_Puzzle2::
	goto_if_set FLAG_TEMP_2, RuinveilGym2_PuzzleEnd
	msgbox Text_RuinveilGym2_Puzzle2 MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RuinveilGym2_Puzzle2Correct
	msgbox Text_RuinveilGym2_WrongAnswer, MSGBOX_DEFAULT
	waitmessage
	delay 16
	closemessage
	goto RuinveilGymFail_JarBattle

RuinveilGym2_Puzzle2Correct:
	closemessage
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
	fadescreen FADE_TO_WHITE
	call RuinveilGym2_Puzzle2UpdateMap
	delay 32
	setflag FLAG_TEMP_2
	special DrawWholeMapView
	fadescreen FADE_FROM_WHITE
	delay 32
	end

RuinveilGym2_Puzzle3::
	goto_if_set FLAG_TEMP_3, RuinveilGym2_PuzzleEnd
	msgbox Text_RuinveilGym2_Puzzle3 MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq RuinveilGym2_Puzzle3Correct
	msgbox Text_RuinveilGym2_WrongAnswer, MSGBOX_DEFAULT
	waitmessage
	delay 16
	closemessage
	goto RuinveilGymFail_JarBattle

RuinveilGym2_Puzzle3Correct:
	closemessage
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
	fadescreen FADE_TO_WHITE
	call RuinveilGym2_Puzzle3UpdateMap
	delay 32
	setflag FLAG_TEMP_3
	special DrawWholeMapView
	fadescreen FADE_FROM_WHITE
	delay 32
	end
	
	

RuinveilGym2_PuzzleEnd::
	end

Text_RuinveilGym2_Puzzle1:
	.string "If you relive a moment exactly,\n"
	.string "is it still the same moment?$"

Text_RuinveilGym2_Puzzle2:
	.string "If the mirror cracks, does the\n"
	.string "reflection shatter too?$"

Text_RuinveilGym2_Puzzle3:
	.string "You turn away, yet you know what lies\n"
	.string "behind- did you see it?$"

Text_RuinveilGym2_WrongAnswer:
	.string "That was the wrong answer!\p"
	.string "Preparing punishment...$"

RuinveilGym2_Puzzle1UpdateMap:
	setmetatile 25, 29, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 29, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 27, 29, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 27, 28, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 27, 27, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 26, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 26, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 27, 26, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 25, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 25, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 27, 25, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 24, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 24, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 27, 24, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 24, 26, METATILE_RuinveilGym_TopRight, TRUE
	setmetatile 24, 25, METATILE_RuinveilGym_TopRight, TRUE
	setmetatile 28, 26, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 28, 25, METATILE_RuinveilGym_TopLeft, TRUE
	return


RuinveilGym2_Puzzle2UpdateMap:
	setmetatile 7, 35, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 8, 35, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 9, 35, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 7, 34, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 8, 34, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 9, 34, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 7, 33, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 8, 33, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 9, 33, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 7, 32, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 8, 32, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 9, 32, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 7, 31, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 8, 31, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 9, 31, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 7, 30, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 8, 30, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 9, 30, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 6, 30, METATILE_RuinveilGym_TopRight, TRUE
	setmetatile 6, 31, METATILE_RuinveilGym_TopRight, TRUE
	setmetatile 6, 32, METATILE_RuinveilGym_TopRight, TRUE
	setmetatile 10, 30, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 10, 31, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 10, 32, METATILE_RuinveilGym_TopLeft, TRUE
	return

RuinveilGym2_Puzzle3UpdateMap:
	setmetatile 24, 15, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 15, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 15, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 24, 14, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 15, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 14, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 24, 13, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 13, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 13, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 24, 12, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 12, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 12, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 24, 11, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 11, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 11, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 24, 10, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 25, 10, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 26, 10, METATILE_RuinveilGym_Floor, FALSE
	setmetatile 23, 11, METATILE_RuinveilGym_TopRight, TRUE
	setmetatile 23, 12, METATILE_RuinveilGym_TopBottomRight, TRUE
	setmetatile 27, 11, METATILE_RuinveilGym_TopLeft, TRUE
	setmetatile 27, 12, METATILE_RuinveilGym_TopBottomLeft, TRUE
	return
