MtEmberfall_MapScripts::
	.byte 0

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
