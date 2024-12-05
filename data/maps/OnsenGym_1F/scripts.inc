OnsenGym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OnsenGym_OnFrame
	.byte 0

OnsenGym_OnFrame:
	map_script_2 VAR_MAUVILLE_GYM_STATE, 0, OnsenGym_InGym
	.2byte 0

OnsenGym_InGym:
	lock
	setvar VAR_MAUVILLE_GYM_STATE, 1
	setvar VAR_UNUSED_0x4083, 0
	call OnsenGym_AnimLavaLowers
	release
	end

OnsenGym_StepTrigger::
	lock
	message Text_OnsenGym_LavaHiss
	waitmessage
	compare VAR_UNUSED_0x408B, 0
	goto_if_eq OnsenGym_StepCompare0
	compare VAR_UNUSED_0x408B, 1
	goto_if_eq OnsenGym_StepCompare1
	compare VAR_UNUSED_0x408B, 2
	goto_if_eq OnsenGym_StepCompare2
	compare VAR_UNUSED_0x408B, 3
	goto_if_eq OnsenGym_StepCompare3
	goto OnsenGym_StepTrigger2

OnsenGym_StepCompare0:
	compare VAR_UNUSED_0x4083, 7
	goto_if_eq OnsenGym_WashBack
	goto OnsenGym_StepTrigger2

OnsenGym_StepCompare1:
	compare VAR_UNUSED_0x4083, 11
	goto_if_eq OnsenGym_WashBack
	goto OnsenGym_StepTrigger2

OnsenGym_StepCompare2:
	compare VAR_UNUSED_0x4083, 15
	goto_if_eq OnsenGym_WashBack
	goto OnsenGym_StepTrigger2

OnsenGym_StepCompare0:
	compare VAR_UNUSED_0x4083, 18
	goto_if_eq OnsenGym_WashBack
	goto OnsenGym_StepTrigger2

OnsenGym_StepTrigger2:
	addvar VAR_UNUSED_0x4083, 1
	release
	end

OnsenGym_WashBack:
	message Text_OnsenGym_LavaWashBack
	waitmessage
	waitbuttonpress
	closemessage
	call OnsenGym_AnimLavaRises
	warp MAP_ONSEN_GYM_1F, 15, 26
	setvar VAR_MAUVILLE_GYM_STATE, 0
	release
	end

OnsenGym_AnimLavaRises:
	return
 
 OnsenGym_AnimLavaLowers:
	return

Text_OnsenGym_LavaHiss:
	.string "The lava hisses!\p"
	.string "$"

Text_OnsenGym_LavaWashBack:
	.string "The rising lava forced {PLAYER}\n"
	.string "to go back on land!$"