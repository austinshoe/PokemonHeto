TritonBay_MapScripts::
	.byte 0

Script_TritonBayMan1::
    lock
    faceplayer
    msgbox Text_TritonBayMan1, MSGBOX_DEFAULT
    release
    end

Text_TritonBayMan1:
    .string "Is it just me,\n"
    .string "or are kids these days getting\l"
    .string "waaaaaaaay shorter.\l"
    .string "Like dude, when you gonna hit\l"
    .string "you're growthspurt?$"

Script_TritonBayWoman1::
    lock
    faceplayer
    msgbox Text_TritonBayWoman1, MSGBOX_DEFAULT
    closemessage
    call Common_EventScript_OutOfCenterPartyHeal
    fadescreen FADE_TO_BLACK
    fadescreen FADE_FROM_BLACK
    release
    end

Text_TritonBayWoman1:
    .string "You're doing a great job, sweetie!\n"
    .string "Here, have some juice.$"
