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
