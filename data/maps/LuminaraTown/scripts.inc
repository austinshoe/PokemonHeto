LuminaraTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kushinada_OnTransition
	.byte 0

Kushinada_OnTransition::
	call KushinadaGym_MazeSet
	end

KushinadaGym_MazeSet:
	random 2
	setvar VAR_PETALBURG_GYM_STATE, VAR_RESULT
	return
