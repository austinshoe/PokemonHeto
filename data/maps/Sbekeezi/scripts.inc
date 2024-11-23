Sbekeezi_MapScripts::
	.byte 0

Sbekeezi_Bartender::
    lock
    faceplayer
    applymovement 3, Common_Movement_ExclamationMark
    msgbox Text_Bartender, MSGBOX_DEFAULT
    waitmessage
    closemessage
    msgbox Text_SbekeeziKickedOut, MSGBOX_DEFAULT
    waitmessage
    closemessage
    fadescreen FADE_TO_BLACK
    warp MAP_KASAAN, 4
    delay 32
    fadescreen FADE_FROM_BLACK
    release
    end
    
    

Script_KassanSpeakeasy1::
    lock
    faceplayer
    message Text_KassanSpeakeasyPiano
    waitmessage
    closemessage
    delay 16
    applymovement 2, Common_Movement_FaceLeft
    waitmovement 2
    applymovement 2, Common_Movement_ExclamationMark
    waitbuttonpress
    message Text_KassanSpeakeasyNerd1
    waitmessage
    closemessage
    delay 16
    applymovement 1, Common_Movement_FaceRight
    waitmovement 1
    applymovement 1, Common_Movement_ExclamationMark
    waitbuttonpress
    message Text_KassanSpeakeasyWhip
    waitmessage
    closemessage
    delay 16
    applymovement 1, Common_Movement_FaceUp
    waitmovement 1
    delay 16
    applymovement 2, Common_Movement_FaceRight
    waitmovement 2
    release
    end

Text_KassanSpeakeasyPiano:
    .string "{FONT_SMALL_NARROW}Hey!\n"
    .string "Don’t talk to me!\l"
    .string "If that kid over there hears that I\l"
    .string "stopped playing piano he’ll beat my ass.\p"
    .string "$"

Text_KassanSpeakeasyNerd1:
    .string "{COLOR BLUE}Kid:{COLOR DARK_GRAY} Oi!\n"
    .string "Why’d you stop playing?\p"
    .string "$"

Text_KassanSpeakeasyWhip:
    .string "{COLOR BLUE}Kid:{COLOR DARK_GRAY} Imma whip you\p"
    .string "{COLOR BLUE}Piano Man:{COLOR DARK_GRAY}{COLOR RED}OW!!!!{COLOR DARK_GRAY}That hurt so freaking\n"
    .string "bad!\p"
    .string "Wahhhhhhhh\p"
    .string "$"

Script_KassanSpeakeasy2::
    lock
    msgbox Text_KassanSpeakeasyNerd2, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyNerd2:
    .string "{COLOR BLUE}Kid:{COLOR DARK_GRAY}I swear on the\n"
    .string "{CLEAR_TO 70}{COLOR GREEN}Holey Logs\l"
    .string "{COLOR DARK_GRAY}, if that piano man stops playing one\l"
    .string "more time, I will do unspeakable things\l"
    .string "to him.$"

Text_Bartender:
    .string "Hey!\n"
    .string "What are you doing here?\l"
    .string "Get out of here! Scram!$"

Text_SbekeeziKickedOut:
    .string "{PLAYER} was\n"
    .string "forcibly ejected from the club.$"

Script_KassanSpeakeasyPool1::
    lock
    msgbox Text_KassanSpeakeasyPool1, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPool1:
    .string "MISSSSSSSSSS!\n"
    .string "MISSSSSSSSSS!\l"
    .string "MISSSSSSSSSS!$"

Script_KassanSpeakeasyPool2::
    lock
    msgbox Text_KassanSpeakeasyPool2, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPool2:
    .string "QUIET!\n"
    .string "I’M LINING UP MY SHOT HERE!$"

Script_KassanSpeakeasyPool3::
    lock
    msgbox Text_KassanSpeakeasyPool3, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPool3:
    .string "Line up your shot faster.\n"
    .string "I wanna wrap this up and drink beer.$"

Script_KassanSpeakeasyPool4::
    lock
    faceplayer
    msgbox Text_KassanSpeakeasyPool4, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPool4:
    .string "You should head somewhere else.\n"
    .string "This game’s almost over.$"

Script_KassanSpeakeasyPoker1::
    lock
    msgbox Text_KassanSpeakeasyPoker1, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPoker1:
    .string "You know what they say:\n"
    .string "’You gotta risk it for the biscuit’\l"
    .string "All. In.$"

Script_KassanSpeakeasyPoker2::
    lock
    msgbox Text_KassanSpeakeasyPoker2, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPoker2:
    .string "{FONT_SMALL_NARROW}I got a full house right here.\n"
    .string "This game is mine.$"

Script_KassanSpeakeasyPoker3::
    lock
    faceplayer
    msgbox Text_KassanSpeakeasyPoker3, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPoker3:
    .string "Hey oldy, unless you got money you\n"
    .string "better move your butt somewhere else.\l"
    .string "We’re in the middle of something here.$"

Script_KassanSpeakeasyPoker4::
    lock
    faceplayer
    msgbox Text_KassanSpeakeasyPoker4, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyPoker4:
    .string "Don’t listen to him.\n"
    .string "Even if you had money, you’re still\l"
    .string "not allowed here.\l"
    .string "Go away.$"

Script_KassanSpeakeasyAlcohol1::
    lock
    msgbox Text_KassanSpeakeasyAlcohol1, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyAlcohol1:
    .string "BLAAARGH!\n"
    .string "BLEUGHGH!$"

Script_KassanSpeakeasyAlcohol2::
    lock
    msgbox Text_KassanSpeakeasyAlcohol2, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyAlcohol2:
    .string "Man, I told you 10 beers was too much.\n"
    .string "You’re such an idiot.$"

Script_KassanSpeakeasyAlcohol3::
    lock
    msgbox Text_KassanSpeakeasyAlcohol3, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyAlcohol3:
    .string "{FONT_SMALL_NARROW}Why do I play with these numbskulls.$"

Script_KassanSpeakeasyShortTable1::
    lock
    msgbox Text_KassanSpeakeasyShortTable1, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyShortTable1:
    .string "You listen right here.\n"
    .string "I am your younger.\l"
    .string "I have the power here.\l"
    .string "You better shut up and listen to me.$"

Script_KassanSpeakeasyShortTable2::
    lock
    msgbox Text_KassanSpeakeasyShortTable2, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyShortTable2:
    .string "YOU’RE ONLY 4 DAYS YOUNGER!\n"
    .string "We’re basically the same age!\l"
    .string "You can’t boss me around like that.$"

Script_KassanSpeakeasyShortTable3::
    lock
    msgbox Text_KassanSpeakeasyShortTable3, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyShortTable3:
    .string "HEY!\n"
    .string "No one older than 6 is allowed here!\l"
    .string "GO AWAY!!!!$"

Script_KassanSpeakeasyShortTable4::
    lock
    msgbox Text_KassanSpeakeasyShortTable4, MSGBOX_DEFAULT
    release
    end

Text_KassanSpeakeasyShortTable4:
    .string "YEAH GO AWAY!\n"
    .string "YOU’RE A MOLDY OLDIE!!!$"
