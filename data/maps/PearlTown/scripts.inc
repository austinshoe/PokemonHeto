PearlTown_MapScripts::
    .byte 0

PearlTown_EventScript_Trigger::
    lockall
    goto_if_unset FLAG_RESCUED_BIRCH, PearlTown_DangerousNoPokemon
    releaseall
    end

PearlTown_DangerousNoPokemon::
    applymovement 1, SeePlayer
    waitmovement
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement
    msgbox Text_DangerousNoPokemon, MSGBOX_DEFAULT
    waitmessage
    applymovement OBJ_EVENT_ID_PLAYER, PushBack
    waitmovement
    return

SeePlayer:
    face_up
    step_end
    
PushBack:
    step_down
    step_end

Text_DangerousNoPokemon:
    .string "NO! DONT GO!\p"
    .string "Its dangerous out there if you don't\l"
    .string "your own Pokémon.\n"
    .string "Wild Pokémon might jump out at you.$"
    
