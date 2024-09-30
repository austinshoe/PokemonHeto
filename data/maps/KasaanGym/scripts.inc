KasaanGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KasaanGym_OnTransition
	.byte 0

KasaanGym_OnTransition:
	setvar VAR_TEMP_0, 0
	end

KasaanGym_Khione::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, KasaanGym_KhionePostBattle
	message Text_KasaanGym_KhionePreBattle
	waitmessage
	waitbuttonpress
	closemessage
	setweather WEATHER_SNOW
	setvar VAR_TEMP_0, 1
	doweather
	applymovement 1, KasaanGym_Movement_LookAround
	waitmovement 0
	faceplayer
	message KasaanGym_KhionePreBattle_2
	waitmessage
	closemessage
	trainerbattle_no_intro TRAINER_BRAWLY_1, Text_KasaanGym_KhioneDefeated
	delay 64
	message Text_KasaanGym_KhionePostBattle
	call Common_EventScript_PlayGymBadgeFanfare
	waitmessage
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	msgbox Text_KasaanGym_IcicleBadgeExplain, MSGBOX_DEFAULT
    giveitem ITEM_TM_ICE_BEAM
    setflag FLAG_RECEIVED_TM_BULK_UP
    message Text_KasaanGym_KhioneExplainIceBeam
    waitmessage
    closemessage
	release
	end

KasaanGym_KhionePostBattle:
	msgbox Text_KasaanGym_KhionePostBattle2, MSGBOX_DEFAULT
	release
	end

KasaanGym_WeatherSwitch::
	lock
	compare VAR_TEMP_0, 0
	goto_if_eq KasaanGym_LetItSnow
	setweather WEATHER_NONE
	doweather
	msgbox Text_KasaanGym_CLear
	setvar VAR_TEMP_0, 0
	release
	end


KasaanGym_LetItSnow:
	setweather WEATHER_SNOW
	doweather
	msgbox Text_KasaanGym_Snow
	setvar VAR_TEMP_0, 1
	release
	end

Text_KasaanGym_Snow:
	.string "It started snowing!$"

Text_KasaanGym_CLear:
	.string "The weather cleared up.$"

Text_KasaanGym_KhionePreBattle:
	.string "{COLOR BLUE}Khione{COLOR DARK_GRAY}: Oh! You're the person from\n"
	.string "before!\p"
	.string "I never got to thank you properly.\p"
	.string "What's your name?\p"
	.string "...\p"
	.string "{PLAYER}... I see...\p"
	.string "Thank you for your help back there,\n"
	.string "{PLAYER}.\p"
	.string "As you know, I'm {COLOR BLUE}Khione{COLOR DARK_GRAY}, the gym leader\n"
	.string "here in {COLOR BLUE}Kasaan{COLOR DARK_GRAY}, and from the weather\l"
	.string "here, you can probably deduce that I\l"
	.string "mainly use {COLOR BLUE}Ice{COLOR DARK_GRAY} types.\p"
	.string "Speaking of which...$"

KasaanGym_Movement_LookAround:
	face_left
	delay_16
	face_down
	delay_16
	face_right
	delay_16
	face_down
	delay_16
	face_left
	delay_16
	face_down
	delay_16
	face_right
	delay_16
	face_down
	step_end

KasaanGym_KhionePreBattle_2:
	.string "{COLOR BLUE}Khione{COLOR DARK_GRAY}: Looks like the weather's on my\n"
	.string "side.\p"
	.string "So without further ado, let's get this\l"
	.string "show on the road!$"

Text_KasaanGym_KhioneDefeated:
	.string "Your moves had me frozen!$"

Text_KasaanGym_KhionePostBattle:
	.string "{COLOR BLUE}Khione{COLOR DARK_GRAY}: That was a chilling battle!\p"
	.string "Here, take this.\n"
	.string "You deserve it.\p"
    .string "{PLAYER} received the ICICLE BADGE\n"
    .string "from {COLOR BLUE}Khione{COLOR DARK_GRAY}.$"

Text_KasaanGym_IcicleBadgeExplain:
	.string "The ICICLE BADGE allows you to use the\n"
	.string "move Cut outside of battle.\p"
	.string "Here, take this with you, too.$"

Text_KasaanGym_KhioneExplainIceBeam:
	.string "Ice Beam is a really good move!\p"
	.string "Although it doesn't have a great\n"
	.string "secondary effect, it consistently deals\l"
	.string "a lot of damage!\p"
	.string "You're really strong, so you should go\n"
	.string "challenge the rest of the gyms!$"

Text_KasaanGym_KhionePostBattle2:
	.string "If you're wondering why the gym sign's\n"
	.string "spelled like that, it's because the only\l"
	.string "construction company in this area is\l"
	.string "run by some little kids headed by some\l"
	.string "kid called the Playground King.\p"
	.string "I don't think they know how to spell.$"