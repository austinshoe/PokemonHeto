TunnelSunaRuinveil_MapScripts::
	.byte 0

Tunnel_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE06_GET, EventScript_CantStrength
	checkpartymove MOVE_STRENGTH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	setvar VAR_PETALBURG_WOODS_STATE, 1
	getplayerxy VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	removeobject 1
	removeobject 2
	removeobject 3
	removeobject 4
	addvar VAR_UNUSED_0x40FF, 3
	addobject 5
	setobjectxyperm 5, VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
	setobjectxy 5, VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
	addobject 5
	fadescreen FADE_FROM_BLACK
	delay 32
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	waitmovement 0
	delay 16
	applymovement 5, Tunnel_HikerApproach
	waitmovement 0
	msgbox Tunnel_HikerSaw, MSGBOX_DEFAULT
	giveitem ITEM_HM02, 1
	msgbox Tunnel_HikerExplainFly, MSGBOX_AUTOCLOSE
	fadescreen FADE_TO_BLACK
	setobjectxyperm 5, 0, 19
	removeobject 5
	fadescreen FADE_FROM_BLACK
	releaseall
	end

Tunnel_HikerApproach:
	walk_up
	walk_up
	step_end

Tunnel_HikerSaw:
	.string "That move you just used...\p"
	.string "You used Strength to move those boulders,\n"
	.string "right?\p"
	.string "I knew it. Thank you so much.\p"
	.string "For years, my friend who lives in Suna\n"
	.string "and I have tried to dig this tunnel to\l"
	.string "connect Ruinveil and Suna, but those\l"
	.string "boulders were always in our way.\p"
	.string "As a thank you for clearing those them,\n"
	.string "please accept this from me as a gift.$"

Tunnel_HikerExplainFly:
	.string "That HM contains Fly.\p"
	.string "It allows you to fly to any city or town\n"
	.string "that you've already visited.\p"
	.string "I was originally planning to use it to\n"
	.string "visit my friend, but I never got the\l"
	.string "Kushinada Gym Badge, which is required\l"
	.string "to use Fly out of battle.$"
