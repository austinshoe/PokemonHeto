LuminaraTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kushinada_OnTransition
	.byte 0

Kushinada_OnTransition:
	random 2
	switch VAR_RESULT
	case 0, Kushinada_GymWarpSet0
	case 1, Kushinada_GymWarpSet1
	end

Kushinada_GymWarpSet0:
	setdynamicwarp MAP_KUSHINADA_GYM, 0
	end

Kushinada_GymWarpSet1:
	setdynamicwarp MAP_KUSHINADA_GYM2, 0
	end 
