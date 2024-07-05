NewMap9_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Everbloom_Center_OnTransition
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Everbloom_Center_OnTransition::
    setrespawn HEAL_LOCATION_EVERBLOOM_CITY
    end
