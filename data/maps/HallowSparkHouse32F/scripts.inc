HallowSparkHouse32F_MapScripts::
	.byte 0

Script_HallowSparkHouse3Kid2::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse3Kid2, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse3Kid2:
    .string "Do you wanna play rock paper scissors?\n"
    .string "Yay! Go on shoot, ok?\l"
    .string "ROCK. PAPER. SCISSORS. SHOOT!\l"
    .string "DARN!\l"
    .string "You win this time, but I promise you,\l"
    .string "I'll have my revenge.$"
    
Script_HallowSparkHouse3Kid3::
    lock
    faceplayer
    msgbox Text_HallowSparkHouse3Kid3, MSGBOX_DEFAULT
    release
    end

Text_HallowSparkHouse3Kid3:
    .string "He sucks at rock paper scissors.\n"
    .string "I don't think he's ever won once in\l"
    .string "his entire life.$"
