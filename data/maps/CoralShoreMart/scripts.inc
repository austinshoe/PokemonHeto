CoralShoreMart_MapScripts::
	.byte 0

Script_PokemartLittleBoy1::
    lock
    faceplayer
    msgbox Text_PokemartLittleBoy1, MSGBOX_DEFAULT
    release
    end

Text_PokemartLittleBoy1:
    .string "Wait, this isn't the Pokécenter.\n"
    .string "Where in the world am I?$"
    
Script_PokemartMan1::
    lock
    faceplayer
    msgbox Text_PokemartMan1, MSGBOX_DEFAULT
    release
    end

Text_PokemartMan1:
    .string "Quite embarassing that I ran out of\n"
    .string "{COLOR RED}pokéballs {COLOR DARK_GRAY}trying to catch a Wurmple.\l"
    .string "Thank god for pokémarts.$"
