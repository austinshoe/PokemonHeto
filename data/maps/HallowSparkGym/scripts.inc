HallowSparkGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HallowSparkGym_OnTransition
	.byte 0


HallowSparkGym_OnTransition:
	random 3
	switch VAR_RESULT
	case 0, HallowSparkGym_PatternSet1
	case 1, HallowSparkGym_PatternSet2
	case 2, HallowSparkGym_PatternSet3
	end

HallowSparkGym_PatternSet1:
	setvar VAR_TEMP_0, 1
	end

HallowSparkGym_PatternSet2:
	setvar VAR_TEMP_0, 2
	end

HallowSparkGym_PatternSet3:
	setvar VAR_TEMP_0, 3
	end

HallowSparkGym_PlayLights3::
	lock
	setvar VAR_TEMP_1, 0
	setvar VAR_UNUSED_0x4091, 1
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights3_Pattern1
	case 2, HallowSparkGym_Lights3_Pattern2
	case 3, HallowSparkGym_Lights3_Pattern3
	release
	end

HallowSparkGym_PlayLights5::
	lock
	setvar VAR_TEMP_1, 0
	setvar VAR_UNUSED_0x4091, 2
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights5_Pattern1
	case 2, HallowSparkGym_Lights5_Pattern2
	case 3, HallowSparkGym_Lights5_Pattern3
	release
	end

HallowSparkGym_Lights31::
	lock
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights31_Pattern12
	case 2, HallowSparkGym_Lights31_Pattern12
	case 3, HallowSparkGym_Lights31_Pattern3
	release
	end

HallowSparkGym_Lights32::
	lock
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights32_Pattern1
	case 2, HallowSparkGym_Lights32_Pattern2
	case 3, HallowSparkGym_Lights32_Pattern3
	release
	end

HallowSparkGym_Lights33::
	lock
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights33_Pattern1
	case 2, HallowSparkGym_Lights33_Pattern23
	case 3, HallowSparkGym_Lights33_Pattern23
	release
	end

HallowSparkGym_Lights51:
	lock
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights51_Pattern1
	case 2, HallowSparkGym_Lights51_Pattern2
	case 3, HallowSparkGym_Lights51_Pattern3
	release
	end

HallowSparkGym_Lights52:
	lock
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights52_Pattern1
	case 2, HallowSparkGym_Lights52_Pattern2
	case 3, HallowSparkGym_Lights52_Pattern3
	release
	end

HallowSparkGym_Lights53:
	lock
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights53_Pattern1
	case 2, HallowSparkGym_Lights53_Pattern2
	case 3, HallowSparkGym_Lights53_Pattern3
	release
	end

HallowSparkGym_Lights54:
	lock
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights54_Pattern1
	case 2, HallowSparkGym_Lights54_Pattern2
	case 3, HallowSparkGym_Lights54_Pattern3
	release
	end

HallowSparkGym_Lights55:
	lock
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights55_Pattern1
	case 2, HallowSparkGym_Lights55_Pattern2
	case 3, HallowSparkGym_Lights55_Pattern3
	release
	end

HallowSparkGym_Lights31_Pattern3:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End

HallowSparkGym_Lights31_Pattern12:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End

HallowSparkGym_Lights32_Pattern1:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End

HallowSparkGym_Lights32_Pattern2:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End

HallowSparkGym_Lights32_Pattern3:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End

HallowSparkGym_Lights33_Pattern1:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End

HallowSparkGym_Lights33_Pattern23:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End


HallowSparkGym_Lights51_Pattern1:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights51_Pattern2:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights51_Pattern3:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights52_Pattern1:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights52_Pattern2:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights52_Pattern3:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights53_Pattern1:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights53_Pattern2:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights53_Pattern3:
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights54_Pattern1:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights54_Pattern2:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights54_Pattern3:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights55_Pattern1:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights55_Pattern2:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights55_Pattern3:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights5_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights5_End

HallowSparkGym_Lights3_End:
	addvar VAR_TEMP_1, 1
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights3_YesNo
	release
	end

HallowSparkGym_Lights5_End:
	addvar VAR_TEMP_1, 1
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights5_YesNo
	release
	end

HallowSparkGym_Lights3_YesNo:
	setvar VAR_TEMP_1, 0
	goto_if_set FLAG_TEMP_1, HallowSparkGym_Lights3_Fail
	call HallowSparkGym_Lights3_Succeed
	clearflag FLAG_TEMP_1
	release
	end

HallowSparkGym_Lights5_YesNo:
	setvar VAR_TEMP_1, 0
	goto_if_set FLAG_TEMP_1, HallowSparkGym_Lights5_Fail
	call HallowSparkGym_Lights5_Succeed
	clearflag FLAG_TEMP_1
	release
	end

HallowSparkGym_Lights3_Fail:
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	clearflag FLAG_TEMP_1
	msgbox Text_HallowSparkGym_Lights_Fail, MSGBOX_DEFAULT
	release
	end

HallowSparkGym_Lights5_Fail:
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	clearflag FLAG_TEMP_1
	msgbox Text_HallowSparkGym_Lights_Fail, MSGBOX_DEFAULT
	release
	end

HallowSparkGym_Lights3_Succeed:
	msgbox Text_HallowSparkGym_Lights_Succeed, MSGBOX_DEFAULT
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 15, 32, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 16, 32, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 15, 33, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 16, 33, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 15, 34, METATILE_HallowSpark_Gym_Floor_Mid, FALSE
	setmetatile 16, 34, METATILE_HallowSpark_Gym_Floor_Mid, FALSE
	setmetatile 14, 34, METATILE_HallowSpark_Gym_Floor_Mid, FALSE
	setmetatile 17, 34, METATILE_HallowSpark_Gym_Floor_Mid, FALSE
	special DrawWholeMapView
	delay 16
	return

HallowSparkGym_Lights5_Succeed:
	msgbox Text_HallowSparkGym_Lights_Succeed, MSGBOX_DEFAULT
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	return

HallowSparkGym_Lights3_Pattern1:
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights3_Pattern2:
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights3_Pattern3:
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights5_Pattern1:
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights5_Pattern2:
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights5_Pattern3:
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 5, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 6, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 3, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 2, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 4, 32, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

Text_HallowSparkGym_Lights_Succeed:
	.string "You cracked the combo!$"

Text_HallowSparkGym_Lights_Fail:
	.string "That was the wrong combo!$"

Text_Button_Pressed:
	.string "You pressed the button.$"
