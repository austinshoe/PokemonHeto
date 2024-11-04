NewMap2_MapScripts::
	.byte 0
    
Script_GiveEgg::
    lockall
    faceplayer
    goto_if_set FLAG_UNUSED_0x021, Script_GiveEgg3
    goto_if_unset FLAG_UNUSED_0x021, Script_GiveEgg2
    releaseall
    end

Script_GiveEgg3:
    msgbox Text_EggCondition
    closemessage
    releaseall
    end

Script_GiveEgg2::
    msgbox Text_EggQuestion, MSGBOX_YESNO
    compare VAR_RESULT, 0
    goto_if_eq Script_PlayerAnsweredNo
    getpartysize
    compare VAR_RESULT, 6
    goto_if_eq Script_PlayerHasFullParty
    giveegg SPECIES_HONEDGE
    playfanfare MUS_OBTAIN_ITEM
    msgbox Text_ReceivedEgg, MSGBOX_DEFAULT
    setflag FLAG_UNUSED_0x021
    waitfanfare
    return
    
Script_PlayerHasFullParty::
    msgbox Text_PlayerHasFullParty, MSGBOX_DEFAULT
    releaseall
    end

Script_PlayerAnsweredNo::
    msgbox Text_PlayerAnsweredNo, MSGBOX_DEFAULT
    releaseall
    end

Text_EggQuestion:
    .string "My Pokémon laid a new egg recently, but\n"
    .string "I have no need for it.\l"
    .string "Will you take this Egg?$"

Text_PlayerAnsweredNo:
    .string "Oh, that's too bad.$"

Text_ReceivedEgg:
    .string "{PLAYER} received the Egg!$"

Text_PlayerHasFullParty:
    .string "Your party is full.\n"
    .string "There's no room for this Egg.$"

Text_EggCondition:
    .string "How's the egg doing? Did it hatch yet?$"

BugCatcherEthan::
    trainerbattle_single TRAINER_RICK, EthanIntro, EthanDefeated
    msgbox EthanPostBattle, MSGBOX_AUTOCLOSE
    end

HexManiacElise::
    trainerbattle_single TRAINER_LEAH, EliseIntro, EliseDefeated
    msgbox ElisePostBattle, MSGBOX_AUTOCLOSE
    end

ArtistAlan::
    trainerbattle_single TRAINER_ALBERTO, AlanIntro, AlanDefeated
    msgbox AlanPostBattle, MSGBOX_AUTOCLOSE
    end

EthanIntro:
    .string "Behold! My glorious and magnificent bug\n"
    .string "Pokémon!$"

EliseIntro:
    .string "Kekekkekke...$"

AlanIntro:
    .string "The colors of the grove inspire my\n"
    .string "Pokémon's moves. Each battle is a\l"
    .string "canvas, and we're ready to paint!$"

EthanDefeated:
    .string "What?! Impossible!$"

EliseDefeated:
    .string "Kekeke..?$"

AlanDefeated:
    .string "Ah! My paint cracked!$"

EthanPostBattle:
    .string "Bug Pokémon are the coolest!$"

ElisePostBattle:
    .string "The spirits failed to lead me to victory\n"
    .string "this time. Am I not worthy?$"

AlanPostBattle:
    .string "My poor painting... What a shame.$"
