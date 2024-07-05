CoralShoreCenter_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, CoralShoreCity_Center_OnTransition
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CoralShoreCity_Center_OnTransition::
    setrespawn HEAL_LOCATION_NEW_MAP8
    end

