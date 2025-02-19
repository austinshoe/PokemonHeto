NewMap8_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, NewMap8_OnTransition
	.byte 0

NewMap8_OnTransition:
    setflag FLAG_VISITED_SLATEPORT_CITY
    end

Script_CoralShoreSign::
    lock
    faceplayer
    msgbox Text_CoralShoreSign, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreSign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Coral Shore\n"
    .string "{COLOR DARK_GRAY}There's water here or something idk.$"

Script_CoralShoreBeachMan1::
    lock
    msgbox Text_CoralShoreBeachMan1, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachMan1:
    .string "Whew!\n"
    .string "Setting up this hammock is a TON\l"
    .string "of work!$"

Script_CoralShoreBeachMan2::
    lock
    faceplayer
    msgbox Text_CoralShoreBeachMan2, MSGBOX_DEFAULT
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
    msgbox Text_CoralShoreBeachTuber1, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachTuber1:
    .string "I LOVE THE BEACH!!!!!!!!!$"
    
Script_CoralShoreBeachTuber2::
    lock
    faceplayer
    msgbox Text_CoralShoreBeachTuber2, MSGBOX_DEFAULT
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
    msgbox Text_CoralShoreBeachTuber3, MSGBOX_DEFAULT
    release
    end

Text_CoralShoreBeachTuber3:
    .string "THE SAND IS HOT!!!!!\n"
    .string "THE SAND IS HOT!!!!!$"
