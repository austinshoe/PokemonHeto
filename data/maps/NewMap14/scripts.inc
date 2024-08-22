NewMap14_MapScripts::
	.byte 0

Script_NewMap14Woman1::
    lock
    faceplayer
    msgbox Text_NewMap14Woman1, MSGBOX_DEFAULT
    release
    end

Text_NewMap14Woman1:
    .string "The flowers in this area form quite\n"
    .string "the beautiful pattern, no?$"
