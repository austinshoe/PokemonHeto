NewMap5_MapScripts::
	.byte 0

Script_YellowFallMapMan1::
    lock
    faceplayer
    msgbox Text_YellowFallMapMan1, MSGBOX_DEFAULT
    release
    end

Text_YellowFallMapMan1:
    .string "Did you know that this is the only\n"
    .string "place in {COLOR RED}Hehamayto {COLOR DARK_GRAY}that is\l"
    .string "fall year round?$"

Script_YellowFallMapWoman1::
    lock
    faceplayer
    msgbox Text_YellowFallMapWoman1, MSGBOX_DEFAULT
    release
    end

Text_YellowFallMapWoman1:
    .string "It's quite annoying to have to clean\n"
    .string "up these leaves all the time, but\l"
    .string "the beautifulness makes up for it.$"

Script_YellowFallMapOp1::
    lock
    faceplayer
    trainerbattle_single TRAINER_LOLA_5, Text_YellowFallMapOp1Intro, Text_YellowFallMapOp1Defeat
    msgbox Text_YellowFallMapOp1PostBattle, MSGBOX_AUTOCLOSE
    end

Text_YellowFallMapOp1Intro:
    .string ""
    
Text_YellowFallMapOp1Defeat:
    .string ""

Text_YellowFallMapOp1PostBattle:
    .string ""

Script_YellowFallMapOp2::
    lock
    faceplayer
    trainerbattle_single TRAINER_RICKY_1, Text_YellowFallMapOp2Intro, Text_YellowFallMapOp2Defeat
    msgbox Text_YellowFallMapOp2PostBattle, MSGBOX_AUTOCLOSE
    end

Text_YellowFallMapOp2Intro:
    .string ""
    
Text_YellowFallMapOp2Defeat:
    .string ""

Text_YellowFallMapOp2PostBattle:
    .string ""

Script_YellowFallMapOp3::
    lock
    faceplayer
    trainerbattle_single TRAINER_SIMON, Text_YellowFallMapOp3Intro, Text_YellowFallMapOp3Defeat
    msgbox Text_YellowFallMapOp3PostBattle, MSGBOX_AUTOCLOSE
    end

Text_YellowFallMapOp3Intro:
    .string ""
    
Text_YellowFallMapOp3Defeat:
    .string ""

Text_YellowFallMapOp3PostBattle:
    .string ""
