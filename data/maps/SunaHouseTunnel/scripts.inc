SunaHouseTunnel_MapScripts::
	.byte 0

Script_SunaHouseTunnelMan1::
    lock
    faceplayer
    msgbox Text_SunaHouseTunnelMan1, MSGBOX_DEFAULT
    release
    end

Text_SunaHouseTunnelMan1:
    .string "Don't worry.\n"
    .string "I'm not hiding anything in that tunnel.\l"
    .string "It's just so hot outside that\l"
    .string "we can't go on the surface,\l"
    .string "so we go underground instead.$"

Script_SunaHouseTunnelWoman1::
    lock
    faceplayer
    msgbox Text_SunaHouseTunnelWoman1, MSGBOX_DEFAULT
    release
    end

Text_SunaHouseTunnelWoman1:
    .string "That tunnel took him quite a long\n"
    .string "time to build.\l"
    .string "Almost 10 years.$"
