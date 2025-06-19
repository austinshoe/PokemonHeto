Kushinada_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kushinada_Gym_OnTransition
	.byte 0

Kushinada_Gym_OnTransition:
	setvar VAR_UNUSED_0x4091, MAP_KUSHINADA_GYM2
	end

Kushinada_Gym_Cornwall::
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, Kushinada_Gym_CornwallIntro, Kushinada_Gym_CornwallDefeat, Kushinada_Gym_CornwallDefeated
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, Kushinada_Gym_CornwallGive2
	msgbox Kushinada_Gym_CornwallPostBattle, MSGBOX_DEFAULT
	setweather WEATHER_NONE
	doweather
	release
	end

Kushinada_Gym_CornwallDefeated::
	message Kushinada_Gym_ReceiveBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Kushinada_Gym_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	call Kushinada_Gym_CornwallGive
	setweather WEATHER_NONE
	doweather
	closemessage
	release
	end

Kushinada_Gym_CornwallGive2::
	giveitem ITEM_TM51
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Kushinada_Gym_ExplainDazzlingGleam, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_CALM_MIND
	release
	end

Kushinada_Gym_CornwallGive::
	giveitem ITEM_TM51
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox Kushinada_Gym_ExplainDazzlingGleam, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_CALM_MIND
	return

Kushinada_Gym_CornwallIntro::
	.string "Welcome, challenger, to the Kushinada\n"
	.string "Gym!\p"
	.string "What's that? Why is there fog?\p"
	.string "I'll tell you if you defeat me!$"

Kushinada_Gym_CornwallDefeat::
	.string "Oho...$"

Kushinada_Gym_CornwallPostBattle::
	.string "To be honest, the only purpose the fog\n"
	.string "serves is dramatic effect.$"

Kushinada_Gym_ReceiveBadge::
	.string "{PLAYER} received the MIST BADGE\n"
	.string "from Cornwall.$"

Kushinada_Gym_ExplainBadge::
	.string "Cornwall: The badge you just received\n"
	.string "allows one to use the move Fly out of\l"
	.string "battle.\p"
	.string "Please take this, too.$"

Kushinada_Gym_ExplainDazzlingGleam::
	.string "That TM there contains Dazzling Geam.\n"
	.string "It's a strong Fairy Type move, and it\l"
	.string "Can damage both opponents in a double\l"
	.string "battle!$"

