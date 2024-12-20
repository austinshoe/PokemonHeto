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
	msgbox Text_Lights_Are_Flashing, MSGBOX_DEFAULT
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
	msgbox Text_Lights_Are_Flashing, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	setvar VAR_UNUSED_0x4091, 2
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights5_Pattern1
	case 2, HallowSparkGym_Lights5_Pattern2
	case 3, HallowSparkGym_Lights5_Pattern3
	release
	end

HallowSparkGym_PlayLights6::
	lock
	msgbox Text_Lights_Are_Flashing, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	setvar VAR_UNUSED_0x4091, 3
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights6_Pattern1
	case 2, HallowSparkGym_Lights6_Pattern2
	case 3, HallowSparkGym_Lights6_Pattern3
	release
	end

HallowSparkGym_PlayLights8::
	lock
	msgbox Text_Lights_Are_Flashing, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	setvar VAR_UNUSED_0x4091, 4
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights8_Pattern1
	case 2, HallowSparkGym_Lights8_Pattern2
	case 3, HallowSparkGym_Lights8_Pattern3
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
	case 2, HallowSparkGym_Lights33_Pattern2
	case 3, HallowSparkGym_Lights33_Pattern3
	release
	end

HallowSparkGym_Lights51::
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

HallowSparkGym_Lights52::
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

HallowSparkGym_Lights53::
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

HallowSparkGym_Lights54::
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

HallowSparkGym_Lights55::
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

HallowSparkGym_Lights61::
	lock
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights61_Pattern1
	case 2, HallowSparkGym_Lights61_Pattern2
	case 3, HallowSparkGym_Lights61_Pattern3
	release
	end

HallowSparkGym_Lights62::
	lock
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights62_Pattern1
	case 2, HallowSparkGym_Lights62_Pattern2
	case 3, HallowSparkGym_Lights62_Pattern3
	release
	end

HallowSparkGym_Lights63::
	lock
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights63_Pattern1
	case 2, HallowSparkGym_Lights63_Pattern2
	case 3, HallowSparkGym_Lights63_Pattern3
	release
	end

HallowSparkGym_Lights64::
	lock
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights64_Pattern1
	case 2, HallowSparkGym_Lights64_Pattern2
	case 3, HallowSparkGym_Lights64_Pattern3
	release
	end

HallowSparkGym_Lights65::
	lock
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights65_Pattern1
	case 2, HallowSparkGym_Lights65_Pattern2
	case 3, HallowSparkGym_Lights65_Pattern3
	release
	end

HallowSparkGym_Lights66::
	lock
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights66_Pattern1
	case 2, HallowSparkGym_Lights66_Pattern2
	case 3, HallowSparkGym_Lights66_Pattern3
	release
	end

HallowSparkGym_Lights81::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights81_Pattern1
	case 2, HallowSparkGym_Lights81_Pattern2
	case 3, HallowSparkGym_Lights81_Pattern3
	release
	end

HallowSparkGym_Lights82::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights82_Pattern1
	case 2, HallowSparkGym_Lights82_Pattern2
	case 3, HallowSparkGym_Lights82_Pattern3
	release
	end

HallowSparkGym_Lights83::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights83_Pattern1
	case 2, HallowSparkGym_Lights83_Pattern2
	case 3, HallowSparkGym_Lights83_Pattern3
	release
	end

HallowSparkGym_Lights84::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights84_Pattern1
	case 2, HallowSparkGym_Lights84_Pattern2
	case 3, HallowSparkGym_Lights84_Pattern3
	release
	end

HallowSparkGym_Lights85::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights85_Pattern1
	case 2, HallowSparkGym_Lights85_Pattern2
	case 3, HallowSparkGym_Lights85_Pattern3
	release
	end

HallowSparkGym_Lights86::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights86_Pattern1
	case 2, HallowSparkGym_Lights86_Pattern2
	case 3, HallowSparkGym_Lights86_Pattern3
	release
	end

HallowSparkGym_Lights87::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights87_Pattern1
	case 2, HallowSparkGym_Lights87_Pattern2
	case 3, HallowSparkGym_Lights87_Pattern3
	release
	end

HallowSparkGym_Lights88::
	lock
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	msgbox Text_Button_Pressed, MSGBOX_DEFAULT
	switch VAR_TEMP_0
	case 1, HallowSparkGym_Lights88_Pattern1
	case 2, HallowSparkGym_Lights88_Pattern2
	case 3, HallowSparkGym_Lights88_Pattern3
	release
	end

HallowSparkGym_Lights31_Pattern3:
	compare VAR_TEMP_1, 1
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

HallowSparkGym_Lights33_Pattern2:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights3_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights3_End

HallowSparkGym_Lights33_Pattern3:
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

HallowSparkGym_Lights61_Pattern1:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights61_Pattern2:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights61_Pattern3:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights62_Pattern1:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights62_Pattern2:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights62_Pattern3:
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights63_Pattern1:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights63_Pattern2:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights63_Pattern3:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights64_Pattern1:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights64_Pattern2:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights64_Pattern3:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights65_Pattern1:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights65_Pattern2:
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights65_Pattern3:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights66_Pattern1:
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights66_Pattern2:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights66_Pattern3:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights6_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights6_End

HallowSparkGym_Lights81_Pattern1:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights81_Pattern2:
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights81_Pattern3:
	compare VAR_TEMP_1, 6
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights82_Pattern1:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights82_Pattern2:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights82_Pattern3:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights83_Pattern1:
	compare VAR_TEMP_1, 7
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights83_Pattern2:
	compare VAR_TEMP_1, 6
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights83_Pattern3:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights84_Pattern1:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights84_Pattern2:
	compare VAR_TEMP_1, 4
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights84_Pattern3:
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights85_Pattern1:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights85_Pattern2:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights85_Pattern3:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights86_Pattern1:
	compare VAR_TEMP_1, 5
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights86_Pattern2:
	compare VAR_TEMP_1, 3
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights86_Pattern3:
	compare VAR_TEMP_1, 7
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights87_Pattern1:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights87_Pattern2:
	compare VAR_TEMP_1, 0
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights87_Pattern3:
	compare VAR_TEMP_1, 1
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights88_Pattern1:
	compare VAR_TEMP_1, 6
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights88_Pattern2:
	compare VAR_TEMP_1, 7
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

HallowSparkGym_Lights88_Pattern3:
	compare VAR_TEMP_1, 2
	goto_if_eq HallowSparkGym_Lights8_End
	setflag FLAG_TEMP_1
	goto HallowSparkGym_Lights8_End

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

HallowSparkGym_Lights6_End:
	addvar VAR_TEMP_1, 1
	compare VAR_TEMP_1, 6
	goto_if_eq HallowSparkGym_Lights6_YesNo
	release
	end

HallowSparkGym_Lights8_End:
	addvar VAR_TEMP_1, 1
	compare VAR_TEMP_1, 8
	goto_if_eq HallowSparkGym_Lights8_YesNo
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

HallowSparkGym_Lights6_YesNo:
	setvar VAR_TEMP_1, 0
	goto_if_set FLAG_TEMP_1, HallowSparkGym_Lights6_Fail
	call HallowSparkGym_Lights6_Succeed
	clearflag FLAG_TEMP_1
	release
	end

HallowSparkGym_Lights8_YesNo:
	setvar VAR_TEMP_1, 0
	goto_if_set FLAG_TEMP_1, HallowSparkGym_Lights8_Fail
	call HallowSparkGym_Lights8_Succeed
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
	call HallowSparkGym_FailPenalty
	release
	end

HallowSparkGym_Lights6_Fail:
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	clearflag FLAG_TEMP_1
	msgbox Text_HallowSparkGym_Lights_Fail, MSGBOX_DEFAULT
	release
	end

HallowSparkGym_Lights8_Fail:
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	clearflag FLAG_TEMP_1
	msgbox Text_HallowSparkGym_Lights_Fail, MSGBOX_DEFAULT
	release
	end

HallowSparkGym_FailPenalty:
	random 10
	switch VAR_RESULT
	case 0, HallowSparkGym_Magneton
	case 1, HallowSparkGym_Elekid
	case 2, HallowSparkGym_Magnemite
	case 3, HallowSparkGym_Magnemite1
	case 4, HallowSparkGym_Tynamo
	case 5, HallowSparkGym_Tynamo
	case 6, HallowSparkGym_Voltorb
	case 7, HallowSparkGym_Voltorb
	case 8, HallowSparkGym_Magnemite2
	case 9, HallowSparkGym_Voltorb
	release
	end

HallowSparkGym_Magneton:
	setwildbattle SPECIES_MAGNETON, 32, ITEM_METAL_COAT
	dowildbattle
	release
	end

HallowSparkGym_Magnemite:
	setwildbattle SPECIES_MAGNEMITE, 31, ITEM_NONE
	dowildbattle
	release
	end

HallowSparkGym_Magnemite1:
	setwildbattle SPECIES_MAGNEMITE, 31, ITEM_METAL_COAT
	dowildbattle
	release
	end

HallowSparkGym_Magnemite1:
	setwildbattle SPECIES_MAGNEMITE, 31, ITEM_MAGNET
	dowildbattle
	release
	end

HallowSparkGym_Tynamo:
	setwildbattle SPECIES_TYNAMO, 31, ITEM_NONE
	dowildbattle
	release
	end

HallowSparkGym_Voltorb:
	setwildbattle SPECIES_VOLTORB, 31, ITEM_NONE
	dowildbattle
	release
	end

HallowSparkGym_Elekid:
	setwildbattle SPECIES_ELEKID, 31, ITEM_ELECTIRIZER
	dowildbattle
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
	setmetatile 15, 34, METATILE_HallowSpark_Gym_Floor_Mid, TRUE
	setmetatile 16, 34, METATILE_HallowSpark_Gym_Floor_Mid, TRUE
	setmetatile 14, 34, METATILE_HallowSpark_Gym_Floor_Mid, TRUE
	setmetatile 17, 34, METATILE_HallowSpark_Gym_Floor_Mid, TRUE
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
	setmetatile 3, 29, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 4, 29, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 3, 30, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 4, 30, METATILE_HallowSpark_Gym_Floor, FALSE
	special DrawWholeMapView
	delay 8
	return

HallowSparkGym_Lights6_Succeed:
	msgbox Text_HallowSparkGym_Lights_Succeed, MSGBOX_DEFAULT
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 24, 12, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 25, 12, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 24, 13, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 25, 13, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 23, 14, METATILE_HallowSpark_Gym_Floor_Mid, TRUE
	setmetatile 24, 14, METATILE_HallowSpark_Gym_Floor_Mid, TRUE
	setmetatile 25, 14, METATILE_HallowSpark_Gym_Floor_Mid, TRUE
	special DrawWholeMapView
	delay 8
	return

HallowSparkGym_Lights8_Succeed:
	msgbox Text_HallowSparkGym_Lights_Succeed, MSGBOX_DEFAULT
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 7, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 12, 7, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 11, 8, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 12, 8, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 11, 9, METATILE_HallowSpark_Gym_Floor, FALSE
	setmetatile 12, 9, METATILE_HallowSpark_Gym_Floor, FALSE
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

HallowSparkGym_Lights6_Pattern1:
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights6_Pattern2:
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights6_Pattern3:
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 29, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 28, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 30, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 28, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 29, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights8_Pattern1:
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights8_Pattern2:
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

HallowSparkGym_Lights8_Pattern3:
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 13, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 13, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 16
	setmetatile 14, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 12, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 14, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 11, 12, METATILE_HallowSpark_Gym_Light_Off, TRUE
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_On, TRUE
	special DrawWholeMapView
	delay 8
	setmetatile 12, 13, METATILE_HallowSpark_Gym_Light_Off, TRUE
	special DrawWholeMapView
	delay 8
	release
	end

Text_HallowSparkGym_Lights_Succeed:
	.string "You cracked the combo!$"

Text_HallowSparkGym_Lights_Fail:
	.string "That was the wrong combo!\p"
	.string "A wild Pokémon jumped out at you!$"

Text_Button_Pressed:
	.string "You pressed the button.$"

Text_Lights_Are_Flashing:
	.string "The lights are flashing the code.$"