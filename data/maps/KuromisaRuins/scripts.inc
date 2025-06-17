KuromisaRuins_MapScripts::
	.byte 0

KuromisaRuins_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, KuromisaRuins_Grunt1Intro, KuromisaRuins_Grunt1Defeat
	msgbox KuromisaRuins_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	release
	end

KuromisaRuins_Grunt1Intro:
	.string "Where did you come from?\p"
	.string "No matter. I'll crush you anyways!$"

KuromisaRuins_Grunt1Defeat:
	.string "Gahlee...$"

KuromisaRuins_Grunt1PostBattle:
	.string "It's moments like these that make me\n"
	.string "wonder if we Albas and Auratas are\l"
	.string "the superior race...$"

KuromisaRuins_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, KuromisaRuins_Grunt2Intro, KuromisaRuins_Grunt2Defeat
	msgbox KuromisaRuins_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	release
	end

KuromisaRuins_Grunt2Intro:
	.string "I spy with my little eye...\p"
	.string "Someone who shouldn't be here at all!$"

KuromisaRuins_Grunt2Defeat:
	.string "Ah! My eye!$"

KuromisaRuins_Grunt2PostBattle:
	.string "I guess technically, we're the ones who\n"
	.string "shouldn't be here.$"

KuromisaRuins_Grunt3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, KuromisaRuins_Grunt3Intro, KuromisaRuins_Grunt3Defeat
	msgbox KuromisaRuins_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	release
	end

KuromisaRuins_Grunt3Intro:
	.string "I'm the last line of defense!$"

KuromisaRuins_Grunt3Defeat:
	.string "Headtap...$"

KuromisaRuins_Grunt3PostBattle:
	.string "When you see him coming down the lane,\n"
	.string "just move.\p"
	.string "It's not worth it.$"


