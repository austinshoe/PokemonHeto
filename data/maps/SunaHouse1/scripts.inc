SunaHouse1_MapScripts::
	.byte 0

Script_SunaHouse1Man1::
    lock
    faceplayer
    msgbox Text_SunaHouse1Man1, MSGBOX_DEFAULT
    release
    end

Text_SunaHouse1Man1:
    .string "A little birdie told me that one\n"
    .string "of these houses has a path to get\l"
    .string "Ruinveil.$"
    
Script_SunaHouse1Man2::
    lock
    faceplayer
    msgbox Text_SunaHouse1Man2, MSGBOX_DEFAULT
    release
    end

Text_SunaHouse1Man2:
    .string "There's not a lot to do here,\n"
    .string "but that's what I like about it.$"
    
Script_SunaHouse1Woman1::
    lock
    faceplayer
    msgbox Text_SunaHouse1Woman1, MSGBOX_DEFAULT
    release
    end

Text_SunaHouse1Woman1:
    .string "How many gym badges do you have?\p"
    .string "Wow!\l"
    .string "That's a lot!\l"
    .string "Good job!$"
    
Script_SunaHouse1Woman2::
    lock
    faceplayer
    msgbox Text_SunaHouse1Woman2, MSGBOX_DEFAULT
    release
    end

Text_SunaHouse1Woman2:
    .string "All the political unrest is just too\n"
    .string "much for me.\l"
    .string "That's why I like just relaxing here.$"
