FrostvaleTundra2_MapScripts::
	.byte 0

Script_FrostvaleTundraMan2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraMan2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraMan2:
    .string "Hey kid, be careful.\n"
    .string "The ground here is extremely slippery.\l"
    .string "Make sure you walk slowly and\l"
    .string "carefully, I don’t want to have to dig\l"
    .string "you out of the snow if you fall.$"

Script_FrostvaleTundraWoman2::
    lock
    faceplayer
    msgbox Text_FrostvaleTundraWoman2, MSGBOX_DEFAULT
    release
    end

Text_FrostvaleTundraWoman2:
    .string "Are you lost? Because there is no way\n"
    .string "that you would willingly come here.\l"
    .string "This place is terrible.\l"
    .string "You should leave.\p"
    .string "Why do I live here?\l"
    .string "So I can warn other people not to.$"

Script_FrostvaleTundra2Op1::
    lock
    faceplayer
    trainerbattle_single TRAINER_AUSTINA, Text_FrostvaleTundra2Op1Intro, Text_FrostvaleTundra2Op1Defeat
    msgbox Text_FrostvaleTundra2Op1PostBattle, MSGBOX_AUTOCLOSE
    end

Text_FrostvaleTundra2Op1Intro:
    .string "Your pokémon.\n"
    .string "Show them to me!$"
    
Text_FrostvaleTundra2Op1Defeat:
    .string "You may have won this one,\n"
    .string "but I'll be back to take what's mine.$"

Text_FrostvaleTundra2Op1PostBattle:
    .string "I must be going now.$"

Script_FrostvaleTundra2Op2::
    lock
    faceplayer
    trainerbattle_single TRAINER_GWEN, Text_FrostvaleTundra2Op2Intro, Text_FrostvaleTundra2Op2Defeat
    msgbox Text_FrostvaleTundra2Op2PostBattle, MSGBOX_AUTOCLOSE
    end

Text_FrostvaleTundra2Op2Intro:
    .string "Fine. I guess I'll battle you$"
    
Text_FrostvaleTundra2Op2Defeat:
    .string "Oh no I lost.$"

Text_FrostvaleTundra2Op2PostBattle:
    .string "Imma go sleep now.$"
