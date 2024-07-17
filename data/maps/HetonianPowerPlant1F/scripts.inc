HetonianPowerPlant1F_MapScripts::
    map_script MAP_SCRIPT_ON_RESUME, HetonianPowerPlant_OnResume
    map_script MAP_SCRIPT_ON_TRANSITION, HetonianPowerPlant_OnTransition
    map_script MAP_SCRIPT_ON_LOAD, HetonianPowerPlant_OnLoad
    .byte 0

HetonianPowerPlant_OnResume:
    call_if_eq VAR_TEMP_1, 1, HetonianPowerPlant_EventScript_SetBarrierStateBlueButton
    call_if_eq VAR_TEMP_2, 1, HetonianPowerPlant_EventScript_SetBarrierStateGreenButton
    end

HetonianPowerPlant_OnTransition:
    end

HetonianPowerPlant_OnLoad:
    end

HetonianPowerPlant_EventScript_BlueButton::
    lockall
    setvar VAR_TEMP_1, 1
    setvar VAR_TEMP_2, 0
    playse SE_PIN
    call HetonianPowerPlant_EventScript_SetBarrierStateBlueButton
    special DrawWholeMapView
    releaseall
    end

HetonianPowerPlant_EventScript_GreenButton::
    lockall
    setvar VAR_TEMP_1, 0
    setvar VAR_TEMP_2, 1
    playse SE_PIN
    call HetonianPowerPlant_EventScript_SetBarrierStateGreenButton
    special DrawWholeMapView
    releaseall
    end

HetonianPowerPlant_EventScript_SetBarrierStateBlueButton::
    setmetatile 26, 15, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 26, 16, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 26, 17, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 26, 18, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 26, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 10, 9, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 10, 10, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 10, 11, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 10, 12, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 10, 13, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 26, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 26, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 26, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 26, 3, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 26, 4, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 26, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 9, 15, METATILE_BikeShop_Barrier_Green_Top, TRUE
    setmetatile 9, 16, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
    setmetatile 9, 17, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 18, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 39, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
    setmetatile 25, 9, METATILE_BikeShop_Barrier_Green_Top, TRUE
    setmetatile 25, 10, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
    setmetatile 25, 11, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 25, 12, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 25, 13, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
    setmetatile 9, 0, METATILE_BikeShop_Barrier_Green_Top, TRUE
    setmetatile 9, 1, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
    setmetatile 9, 2, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 3, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
    setmetatile 9, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
    setmetatile 20, 18, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 32, 12, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 3, 12, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 14, 10, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 21, 5, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 31, 3, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 3, 17, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 15, 18, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 21, 10, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 32, 17, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 14, 5, METATILE_BikeShop_Button_Green, FALSE
    setmetatile 4, 3, METATILE_BikeShop_Button_Green, FALSE
    return

HetonianPowerPlant_EventScript_SetBarrierStateGreenButton::
    setmetatile 9, 15, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 9, 16, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 9, 17, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 9, 18, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 9, 39, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 25, 9, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 25, 10, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 25, 11, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 25, 12, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 25, 13, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 9, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 9, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 9, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 9, 3, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 9, 4, METATILE_BikeShop_Floor_No_Shadow, FALSE
    setmetatile 9, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
    setmetatile 26, 15, METATILE_BikeShop_Barrier_Blue_Top, TRUE
    setmetatile 26, 16, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
    setmetatile 26, 17, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
    setmetatile 10, 9, METATILE_BikeShop_Barrier_Blue_Top, TRUE
    setmetatile 10, 10, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
    setmetatile 10, 11, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 10, 12, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 10, 13, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
    setmetatile 26, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
    setmetatile 26, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
    setmetatile 26, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 3, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 4, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
    setmetatile 26, 5, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
    setmetatile 20, 18, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 32, 12, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 3, 12, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 14, 10, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 21, 5, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 31, 3, METATILE_BikeShop_Button_Blue, FALSE
    setmetatile 3, 17, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 15, 18, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 21, 10, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 32, 17, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 14, 5, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 4, 3, METATILE_BikeShop_Button_Pressed, FALSE
    return
