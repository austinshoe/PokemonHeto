CoralGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CoralGym_OnTransition
	.byte 0

CoralGym_OnTransition:
	setflag FLAG_TEMP_1F
	end

CoralGym_Guide::
	lock 
	faceplayer
	msgbox Text_CoralGym_Guide, MSGBOX_DEFAULT
	release
	end

CoralGym_Marina::
	lock
	faceplayer
	trainerbattle_single TRAINER_WATTSON_1, Text_CoralGym_Marina, Text_CoralGym_MarinaDefeat, CoralGym_MarinaDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, CoralGym_GiveRainDance
	goto_if_unset FLAG_UNUSED_0x264, CoralGym_GiveWaterPulse
	msgbox Text_CoralGym_MarinaPostBattle, MSGBOX_DEFAULT
	release
	end

CoralGym_MarinaDefeated:
	message Text_CoralGym_TideBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Text_CoralGym_ExplainTideBadge, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
CoralGym_GiveRainDance:
	giveitem ITEM_TM_RAIN_DANCE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
CoralGym_GiveWaterPulse:
	giveitem ITEM_TM_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_UNUSED_0x264
	msgbox Text_CoralGym_ExplainTMs, MSGBOX_DEFAULT
	release
	end 

Text_CoralGym_Guide:
	.string "Howdy do, champ!\n"
	.string "Welcome to the Coral Shore City Gym!\p"
	.string "As you might've been able to figure out\n"
	.string "from just the town's settings, this gym\l"
	.string "specializes in {COLOR BLUE}Water {COLOR DARK_GRAY}types!\p"
	.string "The gym leader, Marina, has a team\n"
	.string "packed with {COLOR BLUE}Water {COLOR DARK_GRAY}types!\p"
	.string "Can't go wrong with a good ol' Grass or\n"
	.string "Electric type here.\p"
	.string "In this gym, challengers have the\n"
	.string "ability to surf even though they don't\l"
	.string "have the gym badge yet!\p"
	.string "So with that being said, you'll need the\n"
	.string "HM for Surf, or have a member of your\l"
	.string "party know Surf in order to make it\l"
	.string "across the gym.\p"
	.string "If you don't have Surf, ask around -\n"
	.string "it's a beach, after all, so someone's\l"
	.string "bound to have the HM for Surf here.\p"
	.string "Good luck, champ!\p"
	.string "You got it!$"

Text_CoralGym_Marina:
	.string "{COLOR BLUE}Marina{COLOR DARK_GRAY}: Hello, challenger!\n"
	.string "How did it feel to Surf across the gym?\p"
	.string "Must've made you want to be able to\n"
	.string "anywhere you want, huh?\p"
	.string "Surfing's great! I love it!\p"
	.string "Swimming's also fun, but it's just\n"
	.string "different when you have your Pokémon\l"
	.string "with you!\p"
	.string "Too bad, though - You'll need my Gym\n"
	.string "badge to be able to Surf anywhere you\l"
	.string "want!\p"
	.string "Prepare yourself!\p"
	.string "It's all fun and games when it's sunny\n"
	.string "at the beach until it rains and pours!$"

Text_CoralGym_MarinaDefeat:
	.string "Fun and games!$"

Text_CoralGym_TideBadge:
	.string "{COLOR BLUE}Marina{COLOR DARK_GRAY}: Woah. That was tempestuous.\p"
	.string "Here you go, take this.\p"
	.string "{PLAYER} received the TIDE BADGE\n"
	.string "from {COLOR BLUE}Marina{COLOR DARK_GRAY}.$"

Text_CoralGym_ExplainTideBadge:
	.string "{COLOR BLUE}Marina{COLOR DARK_GRAY}: The Tide Badge is really nice!\p"
	.string "It allows you to Surf anywhere, and\n"
	.string "Surfing's the best!\p"
	.string "You can have these two TMs, too!$"

Text_CoralGym_ExplainTMs:
	.string "These TMs contain {COLOR BLUE}Rain Dance{COLOR DARK_GRAY} and\n"
	.string "{COLOR BLUE}Water Pulse{COLOR DARK_GRAY}.\p"
	.string "People often think that {COLOR BLUE}Rain Dance{COLOR DARK_GRAY} is\n"
	.string "a useful move, but it really isn't -\l"
	.string "The rain powers up {COLOR BLUE}Water{COLOR DARK_GRAY} type moves and\l"
	.string "weakens {COLOR RED}Fire{COLOR DARK_GRAY} type moves, and Thunder\l"
	.string "always hits!$"

Text_CoralGym_MarinaPostBattle:
	.string "{COLOR BLUE}Marina{COLOR DARK_GRAY}: Sail out and SEA the world!\p"
	.string "Was that funny?\n"
	.string "I think that was funny.$"
