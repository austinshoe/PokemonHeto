EverbloomGym_MapScripts::
        map_script MAP_SCRIPT_ON_LOAD, Everbloom_Gym_OnLoad
        map_script MAP_SCRIPT_ON_RESUME, Everbloom_Gym_OnResume
	.byte 0
    
Everbloom_Gym_OnLoad:
    end

Everbloom_Gym_OnResume:
    end

Everbloom_Gym_Guide::
    lock
    faceplayer
    goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Everbloom_Gym_Guide_Defeated
    msgbox Text_Everbloom_Guide_Advice MSGBOX_DEFAULT
    release
    end

Everbloom_Gym_Guide_Defeated::
    msgbox Text_Everbloom_Guide_Defeated
    release
    end

Text_Everbloom_Guide_Advice:
    .string "Hey, how's it going, Champ?\p"
    .string "Everbloom's Gym Leader, Flora, uses\n"
    .string "{COLOR GREEN}Grass {COLOR DARK_GRAY}type Pokémon.\l"
    .string "Having a {COLOR GREEN}Bug{COLOR DARK_GRAY} type Pokémon or a {COLOR RED}fire{COLOR DARK_GRAY} type\l"
    .string "will make things a lot easier for you.\p"
    .string "Hey, you got this. Go for it!$"
    
Text_Everbloom_Guide_Defeated:
    .string "I smell the perfume of victory on you.$"
