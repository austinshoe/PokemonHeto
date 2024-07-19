NewMap5_MapScripts::
	.byte 0

Script_YellowFallMapMan1::
    lock
    faceplayer
    msgbox Text_YellowFallMapMan1, MSGBOX_DEFAULT
    release
    end

Text_YellowFallMapMan1:
    .string "Did you know that this is the only\n"
    .string "place in {SHADOW DARK_GRAY}Hehamayto {SHADOW LIGHT_GRAY} that is"
    .string "fall year round?$"

Script_YellowFallMapWoman1::
    lock
    faceplayer
    msgbox Text_YellowFallMapWoman1, MSGBOX_DEFAULT
    release
    end

Text_YellowFallMapWoman1:
    .string "It's quite annoying to have to clean\n"
    .string "up these leaves all the time, but\l"
    .string "the beautifulness makes up for it.$"
