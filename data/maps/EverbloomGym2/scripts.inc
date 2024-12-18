EverbloomGym2_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, EverbloomGym2_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, EverbloomGym2_OnFrame
	.byte 0

EverbloomGym2_OnTransition:
    setvar VAR_TEMP_0, 0
    end

EverbloomGym2_OnFrame:
    map_script_2 VAR_TEMP_0, 0, EverbloomGym2_Entrance
    .2byte 0

EverbloomGym2_Entrance:
    lockall
    message Text_EverbloomGym2_Entrance
    waitmessage
    waitbuttonpress
    closemessage
    setvar VAR_TEMP_0, 1
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
    goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, Everbloom_Gym_FloraPostBattle
    msgbox Text_EverbloomGym2_WateringFlowers, MSGBOX_DEFAULT
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 1
    faceplayer
    message Text_EverbloomGym2_FloraIntro
    waitmessage
    applymovement 1, Common_Movement_ExclamationMark
    waitmovement 1
    message Text_EverbloomGym2_FloraIntro2
    waitmessage
    waitbuttonpress
    closemessage
    getplayerxy VAR_TEMP_0, VAR_TEMP_1
    compare VAR_TEMP_0, 7
    goto_if_eq Everbloom_Gym_Flora_Playeris7
    goto_if_lt Everbloom_Gym_Flora_PlayerisLeft
    goto_if_gt Everbloom_Gym_Flora_PlayerisRight
    release
    end

Everbloom_Gym_Flora_Playeris7:
    compare VAR_TEMP_1, 8
    goto_if_gt Everbloom_Gym_Flora_PlayerisDown
    goto_if_lt Everbloom_Gym_Flora_PlayerisUp
    release
    end
    
Everbloom_Gym_Flora_PlayerisDown:
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkDown
    applymovement 1, EverbloomMovement_WalkUp
    waitmovement 0
    waitmovement 0
    call Everbloom_Gym_Flora2
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkBackUp
    applymovement 1, EverbloomMovement_WalkBackDown
    waitmovement 0
    waitmovement 0
    goto Everbloom_Gym_Flora3
    release
    end

Everbloom_Gym_Flora_PlayerisUp:
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkUp
    applymovement 1, EverbloomMovement_WalkDown
    waitmovement 0
    waitmovement 0
    call Everbloom_Gym_Flora2
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkBackDown
    applymovement 1, EverbloomMovement_WalkBackUp
    waitmovement 0
    waitmovement 0
    goto Everbloom_Gym_Flora3
    release
    end
   
Everbloom_Gym_Flora_PlayerisLeft:
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkLeft
    applymovement 1, EverbloomMovement_WalkRight
    waitmovement 0
    waitmovement 0
    call Everbloom_Gym_Flora2
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkBackRight
    applymovement 1, EverbloomMovement_WalkBackLeft
    waitmovement 0
    waitmovement 0
    goto Everbloom_Gym_Flora3
    release
    end
   
Everbloom_Gym_Flora_PlayerisRight:
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkRight
    applymovement 1, EverbloomMovement_WalkLeft
    waitmovement 0
    waitmovement 0
    call Everbloom_Gym_Flora2
    applymovement OBJ_EVENT_ID_PLAYER, EverbloomMovement_WalkBackLeft
    applymovement 1, EverbloomMovement_WalkBackRight
    waitmovement 0
    waitmovement 0
    goto Everbloom_Gym_Flora3
    release
    end
   
Everbloom_Gym_Flora2:
    trainerbattle_no_intro TRAINER_ROXANNE_1, Text_EverbloomGym_FloraDefeated
    message Text_EverbloomGym_FloraPostBattle
    waitmessage
    closemessage
    return

Everbloom_Gym_Flora3:
    message Text_EverbloomGym_FloraPostBattle2
    call Common_EventScript_PlayGymBadgeFanfare
    waitmessage
    setflag FLAG_DEFEATED_RUSTBORO_GYM
    setflag FLAG_BADGE01_GET
    msgbox Text_EverbloomGym_FloraBadgeExplain, MSGBOX_DEFAULT
    giveitem ITEM_TM_GIGA_DRAIN
    setflag FLAG_RECEIVED_TM_ROCK_TOMB
    message Text_EverbloomGym_FloraExplainGigaDrain
    waitmessage
    closemessage
    applymovement 1, Common_Movement_FaceUp
    waitmovement 0
    release
    end

Everbloom_Gym_FloraPostBattle:
    lock
    faceplayer
    msgbox Text_EverbloomGym_FloraPostBattleDialogue, MSGBOX_DEFAULT
    applymovement 1, Common_Movement_FaceUp
    setvar VAR_TEMP_0, 1
    waitmovement 0
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
    
Text_EverbloomGym2_FloraIntro2:
    .string "Oh dear, I seem to have lost myself\n"
    .string "talking about flowers again.\p"
    .string "My name is {COLOR GREEN}Flora{COLOR DARK_GRAY}, the Gym Leader of\n"
    .string "this city. As you've probably guessed,\l"
    .string "I mainly use {COLOR GREEN}Grass{COLOR DARK_GRAY} types.\p"
    .string "If I'm right, you must be here for a\n"
    .string "Gym Battle!$"

Text_EverbloomGym2_Entrance:
    .string "The passage led to a hidden room!$"

Text_EverbloomGym_FloraDefeated:
    .string "Ah... How scintillating...$"

Text_EverbloomGym_FloraPostBattle:
    .string "{COLOR GREEN}Flora{COLOR DARK_GRAY}: What an invigorating battle...\p"
    .string "$"

Text_EverbloomGym_FloraPostBattle2:
    .string "Your moves were graceful and serene,\n"
    .string "like the flowers gently swaying in the\l"
    .string "wind.\p"
    .string "Here! Take this.\p"
    .string "{PLAYER} received the PETAL BADGE\n"
    .string "from {COLOR GREEN}Flora{COLOR DARK_GRAY}.$"

Text_EverbloomGym_FloraBadgeExplain:
    .string "This badge lets your Pokémon use the HM\n"
    .string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}Flash {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}outside of battle.\p"
    .string "Please take this with you, too.$"

Text_EverbloomGym_FloraExplainGigaDrain:
    .string "That TM there contains the move\n"
    .string "{COLOR GREEN}Giga Drain{COLOR DARK_GRAY}!\p"
    .string "Not only does it deal crazy damage,\n"
    .string "it heals you, too!$"

Text_EverbloomGym_FloraPostBattleDialogue:
    .string "You're strong!\p"
    .string "I hope you can keep growing as a\n"
    .string "trainer, so you can protect all the\l"
    .string "people in this region, regardless of\l"
    .string "skin and hair color!$"

EverbloomMovement_WalkDown:
    walk_down
    face_up
    step_end

EverbloomMovement_WalkUp:
    walk_up
    face_down
    step_end

EverbloomMovement_WalkLeft:
    walk_left
    face_right
    step_end

EverbloomMovement_WalkRight:
    walk_right
    face_left
    step_end

EverbloomMovement_WalkBackDown:
    walk_down
    step_end

EverbloomMovement_WalkBackUp:
    walk_up
    step_end

EverbloomMovement_WalkBackLeft:
    walk_left
    step_end

EverbloomMovement_WalkBackRight:
    walk_right
    step_end

