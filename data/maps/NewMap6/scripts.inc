NewMap6_MapScripts::
	.byte 0

Script_RouteAfterFallGroveTownMan1::
    lock
    faceplayer
    msgbox Text_RouteAfterFallGroveTownMan1, MSGBOX_DEFAULT
    release
    end

Text_RouteAfterFallGroveTownMan1:
    .string "I'm so glad it's always fall here.\n"
    .string "I can't handle heat very well.$"

Script_YellowFallMapOp4::
    lock
    faceplayer
    trainerbattle_single TRAINER_CHARLIE, Text_YellowFallMapOp4Intro, Text_YellowFallMapOp4Defeat
    msgbox Text_YellowFallMapOp4PostBattle, MSGBOX_AUTOCLOSE
    end

Text_YellowFallMapOp4Intro:
    .string ""
    
Text_YellowFallMapOp4Defeat:
    .string ""

Text_YellowFallMapOp4PostBattle:
    .string ""
