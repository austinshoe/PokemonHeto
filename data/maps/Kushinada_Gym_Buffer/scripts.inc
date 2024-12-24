Kushinada_Gym_Buffer_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Kushinada_Gym_Buffer_GymWarp
	.byte 0

Kushinada_Gym_Buffer_GymWarp:
	switch VAR_PETALBURG_GYM_STATE
	case 0, Kushinada_Gym_Buffer_Gym1Warp
	case 1, Kushinada_Gym_Buffer_Gym2Warp
	end

Kushinada_Gym_Buffer_Gym1Warp:
	warpsilent MAP_KUSHINADA_GYM, 0
	end

Kushinada_Gym_Buffer_Gym2Warp:
	warpsilent MAP_KUSHINADA_GYM2, 0
	end