SilverstoneHouse6A_MapScripts::
	.byte 0

Script_SilverstoneHouse6Man1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse6Man1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse6Man1:
    .string "Whew.\n"
    .string "Nothing is more tiring than shopping\l"
    .string "with your wife.$"

Script_SilverstoneHouse6Woman1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse6Woman1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse6Woman1:
    .string "Check out these clothes that my\n"
    .string "husband bought for me!\l"
    .string "They're so cool, right?$"
