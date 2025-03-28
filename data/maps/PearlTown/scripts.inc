.set LOCALID_MOM, 6

PearlTown_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PearlTown_OnTransition
    .byte 0

PearlTown_OnTransition:
    setflag FLAG_VISITED_LITTLEROOT_TOWN
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

PearlTownState2::
    setvar VAR_LITTLEROOT_TOWN_STATE, 2
    setobjectxyperm LOCALID_MOM, 23, 18
    setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_LOOK_AROUND
    return

PearlTown_MomGiveShoe::
    lockall
    faceplayer
    applymovement LOCALID_MOM, Common_Movement_ExclamationMark
    waitmovement 0
    message Text_PearlTownMomCallsOut
    waitmessage
    goto PearlTownRunningShoesTriggerAll

PearlTownRunningShoesTrigger1::
    lockall
    applymovement LOCALID_MOM, Common_Movement_FaceUp
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_ExclamationMark
    waitmovement 0
    message Text_PearlTownMomCallsOut
    waitmessage
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_FaceUp
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
    waitmovement LOCALID_MOM
    waitmovement OBJ_EVENT_ID_PLAYER
    goto PearlTownRunningShoesTriggerAll

PearlTownRunningShoesTrigger2::
    lockall
    applymovement LOCALID_MOM, Common_Movement_FaceRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_ExclamationMark
    waitmovement 0
    message Text_PearlTownMomCallsOut
    waitmessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_FaceUp
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
    waitmovement LOCALID_MOM
    waitmovement OBJ_EVENT_ID_PLAYER
    goto PearlTownRunningShoesTriggerAll

PearlTownRunningShoesTrigger3::
    lockall
    applymovement LOCALID_MOM, Common_Movement_FaceRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_ExclamationMark
    waitmovement 0
    message Text_PearlTownMomCallsOut
    waitmessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_FaceUp
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
    waitmovement LOCALID_MOM
    waitmovement OBJ_EVENT_ID_PLAYER
    goto PearlTownRunningShoesTriggerAll

PearlTownRunningShoesTrigger4::
    lockall
    applymovement LOCALID_MOM, Common_Movement_FaceRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_ExclamationMark
    waitmovement 0
    message Text_PearlTownMomCallsOut
    waitmessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_FaceUp
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
    waitmovement LOCALID_MOM
    waitmovement OBJ_EVENT_ID_PLAYER
    goto PearlTownRunningShoesTriggerAll

PearlTownRunningShoesTrigger5::
    lockall
    applymovement LOCALID_MOM, Common_Movement_FaceRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_ExclamationMark
    waitmovement 0
    message Text_PearlTownMomCallsOut
    waitmessage
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, PearlTown_Movement_SlidetoDaRight
    waitmovement 0
    applymovement LOCALID_MOM, Common_Movement_FaceUp
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
    waitmovement LOCALID_MOM
    waitmovement OBJ_EVENT_ID_PLAYER
    goto PearlTownRunningShoesTriggerAll

PearlTownRunningShoesTriggerAll:
    msgbox Text_PearlTownMomExplainRunningShoes, MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_ITEM
    message PearlTown_Text_SwitchShoesWithRunningShoes
    waitfanfare
    setflag FLAG_RECEIVED_RUNNING_SHOES
    msgbox PearlTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
    msgbox PearlTown_Text_KnowHistory, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq PearlTownLoreDump
    message Text_PearlTown_MomComeBackAnytime
    waitmessage
    closemessage
    goto PearlTownRunningShoesTriggerAll2

PearlTownRunningShoesTriggerAll2:
    applymovement LOCALID_MOM, PearlTown_MovementDiddleOffIntotheSunset
    waitmovement 0
    setobjectxyperm LOCALID_MOM, 0, 0
    removeobject LOCALID_MOM
    setflag FLAG_RECEIVED_RUNNING_SHOES
    setvar VAR_LITTLEROOT_TOWN_STATE, 1
    setflag FLAG_SYS_B_DASH
    releaseall
    end

PearlTownLoreDump:
    message Text_PearlTownLoreDump
    waitmessage
    applymovement LOCALID_MOM, Common_Movement_FaceLeft
    waitmovement 0
    message Text_PearlTownLoreDump2
    waitmessage
    applymovement LOCALID_MOM, Common_Movement_FaceUp
    waitmovement 0
    message Text_PearlTownLoreDump3
    waitmessage
    closemessage
    goto PearlTownRunningShoesTriggerAll2
    end

PearlTownSetUpRivalBattle::
    clearflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    return

PearlTownRivalAfter::
    setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
    call_if_unset FLAG_RECEIVED_RUNNING_SHOES, PearlTownState2
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

PearlTown_TestParty::
    lock
    givemon SPECIES_KYUREM_WHITE, 60, ITEM_NONE
    givemon SPECIES_AMPHAROS, 60, ITEM_AMPHAROSITE
    givemon SPECIES_LEAFEON, 60, ITEM_NONE
    givemon SPECIES_KYOGRE, 60, ITEM_BLUE_ORB
    givemon SPECIES_SALAMENCE, 60, ITEM_DRACO_PLATE
    givemon SPECIES_WEAVILE, 60, ITEM_RAZOR_CLAW
    release
    end

PearlTown_TestBattleKirschbluteFinal::
    lock
    trainerbattle_double TRAINER_SHELLY_SEAFLOOR_CAVERN, Text_PearlTown_PostTestBattle, Text_PearlTown_PostTestBattle, Text_PearlTown_PostTestBattle
    release
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
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
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
    setvar VAR_LITTLEROOT_TOWN_STATE, 2
    setobjectxyperm LOCALID_MOM, 23, 18
    setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_LOOK_AROUND
    delay 64
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
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Yo! {PLAYER}!\n"
    .string "You got your first Pokémon? That's cool.\l"
    .string "What did you get?\l"
    .string "...$"

Text_Prebattle1:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: I- I- I can't believe this!\n"
    .string "Th- That's a {COLOR BLUE}Bagon{COLOR DARK_GRAY}!\l"
    .string "How did you get your hands on this?\p"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "I see...\n"
    .string "So the professor gave it you, huh...\l"
    .string "(all I got was a stupid {COLOR RED}magikarp{COLOR DARK_GRAY}...)\l"
    .string "(this is so unfair...)\l"
    .string "{COLOR DARK_GRAY}Why did YOU get the {COLOR BLUE}Bagon{COLOR DARK_GRAY}? Why did I\l"
    .string "get stuck with the {COLOR RED}Magikarp{COLOR DARK_GRAY}? What makes\l"
    .string "YOU so special?\p"
    .string "...\p"
    .string "...\p"
    .string "...\p"
    .string "(is it cause i'm weaker?)\p"
    .string "...\p"
    .string "(No... I refuse to accept this)\n"
    .string "Imma prove right here right now, I'M the\l"
    .string "one that deserves the {COLOR BLUE}Bagon{COLOR DARK_GRAY}!$"

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
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}:...\p"
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


Text_PearlTown_PostTestBattle:
    .string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}TYPE SHIT {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}$"

Text_PearlTownMomCallsOut:
    .string "Mom: {PLAYER}!\p"
    .string "$"

PearlTown_Movement_SlidetoDaRight:
    walk_right
    step_end

Text_PearlTownMomExplainRunningShoes:
    .string "I forgot to tell you!\p"
    .string "These came in the mail for you, since\n"
    .string "your old shoes were looking a bit\l"
    .string "shabby.$"

PearlTown_Text_SwitchShoesWithRunningShoes:
    .string "{PLAYER} switched shoes with the\n"
    .string "Running Shoes.$"

PearlTown_Text_ExplainRunningShoes:
    .string "Mom: {PLAYER}, those shoes came with\n"
    .string "instructions.\p"
    .string "“Press the B Button while wearing these\n"
    .string "Running Shoes to run extra-fast!\p"
    .string "“Slip on these Running Shoes and race\n"
    .string "in the great outdoors!”$"

PearlTown_Text_KnowHistory:
    .string "Are you well versed with this region's\n"
    .string "history?$"

Text_PearlTown_MomComeBackAnytime:
    .string "Then you must understand why I'm\n"
    .string "concerned for your safety.\p"
    .string "If you're feeling tired or worried,\n"
    .string "feel free to come back home and take a\l"
    .string "little break!\p"
    .string "$"
PearlTown_MovementDiddleOffIntotheSunset:
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    step_end

Text_PearlTownLoreDump:
    .string "Well... Where do I begin...\p"
    .string "$"
Text_PearlTownLoreDump2:
    .string "In the past, the region of Heto wasn't\l\n"
    .string "just a single country.\l"
    .string "There were two different countries,\l"
    .string "Toemayto and Hehehehatia.\p"
    .string "Relations between the two were good,\n"
    .string "but border disputes caused conflict,\l"
    .string "which led to war.\p"
    .string "$"

Text_PearlTownLoreDump3:
    .string "Even though the war ended a while ago,\n"
    .string "Some Albas and Auratas, especially on\l"
    .string "this side of Heto, still have anti\l"
    .string "colored sentiments.\p"
    .string "You must understand why I'm concerned\n"
    .string "for your safety.\p"
    .string "If you're feeling tired or worried,\n"
    .string "feel free to come back home and take a\l"
    .string "little break!\p"
    .string "$"