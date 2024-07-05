NewMap10_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Kasaan_Center_OnTransition
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Kasaan_Center_OnTransition::
    setrespawn HEAL_LOCATION_KASAAN
    end
