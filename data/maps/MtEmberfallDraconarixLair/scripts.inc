MtEmberfallDraconarixLair_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmberfallDraconarixLair_OnTransition
	.byte 0

MtEmberfallDraconarixLair_OnTransition:
	call_if_unset FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS, MtEmberfallDraconarixLair_SetFloorNormal
	end

MtEmberfallDraconarixLair_SetFloorNormal:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	return

MtEmberfallDraconarixLair_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, Text_MtEmberfallDraconarixLair_Grunt1, TextMtEmberfallDraconarixLair_Grunt1Defeat
	msgbox MtEmberfallDraconarixLair_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt1:
	.string "You shouldn't be here!\n"
	.string "Leave now or face my wrath!$"

TextMtEmberfallDraconarixLair_Grunt1Defeat:
	.string "Gah! I can't believe I lost!\p"
	.string "I should have known better than to\n"
	.string "mess with you!$"

MtEmberfallDraconarixLair_Grunt1PostBattle:
	.string "I hope boss doesn't kill me...$"

MtEmberfallDraconarixLair_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, Text_MtEmberfallDraconarixLair_Grunt2, TextMtEmberfallDraconarixLair_Grunt2Defeat
	msgbox MtEmberfallDraconarixLair_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt2:
	.string "You think you can just waltz in here?\p"
	.string "I'll show you what happens to\n"
	.string "intruders!$"

TextMtEmberfallDraconarixLair_Grunt2Defeat:
	.string "Damn it!$"

MtEmberfallDraconarixLair_Grunt2PostBattle:
	.string "I guess you CAN just waltz in here...$"

MtEmberfallDraconarixLair_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, Text_MtEmberfallDraconarixLair_Grunt3, TextMtEmberfallDraconarixLair_Grunt3Defeat
	msgbox MtEmberfallDraconarixLair_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt3:
	.string "Prepare to be crushed!$"

TextMtEmberfallDraconarixLair_Grunt3Defeat:
	.string "Crushing...$"

MtEmberfallDraconarixLair_Grunt3PostBattle:
	.string "I was not prepared to be crushed...$"

MtEmberfallDraconarixLair_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, Text_MtEmberfallDraconarixLair_Grunt4, TextMtEmberfallDraconarixLair_Grunt4Defeat
	msgbox MtEmberfallDraconarixLair_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

Text_MtEmberfallDraconarixLair_Grunt4:
	.string "I gotta stop you!$"

TextMtEmberfallDraconarixLair_Grunt4Defeat:
	.string "Ts tragic...$"

MtEmberfallDraconarixLair_Grunt4PostBattle:
	.string "I hope I bought enough time for them.$"



