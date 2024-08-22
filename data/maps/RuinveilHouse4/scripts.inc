RuinveilHouse4_MapScripts::
	.byte 0

Script_RuinveilHouse4Woman1::
    lock
    faceplayer
    msgbox Text_RuinveilHouse4Woman1, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse4Woman1:
    .string "A clock that's broken is right twice\n"
    .string "a day.\l"
    .string "A clock that is a second behind is\l"
    .string "right once every 43000 years.\l"
    .string "Basically, its better to know nothing\l"
    .string "than to almost know everything,\l"
    .string "or something like that.$"

Script_RuinveilHouse4Woman2::
    lock
    faceplayer
    msgbox Text_RuinveilHouse4Woman2, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse4Woman2:
    .string "The early bird gets the worm,\n"
    .string "but the second mouse gets the cheese.$"
    
Script_RuinveilHouse4Woman3::
    lock
    faceplayer
    msgbox Text_RuinveilHouse4Woman3, MSGBOX_DEFAULT
    release
    end

Text_RuinveilHouse4Woman3:
    .string "If at first you don't succeed,\n"
    .string "then skydiving aint for you buddy.$"
