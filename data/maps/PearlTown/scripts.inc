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
    waitmovement 0
    releaseall
    end

PearlTown_TownSign::
    msgbox Text_TownSign, MSGBOX_SIGN
    end

PearlTown_LabSign::
    msgbox Text_LabSign, MSGBOX_SIGN
    end

PearlTown_PlayerSign::
    msgbox Text_PlayerSign, MSGBOX_SIGN
    end

PearlTown_LiamSign::
    msgbox Text_LiamSign, MSGBOX_SIGN
    end

SeePlayer:
    face_up
    step_end
    
PushBack:
    walk_down
    step_end

Text_DangerousNoPokemon:
    .string "NO! DONT GO!\p"
    .string "Its dangerous out there if you don't\l"
    .string "have your own Pokémon.\n"
    .string "Wild Pokémon might jump out at you.$"
    
Text_TownSign:
    .string "{COLOR BLUE}PearlTown\n"
    .string "{COLOR LIGHT_GRAY}A haven of tranquility and beauty$"
    
Text_LabSign:
    .string "Prof. Pine's Lab$"

Text_PlayerSign:
    .string "{PLAYER}'s House$"

Text_LiamSign:
    .string "Liam's House$"
