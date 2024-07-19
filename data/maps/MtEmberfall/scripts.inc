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
