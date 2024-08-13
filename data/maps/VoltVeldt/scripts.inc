VoltVeldt_MapScripts::
	.byte 0

Script_VoltVeldtMan1::
    lock
    faceplayer
    msgbox Text_VoltVeldtMan1, MSGBOX_DEFAULT
    release
    end

Text_VoltVeldtMan1:
    .string "Hey, be careful boy.\n"
    .string "The next town is not for the feint\l"
    .string "of heart.$"

Script_VoltVeldtWoman1::
    lock
    faceplayer
    msgbox Text_VoltVeldtWoman1, MSGBOX_DEFAULT
    release
    end

Text_VoltVeldtWoman1:
    .string "Ground types are the only truly\n"
    .string "effective type against electric-types.\p"
    .string "I have a feeling you may need to know\l"
    .string "that.$"
