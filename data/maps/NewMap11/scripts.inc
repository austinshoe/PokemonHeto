NewMap11_MapScripts::
	.byte 0

Script_MountainAfterAzureTidewayMan1::
    lock
    faceplayer
    msgbox Text_MountainAfterAzureTidewayMan1, MSGBOX_DEFAULT
    release
    end

Text_MountainAfterAzureTidewayMan1:
    .string "Progress at your own risk.\n"
    .string "I can only warn you about what's\l"
    .string "to come.$"
