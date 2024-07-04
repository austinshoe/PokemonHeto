Player_House_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Player_House_OnTransition
    .byte 0

Player_House_OnTransition:
    setrespawn HEAL_LOCATION_PEARL_TOWN
    end

Player_House_Mom::
    lock
    faceplayer
    goto_if_unset FLAG_RESCUED_BIRCH, Player_House_Lab
    msgbox Text_Mom_Heal, MSGBOX_DEFAULT
    closemessage
    call Common_EventScript_OutOfCenterPartyHeal
    msgbox Text_Mom_Looking_Better, MSGBOX_DEFAULT
    release
    end

Player_House_Lab::
    msgbox Text_Mom_Lab
    release
    end

Text_Mom_Lab:
    .string "Hi, Honey.\n"
    .string "Professor Pine was looking for you.\l"
    .string "You should go to his lab.$"

Text_Mom_Heal:
    .string "{PLAYER}!\n"
    .string "Your Pokémon look tired.\l"
    .string "You should take a rest.$"

Text_Mom_Looking_Better:
    .string "There!\n"
    .string "You're looking way more energized now.\l"
    .string "Stay safe out there!$"
