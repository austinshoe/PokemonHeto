FrostvaleTundra_MapScripts::
	.byte 0

Script_FrostvaleTundraMan1::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraMan1, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraMan1:
    .string "Certain pokémon types are better\n"
    .string "against other types.\l"
    .string "For example, flying types are very\l"
    .string "effective against ice types.$"

Script_FrostvaleTundraWoman1::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraWoman1, MSGBOX_DEFAULT
    closemessage
    call Common_EventScript_OutOfCenterPartyHeal
    fadescreen FADE_TO_BLACK
    fadescreen FADE_FROM_BLACK
    release
    end

Text_FrostvaleTundraWoman1:
    .string "You’re looking quite cold.\n"
    .string "Here, have some hot chocolate.$"

Script_FrostvaleTundraKid2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraKid2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraKid2:
    .string "Have you seen my Swinub?\n"
    .string "He looks like a Swinub.$"

Script_FrostvaleTundraKid1::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraKid1, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraKid1:
    .string "A lot of kids I know have been talking\n"
    .string "about the power of Caterpie and Weedle,\l"
    .string "but I never hear anyone talking about\l"
    .string "Wurmple.\l"
    .string "That thing one shot my Charizard\l"
    .string "and Blaziken.$"

Script_FrostvaleTundraSign::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraSign, MSGBOX_DEFAULT
    release
    end
    
Text_FrostvaleTundraSign:
    .string "Welcome to {COLOR BLUE}Frostvale Tundra$"
