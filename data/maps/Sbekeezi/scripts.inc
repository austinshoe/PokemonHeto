Sbekeezi_MapScripts::
	.byte 0

Sbekeezi_Bartender::
    lock
    faceplayer
    applymovement 3, Common_Movement_ExclamationMark
    msgbox Text_Bartender, MSGBOX_DEFAULT
    waitmessage
    closemessage
    msgbox Text_SbekeeziKickedOut, MSGBOX_DEFAULT
    waitmessage
    closemessage
    fadescreen FADE_TO_BLACK
    warp MAP_KASAAN, 4
    delay 32
    fadescreen FADE_FROM_BLACK
    release
    end
    
    

Script_KassanSpeakeasy1::
    lock
    faceplayer
    message Text_KassanSpeakeasyPiano
    waitmessage
    closemessage
    delay 16
    applymovement 2, Common_Movement_FaceLeft
    waitmovement 2
    applymovement 2, Common_Movement_ExclamationMark
    waitbuttonpress
    message Text_KassanSpeakeasyNerd1
    waitmessage
    closemessage
    delay 16
    applymovement 1, Common_Movement_FaceRight
    waitmovement 1
    applymovement 1, Common_Movement_ExclamationMark
    waitbuttonpress
    message Text_KassanSpeakeasyWhip
    waitmessage
    closemessage
    delay 16
    applymovement 1, Common_Movement_FaceUp
    waitmovement 1
    delay 16
    applymovement 2, Common_Movement_FaceRight
    waitmovement 2
    release
    end

Text_KassanSpeakeasyPiano:
    .string "{FONT_SMALL_NARROW}Hey!\n"
    .string "Don’t talk to me!\l"
    .string "If that kid over there hears that I\l"
    .string "stopped playing piano he’ll beat my ass.\p"
    .string "$"

Text_KassanSpeakeasyNerd1:
    .string "{COLOR DARK_GRAY}{SHADOW DARK_GRAY}Kid:{SHADOW LIGHT_GRAY} Oi!\n"
    .string "Why’d you stop playing?\p"
    .string "$"

Text_KassanSpeakeasyWhip:
    .string "{SHADOW DARK_GRAY}Kid: {SHADOW LIGHT_GRAY}Imma whip you\p"
    .string "{SHADOW DARK_GRAY}Piano man: {SHADOW LIGHT_GRAY}{COLOR RED}OW!!!!{COLOR DARK_GRAY}That hurt so freaking\n"
    .string "bad!\l"
    .string "Wahhhhhhhh\p"
    .string "$"

Script_KassanSpeakeasy2::
    lock
    msgbox Text_KassanSpeakeasyNerd2, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyNerd2:
    .string "{SHADOW DARK_GRAY}Kid: {SHADOW LIGHT_GRAY}I swear on the\n"
    .string "{CLEAR_TO 70}{COLOR GREEN}Holey Logs\l"
    .string "{COLOR DARK_GRAY}, if that piano man stops playing one\l"
    .string "more time, I will do unspeakable things\l"
    .string "to him.$"

Text_Bartender:
    .string "Hey!\n"
    .string "What are you doing here?\l"
    .string "Get out of here! Scram!$"

Text_SbekeeziKickedOut:
    .string "{PLAYER} was\n"
    .string "forcibly ejected from the club.$"
