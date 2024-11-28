NewMap7_MapScripts::
	.byte 0

Script_MtEmberfallFallExteriorSign::
    lock
    faceplayer
    msgbox Text_MtEmberfallFallExteriorSign, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallFallExteriorSign:
    .string "{COLOR BLUE}Mt. Emberfall\n"

Script_MtEmberfallFallExteriorMan1::
    lock
    faceplayer
    msgbox Text_MtEmberfallFallExteriorMan1, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallFallExteriorMan1:
    .string "I'm on my way to Onsen City.\n"
    .string "Quite a distance from here, but I\l"
    .string "should be alright.$"

Script_MtEmberfallFallExteriorMan2::
    lock
    faceplayer
    msgbox Text_MtEmberfallFallExteriorMan2, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallFallExteriorMan2:
    .string "This mountain is one tough climb.\n"
    .string "Good excercise early in the morning.$"

Script_MtEmberfallFallExteriorWoman1::
    lock
    faceplayer
    msgbox Text_MtEmberfallFallExteriorWoman1, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallFallExteriorWoman1:
    .string "I love coming here to pick flowers.\n"
    .string "The colors are just so pretty.$"

Script_MtEmberfallFallExteriorWoman2::
    lock
    faceplayer
    msgbox Text_MtEmberfallFallExteriorWoman2, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallFallExteriorWoman2:
    .string "Look at these flowers.\n"
    .string "They are both blue and purple!$"

Script_YellowFallMapOp5::
    lock
    faceplayer
    trainerbattle_single TRAINER_RICKY_2, Text_YellowFallMapOp5Intro, Text_YellowFallMapOp5Defeat
    msgbox Text_YellowFallMapOp5PostBattle, MSGBOX_AUTOCLOSE
    end

Text_YellowFallMapOp5Intro:
    .string ""
    
Text_YellowFallMapOp5Defeat:
    .string ""

Text_YellowFallMapOp5PostBattle:
    .string ""

Script_YellowFallMapOp6::
    lock
    faceplayer
    trainerbattle_single TRAINER_RICKY_3, Text_YellowFallMapOp6Intro, Text_YellowFallMapOp6Defeat
    msgbox Text_YellowFallMapOp6PostBattle, MSGBOX_AUTOCLOSE
    end

Text_YellowFallMapOp6Intro:
    .string ""
    
Text_YellowFallMapOp6Defeat:
    .string ""

Text_YellowFallMapOp6PostBattle:
    .string ""

Script_YellowFallMapOp7::
    lock
    faceplayer
    trainerbattle_single TRAINER_RICKY_4, Text_YellowFallMapOp7Intro, Text_YellowFallMapOp7Defeat
    msgbox Text_YellowFallMapOp7PostBattle, MSGBOX_AUTOCLOSE
    end

Text_YellowFallMapOp7Intro:
    .string ""
    
Text_YellowFallMapOp7Defeat:
    .string ""

Text_YellowFallMapOp7PostBattle:
    .string ""
