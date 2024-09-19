EverbloomGym2_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, EverbloomGym2_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, EverbloomGym2_OnFrame
	.byte 0

EverbloomGym2_OnTransition:
    setvar VAR_TEMP_A, 0
    end

EverbloomGym2_OnFrame:
    map_script_2 VAR_TEMP_A, 0, EverbloomGym2_Entrance
    .byte 2

EverbloomGym2_Entrance:
    lockall
    message Text_EverbloomGym2_Entrance
    waitmessage
    setvar VAR_TEMP_A, 1
    waitbuttonpress
    closemessage
    releaseall
    end

Everbloom_Gym2_Secret_Path::
    lockall
    msgbox Text_Everbloom_Gym2SecretPath, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Everbloom_Gym2_PlayerAnsweredNo
    warp MAP_EVERBLOOM_GYM, 23, 10
    releaseall
    end

Everbloom_Gym2_PlayerAnsweredNo:
    releaseall
    end

Everbloom_Gym_Flora::
    lock
    msgbox Text_EverbloomGym2_WateringFlowers, MSGBOX_DEFAULT
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 1
    faceplayer
    message Text_EverbloomGym2_FloraIntro
    waitmessage
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 1
    setflag FLAG_DEFEATED_RUSTBORO_GYM
    release
    end

Text_Everbloom_Gym2SecretPath:
    .string "Return to the main gym?$"

Text_EverbloomGym2_WateringFlowers:
    .string "Man...\n"
    .string "Watering these flowers, watching 'em\l"
    .string "grow... It's the best thing I could \l"
    .string "possibly want.$"

Text_EverbloomGym2_FloraIntro:
    .string "Oh!\p"
    .string "Excuse me!\n"
    .string "I got carried away watering my flowers.\l"
    .string "I just can't help but be entranced by\l"
    .string "the beautiful aroma, the graceful sway\l"
    .string "of the flowers...\p"
    .string "$"

Text_EverbloomGym2_Entrance:
    .string "The passage led to a hidden room!$"
