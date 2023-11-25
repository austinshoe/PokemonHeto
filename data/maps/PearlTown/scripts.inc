PearlTown_MapScripts::
    .byte 0

PearlTown_EventScript_Trigger::
    lockall
    applymovement 1, SeePlayer
    waitmovement 0
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Text_DangerousNoPokemon, MSGBOX_DEFAULT
    waitmessage
    applymovement OBJ_EVENT_ID_PLAYER, PushBack
<<<<<<< HEAD
    waitmovement 0
    return
=======
    waitmovement
    releaseall
    end
>>>>>>> 812bc89bad1c0cdfd6bcebf283d16fba36eb2973

SeePlayer:
    face_up
    step_end
    
PushBack:
    walk_down
    step_end

Text_DangerousNoPokemon:
    .string "NO! DONT GO!\p"
    .string "Its dangerous out there if you don't\l"
    .string "your own Pokémon.\n"
    .string "Wild Pokémon might jump out at you.$"
    
