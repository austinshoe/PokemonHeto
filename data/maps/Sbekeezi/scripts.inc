Sbekeezi_MapScripts::
	.byte 0

Script_KassanSpeakeasy1::
    lock
    faceplayer
    message Text_KassanSpeakeasyPiano
    waitmessage
    closemessage
    delay 16
    applymovement 2, face_left
    waitmovement 2
    applymovement 2, Common_Movement_ExclamationMark
    waitbuttonpress
    message Text_KassanSpeakeasyNerd1
    waitmessage
    closemessage
    delay 16
    applymovement 1, face_right
    waitmovement 1
    applymovement 1, Common_Movement_ExclamationMark
    waitbuttonpress
    message Text_KassanSpeakeasyWhip
    waitmessage
    closemessage
    delay 16
    applymovement 1, face_up
    waitmovement 1
    delay 16
    applymovement 2, face_right
    release
    end

Text_KassanSpeakeasyPiano:
    .string "{FONT_SMALL_NARROW}Hey!\n"
    .string "Don’t talk to me!\l"
    .string "If that kid over there hears that I\l"
    .string "stopped playing piano he’ll beat my ass.$"

Text_KassanSpeakeasyNerd1
    .string "{COLOR DARK_GRAY}{SHADOW DARK_GRAY}Kid:{SHADOW LIGHT_GRAY}Oi!\n"
    .string "Why’d you stop playing?$"

Text_KassanSpeakeasyWhip
    .string "{SHADOW DARK_GRAY}Kid:{SHADOW LIGHT_GRAY}Imma whip you\p"
    .string "{SHADOW DARK_GRAY}Piano man:{SHADOW LIGHT_GRAY}{COLOR RED}OW!!!!{COLOR DARK_GRAY}That hurt so freaking\n"
    .string "bad!\l"
    .string "Wahhhhhhhh$"

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
