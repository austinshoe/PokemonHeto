PearlTown_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PearlTown_OnTransition
    .byte 0

PearlTown_OnTransition:
    call_if_unset FLAG_RESCUED_BIRCH, PearlTownState0
    call_if_set FLAG_RESCUED_BIRCH, PearlTownState1
    end

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
    lockall
    msgbox Text_PreBattle, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Text_Prebattle1, MSGBOX_DEFAULT
    waitmessage
    closemessage
    trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Text_LiamDefeated
    setflag FLAG_DEFEATED_RIVAL_ROUTE103
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    msgbox Text_Postbattle, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 3, PearlTown_MovementStepAway
    waitmovement 0
    msgbox Text_Postbattle1, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 3, PearlTown_MovementRivalLeave
    waitmovement 0
    msgbox Text_Postbattle2, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 3, PearlTown_MovementPreminder
    waitmovement 0
    msgbox Text_Postbattle3, MSGBOX_DEFAULT
    waitmessage
    closemessage
    applymovement 3, PearlTown_MovementWalkAway
    waitmovement 0
    fadescreen FADE_TO_BLACK
    hideobjectat 3, MAP_PEARL_TOWN
    fadescreen FADE_FROM_BLACK
    releaseall
    end

PearlTownDefeatedRival::
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

PearlTown_GroveSign::
    msgbox Text_GroveSign, MSGBOX_SIGN
    end

SeePlayer:
    face_up
    step_end
    
PushBack:
    walk_down
    step_end

PearlTown_MovementStepAway:
    walk_left
    walk_up
    walk_left
    step_end
    
PearlTown_MovementRivalLeave:
    walk_left
    walk_left
    step_end
    
PearlTown_MovementPreminder:
    walk_left
    step_end

PearlTown_MovementWalkAway:
    walk_left
    walk_left
    walk_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    walk_fast_left
    step_end

Text_DangerousNoPokemon:
    .string "NO! DONT GO!\p"
    .string "Its dangerous out there if you don't\l"
    .string "have your own Pokémon.\n"
    .string "Wild Pokémon might jump out at you.$"

Text_PreBattle:
    .string "{COLOR BLUE}Liam: {COLOR DARK_GRAY}Yo! {PLAYER}!\n"
    .string "You got your first Pokémon? That's cool.\l"
    .string "What did you get?\l"
    .string "...$"

Text_Prebattle1:
    .string "{COLOR BLUE}Liam: {COLOR DARK_GRAY}I- I- I can't believe this!\n"
    .string "Th- That's the Mirage Pokémon! How did\l"
    .string "you get your hands on this?\p"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "I see...\n"
    .string "So the professor gave it you, huh...\l"
    .string "(all i got was a stupid magikarp...)\l"
    .string "(this is so unfair...)\l"
    .string "{COLOR DARK_GRAY}Why did YOU get the Dratini? Why did I\l"
    .string "get stuck with the Magikarp? What makes\l"
    .string "YOU so special?\p"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "(is it cause i'm weaker?)\p"
    .string "...\p"
    .string "(No... I refuse to accept this)\n"
    .string "Imma prove right here right now, I'M the\l"
    .string "one that deserves the Dratini!$"

Text_TownSign:
    .string "{COLOR BLUE}{CLEAR_TO 70}PearlTown\n"
    .string "{COLOR DARK_GRAY}A haven of tranquility and beauty$"
    
Text_LabSign:
    .string "Prof. Pine's Lab$"

Text_PlayerSign:
    .string "{PLAYER}'s House$"

Text_LiamSign:
    .string "Liam's House$"

Text_GroveSign:
    .string "{UP_ARROW} Whispering Grove$"

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

Text_LiamDefeated:
    .string "This... This can't be...$"

Text_Postbattle:
    .string "How...$"

Text_Postbattle1:
    .string "Am I... really inferior?\p"
    .string "...\p"
    .string "...\p"
    .string "I- I need-$"

Text_Postbattle2:
    .string "{COLOR BLUE}Liam:{COLOR DARK_GRAY}...\p"
    .string "{PLAYER}-\n"
    .string "I- I lost to you today... I was weaker-\p"
    .string "But... the one that wins in the end is\n"
    .string "the strongest-\l"
    .string "no matter how many times he lost before!\p"
    .string "I'm gonna take up the gym challenge and\n"
    .string "become the Pokémon League's champion.\p"
    .string "{PLAYER},\n"
    .string "as my rival, I'm' expecting that you'll\l"
    .string "do the same. You'll want to go through\l"
    .string "{COLOR GREEN}Whispering Grove{COLOR DARK_GRAY} since the first gym is\l"
    .string "in Everbloom, past Lumina Town.$"

Text_Postbattle3:
    .string "I'll get stronger...\p"
    .string "{PLAYER}!\n"
    .string "If you're too slow, I won't think twice\l"
    .string "about leaving you behind.$"
