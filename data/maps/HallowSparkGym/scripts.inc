HallowSparkGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HallowSparkGym_OnTransition
	.byte 0


HallowSparkGym_OnTransition:
	random 3
	switch VAR_RESULT
	case 1, HallowSparkGym_PatternSet1
	case 2, HallowSparkGym_PatternSet2
	case 3, HallowSparkGym_PatternSet3
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
	msgbox Text_Test1, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights3_Pattern1
	case 2, HallowSparkGym_Lights3_Pattern2
	case 3, HallowSparkGym_Lights3_Pattern3
	msgbox Text_Test2, MSGBOX_DEFAULT
	release
	end

HallowSparkGym_Lights31::
	lock
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
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
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights33_Pattern1
	case 2, HallowSparkGym_Lights33_Pattern23
	case 3, HallowSparkGym_Lights33_Pattern23
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

HallowSparkGym_Lights3_End:
	addvar VAR_TEMP_1, 1
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights3_YesNo
	release
	end

HallowSparkGym_Lights3_YesNo:
	setvar VAR_TEMP_1, 0
	goto_if_set FLAG_TEMP_1, HallowSparkGym_Lights3_Fail
	call HallowSparkGym_Lights3_Succeed
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

Text_HallowSparkGym_Lights_Succeed:
	.string "You cracked the combo!$"

Text_HallowSparkGym_Lights_Fail:
	.string "That was the wrong combo!$"

Text_Test1:
	.string "Test 1$"

Text_Test2:
	.string "Test 2$"

