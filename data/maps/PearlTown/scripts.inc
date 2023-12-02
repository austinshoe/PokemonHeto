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

PearlTown_FatGuy::
    lock
    faceplayer
    call_if_unset FLAG_RESCUED_BIRCH, Script_ForestWarn
    call_if_set FLAG_RESCUED_BIRCH, Script_NiceDay
    release
    end

PearlTown_Fisherman::
    lock
    faceplayer
    call_if_unset FLAG_RESCUED_BIRCH, Script_GotoLab
    call_if_set FLAG_RESCUED_BIRCH, Script_BigCatch
    release
    end

Script_ForestWarn::
    msgbox Text_ForestWarn, MSGBOX_DEFAULT
    release
    end
    
Script_NiceDay::
    msgbox Text_NiceDay, MSGBOX_DEFAULT
    release
    end
    
Script_BigCatch::
    msgbox Text_BigCatch, MSGBOX_DEFAULT
    release
    end
    
Script_GotoLab::
    msgbox Text_GotoLab, MSGBOX_DEFAULT
    release
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

Text_ForestWarn:
    .string "Don't go in the forest without Pokémon.\p"
    .string "Wild Pokémon might attack you.$"

Text_NiceDay:
    .string "It's a nice day today.$"

Text_GotoLab:
    .string "Yo! {PLAYER}!\p"
    .string "I heard Prof. Pine was looking for you.\n"
    .string "You should go see him in his lab.$"
    
Text_BigCatch:
    .string "Yo! {PLAYER}!\p"
    .string "I got a big catch today!$"
