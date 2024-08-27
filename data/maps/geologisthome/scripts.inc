geologisthome_MapScripts::
	.byte 0

geologisthome_Mrs_Stone::
    lock
    faceplayer
    goto_if_unset FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT geologisthome_Mrs_Stone_Worried
    goto_if_set FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT geologisthome_Mrs_Stone_Normal
    
geologisthome_Mrs_Stone_Worried:
    msgbox Text_geologisthome_Mrs_Stone_Worried, MSGBOX_DEFAULT
    release
    end

geologisthome_Mrs_Stone_Normal:
    msgbox Text_geologisthome_Mrs_Stone_Normal, MSGBOX_DEFAULT
    release
    end

Text_geologisthome_Mrs_Stone_Normal:
    .string "My husband is always wrapped up in his\n"
    .string "work.\p"
    .string "I think he cares more about research\n"
    .string "than he cares about me...$"

Text_geologisthome_Mrs_Stone_Worried:
    .string "I'm kind of worried for my husband.\n"
    .string "He still hasn't come back from work.\p"
    .string "I wish I could go check on him...$"
