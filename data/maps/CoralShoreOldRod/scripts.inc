CoralShoreOldRod_MapScripts::
	.byte 0

CoralShoreOldRod_Old_Granny::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, CoralShoreOldRod_Old_Granny3
	msgbox Text_CoralShoreOldRod_IsTrainer, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CoralShoreOldRod_KnewIt
	goto CoralShoreOldRod_Nonsense

CoralShoreOldRod_KnewIt:
	msgbox Text_CoralShoreOldRod_KnewIt, MSGBOX_DEFAULT
	goto CoralShoreOldRod_Old_Granny_2

CoralShoreOldRod_Nonsense:
	msgbox Text_CoralShoreOldRod_Nonsense, MSGBOX_DEFAULT
	goto CoralShoreOldRod_Old_Granny_2

CoralShoreOldRod_Old_Granny_2:
	msgbox Text_CoralShoreOldRod_GiveOldRod, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD, 1
	setflag FLAG_RECEIVED_OLD_ROD
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_ReceivedOldRod, MSGBOX_DEFAULT
	waitfanfare
	msgbox Text_CoralShoreOldRod_HusbandThrow
	release
	end

CoralShoreOldRod_Old_Granny3:
	msgbox Text_CoralShoreOldRod_Son, MSGBOX_DEFAULT
	release
	end

CoralShoreOldRod_OldSeaman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_SURF, CoralShoreOldRod_OldSeaman2
	msgbox Text_CoralShoreOldRod_OldSeamanGreet, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq CoralShoreOldRod_OldSeaman_TooBad
	msgbox Text_CoralShoreOldRod_GiveSurf, MSGBOX_DEFAULT
	giveitem ITEM_HM03, 1
	setflag FLAG_RECEIVED_HM_SURF
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_ReceivedSurf, MSGBOX_DEFAULT
	waitfanfare
	msgbox Text_CoralShoreOldRod_ExplainSurf
	release
	end

CoralShoreOldRod_OldSeaman_TooBad:
	msgbox Text_CoralShoreOldRod_OldSeaman_TooBad, MSGBOX_DEFAULT
	release
	end

CoralShoreOldRod_OldSeaman2:
	msgbox Text_CoralShoreOldRod_OldSeaman2, MSGBOX_DEFAULT
	release
	end

Text_CoralShoreOldRod_IsTrainer:
	.string "Why, hello there!\p"
	.string "You must be a trainer, am I right?$"

Text_CoralShoreOldRod_Nonsense:
	.string "Nonsense!\p"
	.string "Just look at you!\n"
	.string "You look just like how my son did when\l"
	.string "he started on his very own journey!$"

Text_CoralShoreOldRod_KnewIt:
	.string "I knew it!\p"
	.string "You look exactly like my son when he\n"
	.string "first started his very own journey!$"

Text_CoralShoreOldRod_GiveOldRod:
	.string "Here, take this.$"

Text_ReceivedOldRod:
	.string "{PLAYER} received the\n"
	.string "Old Rod!$"

Text_CoralShoreOldRod_HusbandThrow:
	.string "Back when my husband was an active\n"
	.string "seaman, he used this rod alot to fish.\p"
	.string "I found this in his junk pile a while\n"
	.string "back, so I'm sure he won't mind if I\l"
	.string "give it to you.$"

Text_CoralShoreOldRod_Son:
	.string "My son lives in {COLOR BLUE}Onsen City{COLOR DARK_GRAY} now.\p"
	.string "To be honest, I'm a bit nervous about\n"
	.string "him living there, since the volcano is\l"
	.string "technically still active there...\p"
	.string "There are actually spots in the ground\n"
	.string "where the lava from the mantle pokes\l"
	.string "through the crust...\p"
	.string "How could I not be worried?$"

Text_CoralShoreOldRod_OldSeamanGreet:
	.string "Ahoy there, young feller!\p"
	.string "You must be a trainer!\n"
	.string "I can help you with your endeavors!$"

Text_CoralShoreOldRod_OldSeaman_TooBad:
	.string "Ah...\n"
	.string "That's too bad, then.$"

Text_CoralShoreOldRod_GiveSurf:
	.string "Yes...\p"
	.string "You see, youngin', an essential skill\n"
	.string "that every trainer needs to be great is\l"
	.string "the ability to traverse anywhere.\p"
	.string "This item here I have for you, is the\n"
	.string "HM, or Hidden Machine, for the move\l"
	.string "Surf.\p"
	.string "Here, take it, youngin'.$"

Text_ReceivedSurf:
	.string "{PLAYER} received the\n"
	.string "HM03!$"

Text_CoralShoreOldRod_ExplainSurf:
	.string "Teaching this move to a Pokémon will\n"
	.string "allow you to sail the oceans and seas\l"
	.string "on your Pokémon!\p"
	.string "You'll need to beat the {COLOR BLUE}Coral Shore Gym{COLOR DARK_GRAY}\n"
	.string "before using it, though.$"

Text_CoralShoreOldRod_OldSeaman2:
	.string "Back in my day, when I was a lil' fella\n"
	.string "full o' aspirations like you, I surfed\l"
	.string "all over Heto on my Wailord.\p"
	.string "I even met the two strongest trainers\n"
	.string "in Pokémon history, Austin and Vaibhav!\p"
	.string "This was before the war, of course.$"