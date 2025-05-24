NeptunesDrift_MapScripts::
	.byte 0

NeptunesDrift_RivalGiveDive::
	lock
	faceplayer
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	msgbox Text_NeptunesDrift_RivalGiveDive, MSGBOX_DEFAULT
	giveitem ITEM_HM_DIVE
	setflag FLAG_RECEIVED_HM_DIVE
	msgbox Text_NeptunesDrift_RivalExplainDive, MSGBOX_DEFAULT
	closemessage
	applymovement 1, NeptunesDrift_RivalWalkAway
	fadescreen FADE_TO_BLACK
	waitmovement 1
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	removeobject 1
	delay 16
	fadescreen FADE_FROM_BLACK
	delay 8
	release
	end

Text_NeptunesDrift_RivalGiveDive:
	.string "{PLAYER}! There you are!\p"
	.string "Lena and Shin already moved on, but they\n"
	.string "told me to stay back and give this to\l"
	.string "you, so that we could go together.$"

Text_NeptunesDrift_RivalGiveDive:
	.string "This HM contains Dive.\n"
	.string "When you're surfing you sometimes see\l"
	.string "those dark patches of water.\p"
	.string "Those patches of water are actually just\n"
	.string "deep parts of the sea, where you can\l"
	.string "dive underneath the water.\p"
	.string "Lena and Shin already dived, so let's go.$"

NeptunesDrift_RivalWalkAway:
	walk_down
	step_end

