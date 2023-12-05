PearlTown_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PearlTown_OnTransition
    .byte 0

PearlTown_OnTransition:
    call_if_unset FLAG_RESCUED_BIRCH, PearlTownState0
    call_if_set FLAG_RESCUED_BIRCH, PearlTownState1

PearlTownState0::
    setvar VAR_LITTLEROOT_TOWN_STATE, 0
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return

PearlTownState1::
    setvar VAR_LITTLEROOT_TOWN_STATE, 1
    call_if_unset FLAG_DEFEATED_RIVAL_ROUTE103, PearlTownSetUpRivalBattle
    call_if_set FLAG_DEFEATED_RIVAL_ROUTE103, PearlTownRivalAfter
    return

PearlTownSetUpRivalBattle::
    clearflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return

PearlTownRivalAfter::
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return

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

PearlTown_Rival::
    lock
    faceplayer
    goto_if_unset FLAG_DEFEATED_RIVAL_ROUTE103, PearlTownRivalBattle
    goto PearlTownDefeatedRival

PearlTownRivalBattle::
    msgbox Text_PreBattle, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Text_Prebattle1, MSGBOX_DEFAULT
    waitmessage
    closemessage
    release
    end

PearlTownDefeatedRival
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

Text_PreBattle:
    .string "{COLOR DARK_BLUE}Liam: {COLOR DARK_GRAY}Yo! {PLAYER}!\n"
    .string "You got your first Pokémon? That's cool.\l"
    .string "What did you get?\l"
    .string "...$"

Text_Prebattle1:
    .string "{COLOR DARK_BLUE}Liam: {COLOR DARK_GRAY}I- I- I can't believe this!\n"
    .string "Th- That's the Mirage Pokémon! How did\l"
    .string "you get your hands on this?"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "I see...\n"
    .string "So the professor gave it you, huh...\l"
    .string "{FONT FONT_SMALL}all i got was a stupid magikarp...\l"
    .string "{FONT FONT_SMALL}this is so unfair...\l"
    .string "{FONT FONT_NORMAL}Why did YOU get the Dratini? Why did I\l"
    .string "get stuck with the Magikarp? What makes\l"
    .string "YOU so special?\p"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "{FONT FONT_SMALL}is it cause i'm weaker?\p"
    .string "...\p"
    .string "{FONT FONT_SMALL}No... I refuse to accept this\n"
    .string "{FONT FONT_NORMAL}Imma prove right here right now, I'M the\l"
    .string "one that deserves the Dratini!$"

Text_TownSign:
    .string "{COLOR BLUE}PearlTown\n"
    .string "{COLOR DARK_GRAY}A haven of tranquility and beauty$"
    
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
