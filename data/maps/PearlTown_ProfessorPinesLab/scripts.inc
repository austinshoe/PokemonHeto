PearlTown_ProfessorPinesLab_MapScripts::
	.byte 0

ProfessorPineEventScript::
    goto_if_unset FLAG_RESCUED_BIRCH, Script_Receive_Starter
    goto if_set FLAG_RESCUED_BIRCH, Script_Comment
    
Script_Comment::
    lock
    faceplayer
    msgbox Text_Good, MSGBOX_DEFAULT
    release
    end

Script_Receive_Starter::
    lock
    faceplayer
    msgbox Text_TakeDratini, MSGBOX_DEFAULT
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 0
    msgbox Text_TakeDratini2, MSGBOX_DEFAULT
    givemon SPECIES_DRATINI, 5, ITEM_DRAGON_FANG
    playfanfare MUS_OBTAIN_ITEM
    msgbox Text_ReceivedDratini, MSGBOX_DEFAULT
    waitfanfare
    msgbox PearlTown_ProfessorPinesLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
    call_if_eq VAR_RESULT, YES, PearlTown_ProfessorPinesLab_EventScript_NicknameStarter
    delay_8
    setflag FLAG_RESCUED_BIRCH
    msgbox TakePokedex, MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_ITEM
    message GivePokedex_Text_0
    waitfanfare
    closemessage
    setflag FLAG_SYS_POKEDEX_GET
    setflag FLAG_ADVENTURE_STARTED
    special SetUnlockedPokedexFlags
    setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
    setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
    msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
    msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
    giveitem ITEM_POKE_BALL, 5
    msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
    waitmessage
    release
    end

PearlTown_ProfessorPinesLab_Text_WhyNotGiveNicknameToMon:
    .string "{SHADOW DARK_GRAY}Prof. Pine: {SHADOW LIGHT_GRAY}While you're at it, why not\n"
    .string "give a nickname to that {STR_VAR_1}?$"
    
PearlTown_ProfessorPinesLab_EventScript_NicknameStarter::
    setvar VAR_0x8004, 0
    call Common_EventScript_NameReceivedPartyMon
    return

Text_TakeDratini:
    .string "{SHADOW DARK_GRAY}Prof. Pine: {SHADOW LIGHT_GRAY}Hey, {PLAYER}! \n"
    .string "I was looking for you. As you know,\n"
    .string "you're now old enough for your very\1"
    .string "first Pokémon!\l"
    .string "Usually, we only give out Magikarps and\l"
    .string "Feebas, but since your mom-$"

Text_TakeDratini2:
    .string "AHEM, WHAT I MEANT TO SAY WAS,\p"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "You know what, here. Just take it.$"

Text_ReceivedDratini:
    .string "{PLAYER} received a Dratini!$"

GivePokedex_Text_0:
    .string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_1:
    .string "Also take these with you$"

GivePokedex_Text_2:
    .string "These allow you to catch your own\n"
    .string "Pokemon in tall grass so you can collect\l"
    .string "research for the Pokedex$"

TakePokedex:
    .string "Oh! Right!\n"
    .string "Here, {PLAYER}, I ordered this for my\l"
    .string "research, but I think you should have\l"
    .string "this Pokédex.$"

Text_Good:
    .string "Your Pokémon seem to be doing fine.$"
