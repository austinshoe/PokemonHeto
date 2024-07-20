NewMap8_MapScripts::
	.byte 0

Script_CoralShoreSign::
    lock
    faceplayer
    msgbox Text_CoralShoreSign, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreSign:
    .string "{COLOR BLUE}Coral Shore\n"
    .string "{COLOR DARK_GRAY}There's water here or something idk.$"

Script_CoralShoreBeachMan1::
    lock
    msgbox CoralShoreBeachMan1, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachMan1:
    .string "Whew!\n"
    .string "Setting up this hammock is a TON\l"
    .string "of work!$"

Script_CoralShoreBeachMan2::
    lock
    faceplayer
    msgbox CoralShoreBeachMan2, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachMan2:
    .string "The best part about the beach is\n"
    .string "relaxing in the shade of an umbrella\l"
    .string "with warm sand filling the crevices\l"
    .string "of your toes.$"
    
Script_CoralShoreBeachTuber1::
    lock
    faceplayer
    msgbox CoralShoreBeachTuber1, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachTuber1:
    .string "I LOVE THE BEACH!!!!!!!!!$"
    
Script_CoralShoreBeachTuber2::
    lock
    faceplayer
    msgbox CoralShoreBeachTuber2, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachTuber2:
    .string "I'm waiting for my brother, and then\n"
    .string "we are both going to go into the water\l"
    .string "together.\p"
    .string "I would go by myself, but I'm scared\l"
    .string "of Sharpedos that might come.$"
    
Script_CoralShoreBeachTuber3::
    lock
    faceplayer
    msgbox CoralShoreBeachTuber3, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachTuber3:
    .string "THE SAND IS HOT!!!!!\n"
    .string "THE SAND IS HOT!!!!!$"
