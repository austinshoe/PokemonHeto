NewMap4_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, FallGrove_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, FallGrove_OnFrame
	.byte 0

FallGrove_OnTransition:
    call_if_unset FLAG_VISITED_FALLARBOR_TOWN, FallGroveVar1
    call_if_set FLAG_VISITED_FALLARBOR_TOWN, FallGroveVar0
    end

FallGroveVar1:
    setvar VAR_LAVARIDGE_TOWN_STATE, 1
    return

FallGroveVar0:
    setvar VAR_LAVARIDGE_TOWN_STATE, 0
    return

FallGrove_OnFrame:
    map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, FallGrove_GeologistFirstCall
	.2byte 0

FallGrove_GeologistFirstCall:
    lockall
    setvar VAR_LAVARIDGE_TOWN_STATE, 0
    setflag FLAG_VISITED_FALLARBOR_TOWN
    msgbox Text_FallGrove_GeologistFirstCall, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq FallGrove_GeologistFirstCallNO
    goto FallGrove_GeologistFirstCallYES

FallGrove_GeologistFirstCallNO:
    message Text_FallGrove_GeologistFirstCallNO
    waitmessage
    goto FallGrove_GeologistFirstCall2

FallGrove_GeologistFirstCallYES:
    message Text_FallGrove_GeologistFirstCallYES
    waitmessage
    goto FallGrove_GeologistFirstCall2

FallGrove_GeologistFirstCall2:
    msgbox Text_FallGrove_GeologistDeliverBadNews, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq FallGrove_GeologistExplainMtEmberfall
    msgbox Text_FallGrove_GeologistNotExplainingMtEmberfall, MSGBOX_DEFAULT
    releaseall
    end

FallGrove_GeologistExplainMtEmberfall:
    msgbox Text_FallGrove_GeologistExplainMtEmberfall, MSGBOX_DEFAULT
    releaseall
    end

Script_FallGroveTownSign::
    lock
    faceplayer
    msgbox Text_FallGroveTownSign, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownSign:
    .string "{COLOR BLUE}Fall Grove Town\n"
    .string "It's...I dont even know to be honest$"

Script_FallGroveTownHouse1OldMan1::
    lock
    faceplayer
    msgbox Text_FallGroveTownHouse1OldMan1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse1OldMan1:
    .string "Back in my day, I was the number one\n"
    .string "pokémon trainer in the world!$"

Script_FallGroveTownHouse1OldWoman1::
    lock
    msgbox Text_FallGroveTownHouse1OldWoman1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse1OldWoman1:
    .string "I think it's time for you to take\n"
    .string "your pills, dear.$"
    
Script_FallGroveTownHouse2Woman1::
    lock
    faceplayer
    msgbox Text_FallGroveTownHouse2Woman1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse2Woman1:
    .string "My husband works super hard to take\n"
    .string "care of the farm, and now my son\l"
    .string "is helping as well.\l"
    .string "I'm so proud of both of them.$"

Script_FallGroveTownHouse2LittleGirl1::
    lock
    faceplayer
    msgbox Text_FallGroveTownHouse2LittleGirl1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse2LittleGirl1:
    .string "My brother is just a little older than\n"
    .string "me, so why does he get to help and I\l"
    .string "don't?\l"
    .string "It's not fair...$"
    
Script_FallGroveTownFarmer1::
    lock
    faceplayer
    msgbox Text_FallGroveTownFarmer1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownFarmer1:
    .string "Working the farm is a lot of work,\n"
    .string "but knowing my wife is waiting at\l"
    .string "home with fresh food helps me continue\l"
    .string "pushing myself.$"

Script_FallGroveTownFarmer2::
    lock
    faceplayer
    msgbox Text_FallGroveTownFarmer2, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownFarmer2:
    .string "I can't wait until my little sister\n"
    .string "can help me and dad in the farm.\l"
    .string "We are a perfect team!$"

Text_FallGrove_GeologistFirstCall:
    .string "Bzzzt...\p"
    .string "Bzzzt...\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: {PLAYER}?\n"
    .string "It's me, Dr. Stone.\p"
    .string "Have you been doing well?$"

Text_FallGrove_GeologistFirstCallNO:
    .string "Oh... Well the news I'm about to tell\n"
    .string "you definitely won't help with your\l"
    .string "mood.\p"
    .string "$"

Text_FallGrove_GeologistFirstCallYES:
    .string "Well, I don't mean to dampen your mood,\n"
    .string "there seems to be some bad news that I\l"
    .string "must deliver.\p"
    .string "$'"

Text_FallGrove_GeologistDeliverBadNews:
    .string "After that interaction with Angrboda,\n"
    .string "I dug through some of my old research,\l"
    .string "and I found that the bedrock layer\l"
    .string "underneath {COLOR RED}Mt. Emberfall{COLOR DARK_GRAY} is way thinner\l"
    .string "than anywhere else.\p"
    .string "Though it should still be sufficiently\n"
    .string "thick, you should check {COLOR RED}Mt. Emberfall{COLOR DARK_GRAY}\l"
    .string "to see if {COLOR BLUE}Angrboda{COLOR DARK_GRAY} is messing around\l"
    .string "there.\p"
    .string "Wait...\p"
    .string "Do you even know where {COLOR RED}Mt. Emberfall{COLOR DARK_GRAY} is?"

Text_FallGrove_GeologistExplainMtEmberfall:
    .string "{COLOR RED}Mt. Emberfall{COLOR DARK_GRAY} is the volcano that\n"
    .string "created the landmass we know as Heto.\p"
    .string "It's still active and it's located in\n"
    .string "the heart of the region.\p"
    .string "Where are you right now?\p"
    .string "..."
    .string "..."
    .string "I see.\p"
    .string "So you're in Fall Grove Town right now.\p"
    .string "If you go down south, and continue on\n"
    .string "the route below, you'll arrive at\l"
    .string "{COLOR RED}Mt. Emberfall{COLOR DARK_GRAY} in no time.\p"
    .string "Anyways, I'll be awaiting your report.$"

Text_FallGrove_GeologistNotExplainingMtEmberfall:
    .string "Yeah, I'll need you to check on what's\n"
    .string "going on there.\p"
    .string "Let me know if anything's up.\p"
    .string "I'll be awaiting your report.$"