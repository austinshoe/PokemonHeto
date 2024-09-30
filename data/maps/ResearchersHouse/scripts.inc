ResearchersHouse_MapScripts::
	.byte 0

ResearchersHouse_OldWoman::
	lock
	faceplayer
	msgbox Text_ResearchersHouse_OldWoman, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ResearchersHouse_OldWomanSaidNo
	msgbox Text_ResearchersHouse_OldWomanSaidYes, MSGBOX_DEFAULT
	setflag FLAG_MET_PROF_COZMO
	release
	end

ResearchersHouse_OldWomanSaidNo:
	msgbox Text_ResearchersHouse_OldWomanSaidNo, MSGBOX_DEFAULT
	release
	end

ResearchersHouse_LittleBoy::
	lock
	faceplayer
	msgbox Text_ResearchersHouse_LittleBoy, MSGBOX_DEFAULT
	release
	end

ResearchersHouse_OldMan::
	lock
	msgbox Text_ResearchersHouse_OldMan, MSGBOX_DEFAULT
	release
	end

ResearchersHouse_LittleGirl::
	lock
	faceplayer
	msgbox Text_ResearchersHouse_LittleGirl, MSGBOX_DEFAULT
	release
	end

Text_ResearchersHouse_LittleBoy:
	.string "I think grandma might be going senile.\p"
	.string "She keeps talking about some legendary\n"
	.string "dragon called Dracironix or something.\p"
	.string "It's okay, though, because the food she\n"
	.string "makes is amazing.$"

Text_ResearchersHouse_OldWoman:
	.string "Hello there youngin!\p"
	.string "Are you interested in hearing me story?"

Text_ResearchersHouse_OldWomanSaidNo:
	.string "Glosh diggity drabbity darn it...$"

Text_ResearchersHouse_OldWomanSaidYes:
	.string "Golly jolly gee wilikers!\p"
	.string "I promiseth tis worth thy time!\p"
	.string "Legends speak of a legendary dragon\n"
	.string "Pokémon called Draconarix.\p"
	.string "They say Draconarix was born in the\n"
	.string "heart of Mt. Emberfall, and it is said to\l"
	.string "possess more power than any other\l"
	.string "Pokémon known to mankind.\p"
	.string "Myths say that Draconarix once\n"
	.string "ravaged the region until our ancestors\l"
	.string "banded together to seal away its core,\l"
	.string "thus depriving it of its full powers.\p"
	.string "After having its core sealed away,\n"
	.string "Draconarix returned to Mt. Emberfall to\l"
	.string "its slumber.\p"
	.string "They say that Draconarix is the\n"
	.string "embodiment of all forces and energies\l"
	.string "in our world.\p"
	.string "It's the strongest!$"

Text_ResearchersHouse_OldMan:
	.string "There she goes again...$"

Text_ResearchersHouse_LittleGirl:
	.string "Grandma's stories scare me...$"