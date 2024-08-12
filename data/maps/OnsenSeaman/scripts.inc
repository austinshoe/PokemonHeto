OnsenSeaman_MapScripts::
	.byte 0

Script_OnsenHouse1Man1::
    lock
    faceplayer
    msgbox Text_OnsenHouse1Man1, MSGBOX_DEFAULT
    release
    end

Text_OnsenHouse1Man1:
    .string "Onsen gets quite hot due to the lava,\n"
    .string "but my Charizard loves it here,\l"
    .string "so I guess I'm stuck here...$"

Script_OnsenHouse1Son1::
    lock
    faceplayer
    msgbox Text_OnsenHouse1Son1, MSGBOX_DEFAULT
    release
    end

Text_OnsenHouse1Son1:
    .string "He says he's stuck here 'cuz of his\n"
    .string "Charizard, but he really does like it\l"
    .string "here.\l"
    .string "His denial is so cute!$"
