EverbloomGym_MapScripts::
    map_script MAP_SCRIPT_ON_LOAD, Everbloom_Gym_OnLoad
    map_script MAP_SCRIPT_ON_RESUME, Everbloom_Gym_OnResume
	.byte 0
    
Everbloom_Gym_OnLoad:
    end

Everbloom_Gym_OnResume:
    end

Everbloom_Gym_Secret_Path::
    lockall
    msgbox Text_Everbloom_GymSecretPath, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Everbloom_Gym_PlayerAnsweredNo
    msgbox Text_Everbloom_GymPAYes, MSGBOX_DEFAULT
    warp MAP_EVERBLOOM_GYM2, 7, 13
    releaseall
    end

Everbloom_Gym_PlayerAnsweredNo:
    releaseall
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
    .string "If you look around, you'll see that the\n"
    .string "Gym Leader doesn't seem to be here, and\l"
    .string "you would be right.\p"
    .string "Battle the rest of the trainers here,\n"
    .string "I'll give you a little hint on how to\l"
    .string "get to the gym leader!\p"
    .string "Hey, you got this. Go for it!$"
    
Text_Everbloom_Guide_Defeated:
    .string "I smell the perfume of victory on you.$"

Everbloom_Gym_Flora::
    lock
    faceplayer
    setflag FLAG_DEFEATED_RUSTBORO_GYM
    release
    end

Text_Everbloom_GymSecretPath:
    .string "Ooh!\n"
    .string "Looks like there's a secret path here.\p"
    .string "Want to follow it?$"

Text_Everbloom_GymPAYes:
    .string "Honestly, who wouldn't?$"
