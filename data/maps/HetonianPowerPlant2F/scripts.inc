HetonianPowerPlant2F_MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, HetonianPowerPlant2F_OnLoad
	.byte 0

HetonianPowerPlant2F_OnLoad:
    call_if_eq VAR_NEW_MAUVILLE_STATE, 2, HetonianPowerPlant2F_EventScript_SetGeneratorOffMetatiles
    end

HetonianPowerPlant2F_EventScript_RedButton::
    lockall
    msgbox HetonianPowerPlant2F_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_DEFAULT
    call HetonianPowerPlant2F_EventScript_SetGeneratorOffMetatiles
    setvar VAR_NEW_MAUVILLE_STATE, 2
    releaseall
    end

HetonianPowerPlant2F_EventScript_SetGeneratorOffMetatiles::
    setmetatile 15, 6, METATILE_BikeShop_Button_Pressed, FALSE
    setmetatile 13, 3, METATILE_BikeShop_Generator_Off_Tile0, TRUE
    setmetatile 14, 3, METATILE_BikeShop_Generator_Off_Tile1, TRUE
    setmetatile 15, 3, METATILE_BikeShop_Generator_Off_Tile2, TRUE
    setmetatile 16, 3, METATILE_BikeShop_Generator_Off_Tile3, TRUE
    setmetatile 13, 4, METATILE_BikeShop_Generator_Off_Tile4, TRUE
    setmetatile 14, 4, METATILE_BikeShop_Generator_Off_Tile5, TRUE
    setmetatile 15, 4, METATILE_BikeShop_Generator_Off_Tile6, TRUE
    setmetatile 16, 4, METATILE_BikeShop_Generator_Off_Tile7, TRUE
    special DrawWholeMapView
    return

HetonianPowerPlant2F:
    .string "{PLAYER} stepped on the switch.\p"
    .string "Click…\p"
    .string "… … … … … … … …\n"
    .string "… … … … … … … …\p"
    .string "The generator appears to have\n"
    .string "stopped…$"

HetonianPowerPlant2F_EventScript_Generator::
    lockall
    goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, HetonianPowerPlant2F_EventScript_GeneratorOff
    msgbox HetonianPowerPlant2F_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
    releaseall
    end

HetonianPowerPlant2F_EventScript_GeneratorOff::
    msgbox HetonianPowerPlant2F_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
    releaseall
    end

HetonianPowerPlant2F_Text_GeneratorRadiatingHeat:
    .string "The generator is radiating heat that\n"
    .string "can be felt even at a distance.\p"
    .string "It looks like it should be turned off\n"
    .string "as soon as possible.$"

HetonianPowerPlant2F_Text_GeneratorQuietedDown:
    .string "The generator quieted down.$"
