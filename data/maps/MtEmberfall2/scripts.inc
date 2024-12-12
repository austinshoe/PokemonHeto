MtEmberfall2_MapScripts::
	.byte 0

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
