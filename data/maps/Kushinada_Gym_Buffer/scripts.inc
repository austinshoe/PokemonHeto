Kushinada_Gym_Buffer_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kushinada_Gym_Buffer_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kushinada_Gym_Buffer_OnFrame
	.byte 0

Kushinada_Gym_Buffer_OnTransition:
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	random 2
	switch VAR_RESULT
	case 0, Kushinada_Gym_Buffer_Zero
	case 1, Kushinada_Gym_Buffer_One
	end

Kushinada_Gym_Buffer_Zero:
	setvar VAR_TEMP_0, 0
	end

Kushinada_Gym_Buffer_One:
	setvar VAR_TEMP_0, 1
	end

Kushinada_Gym_Buffer_OnFrame:
	map_script_2 VAR_TEMP_0, 0, Kushinada_Gym_Buffer_Gym1Warp
	map_script_2 VAR_TEMP_0, 1, Kushinada_Gym_Buffer_Gym2Warp
	.2byte 0

Kushinada_Gym_Buffer_Gym1Warp:
	warpsilent MAP_KUSHINADA_GYM, 0
	end

Kushinada_Gym_Buffer_Gym2Warp:
	warpsilent MAP_KUSHINADA_GYM2, 0
	end
