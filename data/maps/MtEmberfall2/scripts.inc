MtEmberfall2_MapScripts::
	.byte 0

MtEmberfallBurnTrigger::
    lock
    setstatusnext STATUS1_BURN
    clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
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
