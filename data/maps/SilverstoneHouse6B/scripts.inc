SilverstoneHouse6B_MapScripts::
	.byte 0

Script_SilverstoneHouse6Kid1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse6Kid1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse6Kid1:
    .string "I recommend the book 'Foundation'\n"
    .string "by Isaac Asimov.\l"
    .string "It's quite the page-turner.$"

Script_SilverstoneHouse6Kid2::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse6Kid2, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse6Kid2:
    .string "Wuh-?\n"
    .string "Oh, hey.\l"
    .string "I was just taking a nap.\l"
    .string "Working is hard.$"
