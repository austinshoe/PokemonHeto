RuinveilGymFail_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinveilGymFail_OnFrame
	.byte 0

RuinveilGymFail_OnFrame:
	map_script_2 VAR_UNUSED_0x40A1, 1, RuinveilGymFail_HeadVoices
	map_script_2 VAR_TEMP_0, 1, RuinveilGymFail_WarpBackPostBattle
	.2byte 0

RuinveilGymFail_HeadVoices:
	setvar VAR_UNUSED_0x40A1, 0
	msgbox Text_RuinveilGymFail_HeadVoices, MSGBOX_AUTOCLOSE
	end

RuinveilGymFail_WarpBackPostBattle:
	warpsilent MAP_RUINVEIL_GYM, 25, 31
	setvar VAR_TEMP_0, 0
	end

RuinveilGymFail_Jar::
	random 5
	compare VAR_RESULT, 0
	goto_if_eq RuinveilGymFail_JarEscape
	msgbox Text_RuinveilGymFail_Jar, MSGBOX_AUTOCLOSE
	goto RuinveilGymFail_JarBattle

RuinveilGymFail_JarEscape::
	msgbox Text_RuinveilGymFail_JarEscape, MSGBOX_AUTOCLOSE
	warpsilent MAP_RUINVEIL_GYM, 25, 31
	end

Text_RuinveilGymFail_JarEscape:
	.string "You peered into the strange jar...\p"
	.string "It transported you back to the gym!$"

Text_RuinveilGymFail_Jar:
	.string "You peered into the strange jar...\p"
	.string "A strange Pokémon jumped out!$"

RuinveilGymFail_JarBattle::
	setvar VAR_TEMP_0, 1
	random 10
	switch VAR_RESULT
	case 0, RuinveilGymFail_JarBattleClaydol
	case 1, RuinveilGymFail_JarBattleGolurk
	case 2, RuinveilGymFail_JarBattleClaydol
	case 3, RuinveilGymFail_JarBattleGolurk
	case 4, RuinveilGymFail_JarBattleSpiritomb
	case 5, RuinveilGymFail_JarBattleGolett
	case 6, RuinveilGymFail_JarBattleBaltoy
	case 7, RuinveilGymFail_JarBattleGolett
	case 8, RuinveilGymFail_JarBattleBaltoy
	case 9, RuinveilGymFail_JarBattleGolett
	end

RuinveilGymFail_JarBattleClaydol:
	setwildbattle SPECIES_CLAYDOL, 37, ITEM_NONE
	dowildbattle
	release
	end

RuinveilGymFail_JarBattleGolurk:
	setwildbattle SPECIES_GOLURK, 37, ITEM_NONE
	dowildbattle
	release
	end

RuinveilGymFail_JarBattleSpiritomb:
	setwildbattle SPECIES_GOLURK, 37, ITEM_NONE
	dowildbattle
	release
	end

RuinveilGymFail_JarBattleBaltoy:
	setwildbattle SPECIES_BALTOY, 37, ITEM_NONE
	dowildbattle
	release
	end

RuinveilGymFail_JarBattleGolett:
	setwildbattle SPECIES_GOLETT, 37, ITEM_NONE
	dowildbattle
	release
	end

Text_RuinveilGymFail_HeadVoices:
	.string "Bruzz really got tricked by his own\n"
	.string "head's voices lol.$"

