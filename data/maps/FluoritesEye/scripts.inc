FluoritesEye_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FluoritesEye_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FluoritesEye_OnFrame
	.byte 0

FluoritesEye_OnTransition::
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, FluoritesEye_BypassActivate
	end

FluoritesEye_BypassActivate:
	setvar VAR_TEMP_0, 1
	return
FluoritesEye_OnFrame::
	map_script_2 VAR_TEMP_0, 0, FluoritesEye_PlayerActivate_Crystals
	.2byte 0

FluoritesEye_OldMan::
	lock
	setflag FLAG_RECEIVED_DEVON_SCOPE
	release
	end

FluoritesEye_PlayerActivate_Crystals:
	lockall
	setvar VAR_TEMP_0, 1
	msgbox Text_FluoritesEye_PlayerActivate_Crystals, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FluoritesEye_Activated_Crystals
	releaseall
	end

FluoritesEye_Activated_Crystals:
	msgbox Text_FluoritesEye_Activated_Crystals, MSGBOX_DEFAULT
	playse SE_PIN
	call FluoritesEye_Activate_Crystals
	special DrawWholeMapView
	releaseall
	end

FluoritesEye_Activate_Crystals:
    setmetatile 13, 33, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 13, 32, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 17, 34, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 17, 33, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 7, 10, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 7, 9, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 24, 8, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 24, 7, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 29, 13, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 29, 12, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 29, 13, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 29, 12, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 33, 17, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 33, 16, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 36, 35, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 36, 34, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 38, 33, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 38, 32, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 52, 1, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 52, 0, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 54, 2, METATILE_FluoritesEye_Fluorite_Big_Bottom, TRUE
	setmetatile 54, 1, METATILE_FluoritesEye_Fluorite_Big_Top, TRUE
	setmetatile 15, 54, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 20, 52, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 20, 49, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 21, 50, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 21, 54, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 23, 44, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 23, 45, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 21, 42, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 29, 42, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 53, 51, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 52, 49, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 56, 47, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 56, 44, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 44, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 45, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 39, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 40, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 52, 41, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 50, 39, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 51, 36, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 51, 37, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 50, 35, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 33, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 52, 33, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 53, 31, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 30, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 52, 29, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 56, 27, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 25, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 23, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 21, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 56, 24, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 57, 14, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 59, 11, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 9, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 58, 9, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 54, 7, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 57, 5, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 56, 4, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 36, 21, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 30, 16, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 31, 14, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 29, 15, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 26, 10, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 27, 10, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 28, 8, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 21, 8, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 29, 24, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 29, 25, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 29, 28, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 31, 28, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 32, 29, METATILE_FluoritesEye_Fluorite_Left_Left_1, TRUE
	setmetatile 16, 55, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 18, 51, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 19, 56, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 22, 48, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 22, 44, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 24, 46, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 26, 40, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 30, 43, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 52, 50, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 54, 51, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 55, 46, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 55, 45, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 56, 42, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 52, 42, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 53, 40, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 50, 38, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 52, 37, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 50, 36, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 54, 35, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 53, 32, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 54, 31, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 52, 30, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 56, 28, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 55, 26, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 56, 26, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 55, 23, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 57, 20, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 55, 19, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	setmetatile 57, 17, METATILE_FluoritesEye_Fluorite_Left_Left_2, TRUE
	return

Text_FluoritesEye_PlayerActivate_Crystals:
	.string "The rocks around you seem to be\n"
	.string "resonating with your Crystal Flute!\p"
	.string "Would you like to play the flute?$"

Text_FluoritesEye_Activated_Crystals:
	.string "The rocks are reacting to your music!$"