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
    .string “atmosphere so calm and relaxing.$”
