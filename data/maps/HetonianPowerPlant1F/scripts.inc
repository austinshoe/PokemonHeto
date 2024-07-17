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
    setmetatile 26, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 23, 39, METATILE_BikeShop_Wall_Edge_Top, FALSE
    return

HetonianPowerPlant_EventScript_SetBarrierStateGreenButton::
    setmetatile 9, 15, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
    setmetatile 9, 16, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
    setmetatile 9, 17, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 9, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
    setmetatile 9, 39, METATILE_BikeShop_Wall_Edge_Top, FALSE
    return
