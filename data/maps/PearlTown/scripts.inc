PearlTown_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, PearlTown_NoPokemon
	.byte 0
    
PearlTown_NoPokemon::
    lock
    getpartysize
    compare VAR_RESULT, 0
    goto_if_eq Script_NoPokemonYet
    release
    end
    
Script_NoPokemonYet::
    msgbox Text_GoBack, MSGBOX_DEFAULT
    applymovement OBJ_EVENT_ID_PLAYER, Going_Back
    waitmovement
    release
    end

Text_GoBack::
    .string "Hey!\n"
    .string "Go back!.$"

Going_Back::
    walk_down
    walk_down
    step_end
