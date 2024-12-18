HallowSparkGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HallowSparkGym_OnTransition
	.byte 0


HallowSparkGym_OnTransition:
	random 3
	setvar VAR_TEMP_0, VAR_RESULT
	addvar VAR_TEMP_0, 1
	end

HallowSparkGym_PlayLights3:
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights3_Pattern1
	case 2, HallowSparkGym_Lights3_Pattern2
	case 3, HallowSparkGym_Lights3_Pattern3
	end

HallowSparkGym_Lights31::
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights31_Pattern12
	case 2, HallowSparkGym_Lights31_Pattern12
	case 3, HallowSparkGym_Lights31_Pattern3
	end

HallowSparkGym_Lights31_Pattern3:
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights31_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights31_End

HallowSparkGym_Lights31_Pattern12:
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights31_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights31_End

HallowSparkGym_Lights31_End:
	addvar VAR_TEMP_1, 1
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights31_YesNo
	end

HallowSparkGym_Lights31_YesNo:
	goto_if_set FLAG_TEMP_1, HallowSparkGym_Lights31_Fail
	call HallowSparkGym_Lights31_Succeed
	end

HallowSparkGym_Lights31_Fail:
	setmetatile 18, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 19, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 20, 31, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8

HallowSparkGym_Lights31_Succeed:
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

