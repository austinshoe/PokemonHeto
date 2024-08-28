PearlTown_ProfessorPinesLab_MapScripts::
	.byte 0

ProfessorPineEventScript::
    goto_if_unset FLAG_RESCUED_BIRCH, Script_Receive_Starter
    goto_if_set FLAG_RESCUED_BIRCH, Script_Comment
    
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
    waitmessage
    closemessage
    applymovement 1, Common_Movement_FaceLeft
    waitmovement 0
    delay 16
    applymovement 1, Common_Movement_FaceRight
    waitmovement 0
    delay 16
    applymovement 1, Common_Movement_FaceLeft
    waitmovement 0
    delay 16
    applymovement 1, Common_Movement_FaceRight
    waitmovement 0
    delay 16
    faceplayer
    msgbox Text_TakeDratini2, MSGBOX_DEFAULT
    waitmessage
    closemessage
    givemon SPECIES_BAGON, 5, ITEM_DRAGON_FANG
    message Text_ReceivedDratini
    waitmessage
    playfanfare MUS_OBTAIN_ITEM
    waitfanfare
    bufferleadmonspeciesname STR_VAR_1
    msgbox PearlTown_ProfessorPinesLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, YES, PearlTown_ProfessorPinesLab_EventScript_NicknameStarter
    goto Script_Receive_Starter2

Script_Receive_Starter2::
    setflag FLAG_RESCUED_BIRCH
    msgbox TextTakePokedex, MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_ITEM
    waitfanfare
    message GivePokedex_Text_0
    waitmessage
    setflag FLAG_SYS_POKEDEX_GET
    setflag FLAG_ADVENTURE_STARTED
    special SetUnlockedPokedexFlags
    setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
    msgbox PearlTown_ProfessorPinesLab_Text_ExplainPokedex, MSGBOX_DEFAULT
    waitmessage
    msgbox GivePokedex_Text_1, MSGBOX_DEFAULT
    waitmessage
    giveitem ITEM_POKE_BALL, 5
    msgbox GivePokedex_Text_2, MSGBOX_DEFAULT
    waitmessage
    setflag FLAG_SYS_POKEMON_GET
    release
    end

PearlTown_ProfessorPinesLab_Text_WhyNotGiveNicknameToMon:
    .string "{SHADOW DARK_GRAY}Prof. Pine: {SHADOW LIGHT_GRAY}While you're at it, why not\n"
    .string "give a nickname to that {STR_VAR_1}?$"
    
PearlTown_ProfessorPinesLab_EventScript_NicknameStarter::
    setvar VAR_0x8004, 0
    call Common_EventScript_NameReceivedPartyMon
    goto Script_Receive_Starter2

Text_TakeDratini:
    .string "{SHADOW DARK_GRAY}Prof. Pine: {SHADOW LIGHT_GRAY}Hey, {PLAYER}! \n"
    .string "I was looking for you. As you know,\l"
    .string "you're now old enough for your very\l"
    .string "first Pokémon!\p"
    .string "As you know, the assistants and I have\n"
    .string "been observing you young'uns from birth\l"
    .string "to find you a fitting first Pokémon.$"

Text_TakeDratini2:
    .string "Let's see...\p"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "Ah!\n"
    .string "It looks like the Pokémon we've prepared\l"
    .string "for you is a {COLOR BLUE} Bagon{COLOR DARK_GRAY}!$"

Text_ReceivedDratini:
    .string "{PLAYER} received a Bagon!$"

GivePokedex_Text_0:
    .string "{PLAYER} received the Pokédex!$"

GivePokedex_Text_1:
    .string "Also take these with you.$"

GivePokedex_Text_2:
    .string "These allow you to catch your own\n"
    .string "Pokémon in tall grass so you can collect\l"
    .string "research for the Pokédex.$"

Text_Good:
    .string "Your Pokémon seem to be doing fine.$"

TextTakePokedex:
    .string "Oh! Right!\n"
    .string "{PLAYER}!\l"
    .string "I ordered this Pokédex to help me with\l"
    .string "my research, but old age prevents me\l"
    .string "from using this as effectively, so I\l"
    .string "think you should have it instead.$"

PearlTown_ProfessorPinesLab_Text_ExplainPokedex:
    .string "The Pokédex is a marvelous device that\n"
    .string "helps you record the Pokémon you've seen\l"
    .string "or caught. It can record different stats\l"
    .string "like height and weight, etc.$"
