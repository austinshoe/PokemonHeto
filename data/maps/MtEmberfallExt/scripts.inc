MtEmberfallExt_MapScripts::
	.byte 0

Script_MtEmberfallExtMan1::
    lock
    faceplayer
    msgbox Text_MtEmberfallExtMan1, MSGBOX_DEFAULT
    release
    end

MtEmberfallExt_Trigger::
    lock 
    setvar VAR_MAUVILLE_CITY_STATE, 1
    release
    end

MtEmberfallExt_Trigger1::
    lock
    setvar VAR_MAUVILLE_CITY_STATE, 0
    release
    end

Text_MtEmberfallExtMan1:
    .string "You're seriously trying to climb\n"
    .string "without hiking shoes?\l"
    .string "I mean sure, go ahead.\l"
    .string "I don't care.$"

Script_MtEmberfallExtWoman1::
    lock
    faceplayer
    msgbox Text_MtEmberfallExtWoman1, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallExtWoman1:
    .string "Wow.\n"
    .string "It took me years to get strong enough\l"
    .string "to climb this high up.\l"
    .string "You must be a climbing prodigy...$"

Script_MtEmberfallExtMan2::
    lock
    faceplayer
    msgbox Text_MtEmberfallExtMan2, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallExtMan2:
    .string "You're about to reenter the mountain.\n"
    .string "After that, just walk around the lava,\l"
    .string "and through the hole and BAM!\l"
    .string "Onsen City baby.$"
