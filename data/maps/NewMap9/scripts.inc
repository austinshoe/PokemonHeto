NewMap9_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Everbloom_Center_OnTransition
    map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Everbloom_Center_OnTransition::
    setrespawn HEAL_LOCATION_EVERBLOOM_CITY
    end

Script_EverbloomPokeCenter1::
    lock
    faceplayer
    msgbox Text_EverbloomPokeCenter1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomPokeCenter1:
    .string "That wild Caterpie out there defeated\n"
    .string "my {SHADOW DARK_GRAY}Arceus!{SHADOW LIGHT_GRAY}\l"
    .string "Luckily I ran back here and got it all\l"
    .string "healed up by Nurse Joy!\l"
    .string "I think I’m going to propose to her\l"
    .string "once I turn 8.$"

Script_EverbloomPokeCenter2::
    lock
    faceplayer
    msgbox Text_EverbloomPokeCenter2, MSGBOX_DEFAULT
    release
    end

Text_EverbloomPokeCenter2:
    .string "A lot of people think that Caterpie\n"
    .string "is the strongest Pokémon out there.\l"
    .string "Personally, I disagree.\l"
    .string "I think Weedle is the strongest cuz\l"
    .string "that thing mopped the floor with my\l"
    .string "{COLOR BLUE}PRIMAL KYOGRE.l"
    .string "{COLOR DARK_GRAY}I wonder if Weedle is a\l"
    .string "Legendary Pokémon.$"

Script_EverbloomPokeCenter3::
    lock
    faceplayer
    msgbox Text_EverbloomPokeCenter3, MSGBOX_DEFAULT
    release
    end

Text_EverbloomPokeCenter3:
    .string "Sometimes, if you are too far from a\n"
    .string "PokéCenter, you can use healing items\l"
    .string "like {COLOR RED}Potions {COLOR DARK_GRAY} to heal your party.$"
