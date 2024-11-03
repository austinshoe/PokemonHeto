WintersPassage_MapScripts::
	.byte 0

Script_WintersPassageMan1::
    lock
    faceplayer
    msgbox Text_WintersPassageMan1, MSGBOX_DEFAULT
    release
    end

Text_WintersPassageMan1:
    .string "What?\n"
    .string "It’s cold?\l"
    .string "Listen kid, I’ve been working here for\l"
    .string "25 years, just axing away at this rock.\l"
    .string "If I can handle it, then you can to.\n"
    .string "{FONT_SMALL_NARROW}Kids these days...$"

Script_WintersPassageMan2::
    lock
    faceplayer
    msgbox Text_WintersPassageMan2, MSGBOX_DEFAULT
    release
    end

Text_WintersPassageMan2:
    .string "Hey kid, don’t mind him.\n"
    .string "He wanted to retire a couple years\l"
    .string "ago, but then his wife got into an\l"
    .string "accident and he needed the money, so\l"
    .string "he had to keep working.\n"
    .string "He’s always pretty cranky as a result.$"

Script_WintersPassageMan3::
    lock
    faceplayer
    msgbox Text_WintersPassageMan3, MSGBOX_DEFAULT
    release
    end

Text_WintersPassageMan3:
    .string "Whew!\n"
    .string "This rock is as tough as always!\l"
    .string "Thank goodness I found me a Machop to\l"
    .string "help out.$"

Script_WintersPassageMan4::
    lock
    faceplayer
    msgbox Text_WintersPassageMan4, MSGBOX_DEFAULT
    release
    end

Text_WintersPassageMan4:
    .string "Man someone told me there was a hotel\n"
    .string "around here.\l"
    .string "I think I might’ve gone the wrong way...$"

Script_WintersPassageWoman1::
    lock
    faceplayer
    msgbox Text_WintersPassageWoman1, MSGBOX_DEFAULT
    release
    end

Text_WintersPassageWoman1:
    .string "I really dislike the cold, but who\n"
    .string "else is going to give my husband\l"
    .string "hot chocolate during break?$"

Script_WintersPassageOp1::
    lock
    faceplayer
    trainerbattle_single TRAINER_SAWYER_1, Text_WinterPassageOp1Intro, Text_WinterPassageOp1Defeat
    msgbox Text_WinterPassageOp1PostBattle, MSGBOX_AUTOCLOSE
    end

Text_WinterPassageOp1Intro:
    .string "You. Me. Battle. Now.$"
    
Text_WinterPassageOp1Defeat:
    .string "Dayum I wasn't familiar with your game.\n"
    .string "My apologies.$"

Text_WinterPassageOp1PostBattle:
    .string "This was truly one of the battles of\n"
    .string "all time.$"

Script_WintersPassageOp2::
    lock
    faceplayer
    trainerbattle_single TRAINER_GABRIELLE_1, Text_WinterPassageOp2Intro, Text_WinterPassageOp2Defeat
    msgbox Text_WinterPassageOp2PostBattle, MSGBOX_AUTOCLOSE
    end

Text_WinterPassageOp2Intro:
    .string "Hey! I wanted that oxygen and you\n"
    .string "just stole it!\l"
    .string "Let's settle this with a DUEL!$"
    
Text_WinterPassageOp2Defeat:
    .string "Well I guess the oxygen is yours.$"

Text_WinterPassageOp2PostBattle:
    .string "Nerf Miner.$"
    
Script_WintersPassageOp3::
    lock
    faceplayer
    trainerbattle_single TRAINER_MARCEL, Text_WinterPassageOp3Intro, Text_WinterPassageOp3Defeat
    msgbox Text_WinterPassageOp3PostBattle, MSGBOX_AUTOCLOSE
    end

Text_WinterPassageOp3Intro:
    .string "I may be new, but I'm strong!\n"
    .string "NOW FEEL MY WRATH!$"
    
Text_WinterPassageOp3Defeat:
    .string "Maybe I'm just new...$"

Text_WinterPassageOp3PostBattle:
    .string "Challenge me again sometime!\n"
    .string "I'm always itching to get stronger.$"
