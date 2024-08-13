SunaTown_MapScripts::
	.byte 0

Script_SunaTownTag1::
    lock
    faceplayer
    msgbox Text_SunaTownTag1, MSGBOX_DEFAULT
    release
    end

Text_SunaTownTag1:
    .string "Man my sister is so fast.\n"
    .string "I just can't catch her.\l"
    .string "I'm never going to give up though.$"

Script_SunaTownTag2::
    lock
    faceplayer
    msgbox Text_SunaTownTag2, MSGBOX_DEFAULT
    release
    end

Text_SunaTownTag2:
    .string "My little brother is pretty slow,\n"
    .string "but I love his determination.\l"
    .string "He always comes back no matter what.$"
