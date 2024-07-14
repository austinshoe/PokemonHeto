EverbloomOrchard_MapScripts::
	.byte 0
    
EverbloomOrchard_Lady::
    lock
    faceplayer
    msgbox Text_EverbloomOrchard, MSGBOX_DEFAULT
    release
    end

Text_EverbloomOrchard:
    .string "I love the orchard because it’s so calm.\n"
    .string "The gentle swaying of the flowers, the\l"
    .string "sweet scent, everything adds to make the\l"
    .string "atmosphere so calm and relaxing.$"

Script_EverbloomOrchard1::
    lock
    faceplayer
    msgbox Text_EverbloomOrchard1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomOrchard1:
    .string "Did you know?\n"
    .string "Everbloom City is the region’s #1\l"
    .string "exporter of honey thanks to this\l"
    .string "orchard!$"
