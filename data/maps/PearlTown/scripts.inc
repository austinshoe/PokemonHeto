PearlTown_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PearlTown_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, PearlTown_EventScript_NoPokemonTriggerLeft
    .byte 0

PearlTown_Fisherman2::
    lockall
    faceplayer
    call_if_unset FLAG_RESCUED_BIRCH, Script_Fisherman2Warn
    call_if_set FLAG_RESCUED_BIRCH, Script_FishermanComment
    releaseall
    end 

Script_FishermanComment::
    msgbox Text_Fisherman2Comment, MSGBOX_DEFAULT
    return

Text_Fisherman2Comment:
    .string "Man! What a nice day!$"

Script_Fisherman2Warn::
    msgbox Text_Fisherman2Warning, MSGBOX_DEFAULT
    return

Text_Fisherman2Warning:
    .string "Don't go near the forest.\n"
    .string "There are dangerous Pokémon out there.$"

PearlTown_TownSignpostScript::
    msgbox Text_PearlTownSign, MSGBOX_SIGN
    closemessage
    end

Text_PearlTownSign:
    .string "PEARL TOWN\n"
    .string "A haven of tranquility and beauty$"

PearlTown_Fisherman1::
    lockall
    faceplayer
    call_if_unset FLAG_RESCUED_BIRCH, PearlTown_FishermanDirections
    call_if_set FLAG_RESCUED_BIRCH, PearlTown_FishermanGeneral
    releaseall
    end

PearlTown_FishermanDirections::
    msgbox Text_FishermanDirections, MSGBOX_DEFAULT
    return

PearlTown_FishermanGeneral::
    msgbox Text_FishermanGeneral, MSGBOX_DEFAULT
    return
Text_FishermanDirections:
    .string "Yo! {PLAYER}!\n"
    .string "I heard Prof. Pine was looking for you.\n"
    .string "Go check out his lab.$"

Text_FishermanGeneral:
    .string "Yo! {PLAYER}!\n"
    .string "I got a massive catch today!$"

PearlTown_RyderHouse::
    msgbox Text_RyderHouseSign, MSGBOX_SIGN
    closemessage
    end

Text_RyderHouseSign:
    .string "Ryder's House$"


PearlTown_Lab::
    msgbox Text_ProfPineLab, MSGBOX_SIGN
    closemessage
    end

Text_ProfPineLab:
    .string "Prof. Pine's House$"

PearlTown_PlayerHouse::
    msgbox PearlTown_House1, MSGBOX_SIGN
    closemessage
    end

PearlTown_House1:
    .string "{PLAYER}'s house$"

PearlTown_OnTransition::
    call_if_unset FLAG_RESCUED_BIRCH, PearlTown_EventScript_NeedPokemon
    call_if_set FLAG_RESCUED_BIRCH, PearlTown_EventScript_SetupRivalBattle
    end
    
PearlTown_EventScript_NeedPokemon::
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return
    
PearlTown_EventScript_SetupRivalBattle::
    goto_if_unset FLAG_RESCUED_BIRCH, PearlTown_EventScript_SetupRivalBattle_1
    goto_if_unset FLAG_DEFEATED_RIVAL_ROUTE103, PearlTown_EventScript_SetupRivalBattle_2
    goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, PearlTown_EventScript_SetupRivalBattle_3
    return

PearlTown_EventScript_SetupRivalBattle_1::
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return

PearlTown_EventScript_SetupRivalBattle_2::
    clearflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return
    
PearlTown_EventScript_SetupRivalBattle_3::
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return

PearlTown_EventScript_Battle_Rival::
    lock
    faceplayer
    goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, PearlTown_PostBattleScript
    goto_if_unset FLAG_DEFEATED_RIVAL_ROUTE103, PearlTown_RivalBattle
    release
    end

PearlTown_PostBattleScript::
    msgbox PostBattleRyder, MSGBOX_AUTOCLOSE
    return
    
PearlTown_RivalBattle::
    msgbox PearlTown_Text_Convo, MSGBOX_DEFAULT
    waitmessage
    applymovement 3, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox PearlTown_Text_Battle_Opener, MSGBOX_DEFAULT
    waitmessage
    trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, Ryder_Intro, Ryder_Outro
    setflag FLAG_DEFEATED_RIVAL_ROUTE103
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    fadescreen FADE_TO_BLACK
    fadescreen FADE_FROM_BLACK
    return
    
PearlTown_EventScript_NoPokemonTriggerLeft::
    lockall
    applymovement 1, PearlTown_Movement_ManWarns
    waitmovement 0
    msgbox PearlTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
    closemessage
    applymovement OBJ_EVENT_ID_PLAYER, PearlTown_Movement_PushPlayerBackFromRoute
    waitmovement 0
    msgbox PearlTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
    closemessage
    releaseall
    end

PearlTown_Movement_ManWarns:
    face_right
    delay_8
    disable_jump_landing_ground_effect
    jump_in_place_right
    step_end

PearlTown_Text_IfYouGoInGrassPokemonWillJumpOut:
    .string "NOO! DON'T GO!\p"
    .string "If you go outside and go in the grass,\n"
    .string "wild POKéMON will jump out!$"

PearlTown_Text_DangerousIfYouDontHavePokemon:
    .string "It's dangerous if you don't have\n"
    .string "your own Pokémon.$"

PearlTown_Text_Convo:
    .string "{COLOR BLUE}{SHADOW DARK_GRAY}Ryder: {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}{PLAYER}! What's up?\p"
    .string "...\n"
    .string "You just got your first Pokémon?\n"
    .string "...$"

PearlTown_Text_Battle_Opener:
    .string "I can't believe this... \n"
    .string "It's a Dratini... The Mirage Pokémon-\n"
    .string "How did you get your hands on this???\p"
    .string "...\n"
    .string "...\n"
    .string "So the Professor gave it to you, huh?\n"
    .string "{FONT_SMALL}This is so unfair... All I got was a\l"
    .string "{FONT_SMALL}Magikarp...\l"
    .string "{FONT_NORMAL}Why YOU? Why did YOU get the Dratini?\n"
    .string "WHY COULDN'T I HAVE GOTTEN THE GOOD ONE?\l"
    .string "ITS NOT LIKE I'M WORSE THAN YOU! \l"
    .string "damnit...\p"
    .string "I'll beat you right here right now, to\l"
    .string "prove that I'M the one that deserves\l"
    .string "the Dratini!$"

PearlTown_Movement_PushPlayerBackFromRoute:
    walk_down
    step_end

Ryder_Intro:
    .string "...$"
    
Ryder_Outro:
    .string "No way...$"
    
PostBattleRyder:
    .string "This can't be...$"
