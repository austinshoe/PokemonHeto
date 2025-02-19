MtEmberfall2_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, MtEmberfall2_OnFrame
	.byte 0

MtEmberfall2_OnFrame:
    map_script_2 VAR_MAUVILLE_CITY_STATE, 1, MtEmberfall2_RivalBattle
    .2byte 0

MtEmberfall2_RivalBattle:
    lock
    msgbox MtEmberfall2_RivalCallOut, MSGBOX_DEFAULT
    applymovement 2, MtEmberfall2_RivalApproach
    waitmovement 2
    message MtEmberfall2_RivalYowch
    applymovement 2, Common_Movement_ExclamationMark
    waitmessage
    waitmovement 2
    applymovement 2, MtEmberfall2_RivalBackThePoopOff
    waitmovement 2
    message Text_MtEmberfall2_RivalPreBattle
    waitmessage
    closemessage
    trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Text_MtEmberfall2_RivalDefeat
    setvar VAR_MAUVILLE_CITY_STATE, 2
    message Text_MtEmberfall2_RivalPostBattle
    waitmessage
    applymovement 2, Common_Movement_FaceDown
    waitmovement 2
    message Text_MtEmberfall2_RivalPostBattle2
    waitmessage
    closemessage
    applymovement 2, MtEmberfall2_RivalLeave1
    waitmovement 2
    message Text_MtEmberfall2_RivalPostBattle3
    waitmessage
    closemessage
    applymovement 2, MtEmberfall2_RivalLeave2
    waitmovement 2
    setflag FLAG_DEFEATED_RIVAL_RUSTBORO
    removeobject 2
    release
	end

Script_MtEmberfallPt2Man1::
    lock
    faceplayer
    msgbox Text_MtEmberfallPt2Man1, MSGBOX_DEFAULT
    release
    end

Text_MtEmberfallPt2Man1:
    .string "If you think it's hot here, wait\n"
    .string "until you go to {COLOR BLUE}Onsen City.\l"
    .string "That place is SMOKING.$"

MtEmberfall2_RivalCallOut:
    .string "{COLOR BLUE}???{COLOR DARK_GRAY}: {PLAYER}! Hey!$"

MtEmberfall2_RivalApproach:
    walk_up
    walk_up
    walk_left
    walk_left
    walk_left
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

MtEmberfall2_RivalYowch:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Yowch! That lava sure is hot!\p"
    .string "$"

MtEmberfall2_RivalBackThePoopOff:
    walk_down
    face_up
    step_end

Text_MtEmberfall2_RivalPreBattle:
    .string "Anyways, fancy seeing you here-\n"
    .string "it seems like you're never too far\l"
    .string "behind.\p"
    .string "But this is a great chance for me to\n"
    .string "see how much I've grown, seeing as I\l"
    .string "lost to you last time.\p"
    .string "Speaking of which, it's been a pretty\n"
    .string "long time since we last battled.\p"
    .string "Prepare yourself- I've grown vastly as\n"
    .string "a trainer since last time!$"

Text_MtEmberfall2_RivalDefeat:
    .string "Not again...$"

Text_MtEmberfall2_RivalPostBattle:
    .string "{COLOR BLUE}Liam{COLOR DARK_GRAY}: Oh, man...\p"
    .string "This can be so frustrating... I'm trying\n"
    .string "as hard as I can, training as hard as I\l"
    .string "can, but you're always just one step\l"
    .string "further, just out of hand's reach...$"

Text_MtEmberfall2_RivalPostBattle2:
    .string "Well, at least this time it was way\n"
    .string "closer than all the other times we've\l"
    .string "battled.\p"
    .string "Don't you dare get complacent-\n"
    .string "I'm catching up to you, and I'll\l"
    .string "definitely overtake you soon.\p"
    .string "Anyways, I'm going to head over to\n"
    .string "{COLOR BLUE}Onsen City{COLOR DARK_GRAY} now, to challenge the Gym.\p$"
    .string "I heard the Gym Leader, Ryo,\n"
    .string "specializes in {COLOR RED}Fire{COLOR DARK_GRAY} types.\p"
    .string "It almost makes me glad I started off\n"
    .string "with this defective excuse of a fish.$"

MtEmberfall2_RivalLeave1:
    walk_down
    walk_down
    step_end

Text_MtEmberfall2_RivalPostBattle3:
    .string "Oh right, That reminds me-\n"
    .string "I was keeping an eye out for that\l"
    .string "{COLOR BLUE}Angrboda{COLOR DARK_GRAY} organization you mentioned.\p"
    .string "I thought I saw them lurking around here\n"
    .string "but when I went to take a closer look\l"
    .string "they were nowhere to be seen.\p"
    .string "It's possible I didn't see correctly,\n"
    .string "though.\p"
    .string "{FONT FONT_SMALL_NARROW}I'll catch up to you soon, don't worry.{FONT FONT_NORMAL}$"

MtEmberfall2_RivalLeave2:
    walk_right
    walk_down
    walk_right
    walk_right
    walk_down
    walk_down
    walk_right
    walk_down
    step_end
