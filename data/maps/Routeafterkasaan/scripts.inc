Routeafterkasaan_MapScripts::
	.byte 0

Script_RouteAfterKassanLittleBoy1::
    lock
    faceplayer
    msgbox Text_RouteAfterKassanLittleBoy1, MSGBOX_DEFAULT
    release
    end

Text_RouteAfterKassanLittleBoy1:
    .string "You're finally leaving?\n"
    .string "Took you long enough.$"

Script_RouteAfterKassanLittleGirl1::
    lock
    faceplayer
    msgbox Text_RouteAfterKassanLittleGirl1, MSGBOX_DEFAULT
    release
    end

Text_RouteAfterKassanLittleGirl1:
    .string "Can you walk faster?\n"
    .string "I don't want to see you a second more\l"
    .string "than I have to.$"
