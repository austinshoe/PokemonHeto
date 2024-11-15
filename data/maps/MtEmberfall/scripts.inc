MtEmberfall_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, MtEmberfall_OnFrame
	.byte 0

MtEmberfall_OnFrame:
    map_script_2 VAR_RUSTURF_TUNNEL_STATE, 0, MtEmberfall_GruntEncounter
    .2byte 0

MtEmberfall_GruntEncounter:
    lock
    setobjectxyperm 8, 38, 32
    hideobjectat OBJ_EVENT_ID_PLAYER, 0
    applymovement OBJ_EVENT_ID_PLAYER, MtEmberfall_CameraPanUp
    waitmovement 0
    delay 64
    call MtEmberfall_GruntConversation
    applymovement 8, MtEmberfall_CameraUnPan1
    applymovement OBJ_EVENT_ID_PLAYER, MtEmberfall_CameraUnPan2
    waitmovement 8
    waitmovement OBJ_EVENT_ID_PLAYER
    showobjectat OBJ_EVENT_ID_PLAYER, 0
    setobjectxyperm 8, 49, 0
    applymovement 6, Common_Movement_FaceDown
    applymovement 7, Common_Movement_FaceDown
    waitmovement 6
    waitmovement 7
    call MtEmberfall_GruntConfront
    call MtEmberfall_Grunts_Post_Battle
    applymovement 6, MtEmberfall_Grunt1_Skedaddle
    applymovement 7, MtEmberfall_Grunt2_Skedaddle
    waitmovement 6
    hideobjectat 6, MAP_MT_EMBERFALL
    waitmovement 7
    hideobjectat 7, MAP_MT_EMBERFALL
    removeobject 6
    removeobject 7
    setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
    setvar VAR_RUSTURF_TUNNEL_STATE, 1
    release
    end

MtEmberfall_GruntConversation:
    applymovement 6, Common_Movement_FaceRight
    waitmovement 0
    message Text_MtEmberfall_GruntConversation1
    waitmessage
    applymovement 7, Common_Movement_FaceLeft
    waitmovement 0
    message Text_MtEmberfall_GruntConversation2
    applymovement 6, Common_Movement_FaceUp
    applymovement 7, Common_Movement_FaceUp
    waitmovement 6
    waitmovement 7
    message Text_MtEmberfall_GruntConversation3
    waitmessage
    waitbuttonpress
    closemessage
    return
     
MtEmberfall_GruntConfront:
    applymovement 6, Common_Movement_ExclamationMark
    message Text_MtEmberfall_Recognize
    waitmessage
    closemessage
    waitmovement 6
    applymovement 7, Common_Movement_ExclamationMark
    message Text_MtEmberfall_Recognize2
    waitmessage
    waitmovement 7
    message Text_MtEmberfall_Recognize3
    waitmessage
    applymovement 6, MtEmberfall_Grunt1_Confront
    trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, Text_Emberfall_Grunt1_Defeated
    message Text_Emberfall_Grunt1_PostBattle
    waitmessage
    closemessage
    message Text_Emberfall_Grunt2_Battle
    trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_5, Text_Emberfall_Grunt2_Defeated
    return

MtEmberfall_Grunts_Post_Battle:
    applymovement 6, Common_Movement_ExclamationMark
    message Text_MtEmberfall_Grunt1_PostBattle2
    waitmessage
    closemessage
    waitmovement 6
    applymovement 7, Common_Movement_FaceLeft
    waitmovement 0
    message Text_MtEmberfall_Grunt2_PostBattle2
    waitmessage
    closemessage
    return

Script_MtEmberfallInteriorP1Man1::
    lock
    faceplayer
    msgbox Text_MtEmberfallInteriorP1Man1, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallInteriorP1Man1:
    .string "Don't be afraid to lose.\n"
    .string "Just level up your pokémon and keep\l"
    .string "trying until you win!$"

Script_MtEmberfallInteriorLeftMan1::
    lock
    faceplayer
    msgbox Text_MtEmberfallInteriorLeftMan1, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallInteriorLeftMan1:
    .string "Man these rocks are tough.\n"
    .string "If only there was some way to break\l"
    .string "them...$"

Script_MtEmberfallInteriorLeftWoman1::
    lock
    faceplayer
    msgbox Text_MtEmberfallInteriorLeftWoman1, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallInteriorLeftWoman1:
    .string "I don't agree with the political\n"
    .string "views of Balegyr, but I guess he's\l"
    .string "not a bad president.$"

MtEmberfall_CameraPanUp:
    walk_up
    walk_up
    step_end

Text_MtEmberfall_GruntConversation1:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: Boss was right. It looks like\n"
    .string "the crust is noticibly thinner here.\p"
    .string "$"

Text_MtEmberfall_GruntConversation2:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: Yeah, but it looks like we'll\n"
    .string "still need a whole lot of power to get\l"
    .string "through to the gas pockets."
    .string "$"

Text_MtEmberfall_GruntConversation3:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: Well, we got the information\n"
    .string "we need.\p"
    .string "Let's report back to headquarters.$"

Text_MtEmberfall_Recognize:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: Hey!\p"
    .string "Who are you!$"

Text_MtEmberfall_Recognize2:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: Wait a moment...\p"
    .string "Didn't Madam {COLOR RED}Kirschblüte{COLOR DARK_GRAY} say to keep an\n"
    .string "eye out for a filthy Viola that meddled\l"
    .string "with her plans?\p"
    .string "This kid seems to fit the descriptions.\p"
    .string "$"

Text_MtEmberfall_Recognize2:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: You!\p"
    .string "You're trying to interfere with\n"
    .string "{COLOR BLUE}Angrboda{COLOR DARK_GRAY}'s plans again, aren't you?\p"
    .string "I won't let you! I'll stop you here!$"

Text_Emberfall_Grunt1_Defeated:
    .string "How can a colored be so strong...$"

Text_Emberfall_Grunt1_PostBattle:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: What in tarnation...$"

Text_Emberfall_Grunt2_Battle:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: I'll take care of this!$"

Text_Emberfall_Grunt2_Defeated:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: Aw, fiddlesticks...$"

Text_MtEmberfall_Grunt1_PostBattle2:
    .string "{COLOR BLUE}Grunt 1{COLOR DARK_GRAY}: There's no way that we both\n"
    .string "lost...$"

Text_MtEmberfall_Grunt2_PostBattle2:
    .string "{COLOR BLUE}Grunt 2{COLOR DARK_GRAY}: Madam {COLOR RED}Kirschblüte{COLOR DARK_GRAY} was right to\n"
    .string "be cautious about this kid...\p"
    .string "It doesn't matter, we got what we wanted\n"
    .string "anyways.\p"
    .string "Let's report back to HQ.$"

MtEmberfall_CameraUnPan1:
    walk_up
    step_end

MtEmberfall_CameraUnPan2:
    walk_down
    face_up
    step_end

MtEmberfall_Grunt1_Confront:
    walk_down
    face_right
    step_end

MtEmberfall_Grunt2_Skedaddle:
    walk_left
    walk_down
MtEmberfall_Grunt1_Skedaddle:
    walk_down
    walk_right
    face_down
    step_end

