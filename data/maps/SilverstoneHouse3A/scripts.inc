SilverstoneHouse3A_MapScripts::
	.byte 0

Script_SilverstoneHouse3Man1::
    lock
    msgbox Text_SilverstoneHouse3Man1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse3Man1:
    .string "Me and my wife are having a staring,\n"
    .string "and I am SO not losing this.$"

Script_SilverstoneHouse3Woman1::
    lock
    msgbox Text_SilverstoneHouse3Woman1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse3Woman1:
    .string "I haven't lost to him yet,\n"
    .string "but he just never gives up.\l"
    .string "That's why I love him.$"
