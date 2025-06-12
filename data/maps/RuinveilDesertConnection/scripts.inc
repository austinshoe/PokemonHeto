RuinveilDesertConnection_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinveilDesertConnection_OnFrameTable
	.byte 0

RuinveilDesertConnection_OnFrameTable:
	map_script_2 VAR_ROUTE117_STATE, 0, RuinveilDesertConnection_RivalBattleScript
	.2byte 0

RuinveilDesertConnection_RivalBattleScript:
	delay 32
	lockall
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RuinveilDesertConnection_RivalLongTime, MSGBOX_DEFAULT
	waitmessage
	closemessage
	call RuinveilDesertConnection_RivalBattlePullUp
	delay 16
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, RuinveilDesertConnection_RivalIntro, RuinveilDesertConnection_RivalDefeat, RuinveilDesertConnection_RivalOutro

RuinveilDesertConnection_RivalBattlePullUp:
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 9
	call_if_eq RuinveilDesertConnection_RivalBattlePullUp_9
	compare VAR_TEMP_0, 10
	call_if_eq RuinveilDesertConnection_RivalBattlePullUp_10
	return

RuinveilDesertConnection_RivalBattlePullUp_9:
	applymovement OBJ_EVENT_ID_PLAYER, RuinveilDesertConnection_PlayerPullUp
	applymovement 1, RuinveilDesertConnection_RivalPullUp9
	waitmovement 0
	return

RuinveilDesertConnection_RivalBattlePullUp_10:
	applymovement OBJ_EVENT_ID_PLAYER, RuinveilDesertConnection_PlayerPullUp
	applymovement 1, RuinveilDesertConnection_RivalPullUp10
	waitmovement 0
	return

RuinveilDesertConnection_RivalOutro:
	msgbox RuinveilDesertConnection_RivalPostBattle, MSGBOX_DEFAULT
	waitmessage
	giveitem ITEM_MEGA_RING, 1
	giveitem ITEM_SALAMENCITE, 1
	msgbox RuinveilDesertConnection_RivalExplainMegaRing, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 1, RuinveilDesertConnection_RivalLeave1
	waitmovement 1
	delay 16
	applymovement 1, Common_Movement_FaceUp
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RuinveilDesertConnection_RivalPostBattle2, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 1, RuinveilDesertConnection_RivalLeave2
	waitmovement 1
	setflag FLAG_HIDE_ROUTE_110_RIVAL
	removeobject 1
	setvar VAR_ROUTE117_STATE, 1
	releaseall
	end


RuinveilDesertConnection_RivalLongTime:
	.string "Liam: {PLAYER}!\p"
	.string "Looks like you're here too.$"

RuinveilDesertConnection_RivalIntro:
	.string "Are you going to challenge the Ruinveil\l"
	.string "Gym?\p"
	.string "Me too.\p"
	.string "Since we're both here, let me see how\n"
	.string "much we've both grown.$"

RuinveilDesertConnection_RivalDefeat:
	.string "Gah...$"
	
RuinveilDesertConnection_PlayerPullUp:
	walk_down
	walk_down
	step_end

RuinveilDesertConnection_RivalPullUp9:
	walk_up
	step_end

RuinveilDesertConnection_RivalPullUp10:
	walk_up
	walk_right
	face_up
	step_end

RuinveilDesertConnection_RivalPostBattle:
	.string "Looks like I lost again...\p"
	.string "But it's okay.\n"
	.string "I can feel the gap between us closing.\n"
	.string "I'll be sure to defeat you next time.\p"
	.string "That reminds me, I forgot to give this to you.$"


RuinveilDesertConnection_RivalLeave1:
	walk_down
	step_end

RuinveilDesertConnection_RivalPostBattle2:
	.string "That's right, Lena contacted me earlier.\p"
	.string "She said that no Angrboda activity has\n"
	.string "been detected since the events at\l"
	.string "Mt. Emberfall, but that we should still\l"
	.string "be on the lookout.\p"
	.string "Stay safe, {PLAYER}.\n"
	.string "I'll see you again soon.$"

RuinveilDesertConnection_RivalLeave2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

RuinveilDesertConnection_RivalExplainMegaRing:
	.string "That's a mega ring and a Salamencite.\p"
	.string "With these, you can Mega Evolve your\n"
	.string "Salamence... or when your Shelgon\l"
	.string "evolves, you can Mega Evolve it then.\p"
	.string "Professor Pine gave these to me in light\n"
	.string "of the recent events with Angrboda.\p"
	.string "You can give a mega stone to its\n"
	.string "respective Pokémon to hold, and you'll\l"
	.string "be able to Mega Evolve it in battle.\p"
	.string "You can only Mega Evolve one Pokémon\n"
	.string "per battle, though.$"

