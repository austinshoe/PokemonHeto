Kushinada_Gym2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Kushinada_Gym2_OnTransition
	.byte 0

Kushinada_Gym2_OnTransition:
	setvar VAR_UNUSED_0x4091, MAP_KUSHINADA_GYM
	end

Kushinada_Gym2_Guide::
	msgbox Kushinada_Gym2_GuideText, MSGBOX_AUTOCLOSE

Kushinada_Gym2_GuideText::
	.string "Welcome, champ, to the gym here at\n"
	.string "Kushinada!\p"
	.string "The puzzle is exactly what it seems-\n"
	.string "It's a maze!$"
	.string "You'll battle your way through the maze,\n"
	.string "but sometimes, things will feel as if...\l"
	.string "something has changed...\p"
	.string "The gym leader, Cornwall, specializes in\n"
	.string "Fairy Type Pokémon, so having a Steel\l"
	.string "type Pokémon, or a Posion-Type, could be\l"
	.string "useful in your battle.\p"
	.string "Good luck!$"

Kushinada_Gym2_Boy::
	trainerbattle_single TRAINER_YUJI, Kushinada_Gym2_BoyInto, Kushinada_Gym2_BoyDefeat, Kushinada_Gym2_BoyDefeated
	msgbox Kushinada_Gym2_BoyPostBattle, MSGBOX_AUTOCLOSE
	end

Kushinada_Gym2_BoyDefeated::
	getplayerxy VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
	warpsilent VAR_UNUSED_0x4091, VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
	end

Kushinada_Gym2_BoyInto::
	.string "Peskipiksi pesternomi!$"

Kushinada_Gym2_BoyDefeat::
	.string "My spell didn't work...$"

Kushinada_Gym2_BoyPostBattle::
	.string "Lockhart is such a fraud...$"

Kushinada_Gym2_Girl::
	trainerbattle_single TRAINER_DAISUKE, Kushinada_Gym2_GirlInto, Kushinada_Gym2_GirlDefeat, Kushinada_Gym2_GirlDefeated
	msgbox Kushinada_Gym2_GirlPostBattle, MSGBOX_AUTOCLOSE
	end

Kushinada_Gym2_GirlDefeated::
	warpsilent VAR_UNUSED_0x4091, 16, 17
	end

Kushinada_Gym2_GirlInto::
	.string "I hate Grass Types!$"

Kushinada_Gym2_GirlDefeat::
	.string "Wahhhh$"

Kushinada_Gym2_GirlPostBattle::
	.string "Bowtruckles are so cruel!$"

Kushinada_Gym2_Trainer::
	trainerbattle_single TRAINER_ATSUSHI, Kushinada_Gym2_Trainerintro, Kushinada_Gym2_TrainerDefeat, Kushinada_Gym2_TrainerDefeated
	msgbox Kushinada_Gym2_TrainerPostBattle, MSGBOX_AUTOCLOSE
	end

Kushinada_Gym2_TrainerDefeated::
	getplayerxy VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
	warpsilent VAR_UNUSED_0x4091, VAR_UNUSED_0x40FE, VAR_UNUSED_0x40FF
	end

Kushinada_Gym2_Trainerintro::
	.string "I challenge you to a contest of ability!$"

Kushinada_Gym2_TrainerDefeat::
	.string "Stunning...$"

Kushinada_Gym2_TrainerPostBattle::
	.string "Eloquently, I accept my defeat.$"





