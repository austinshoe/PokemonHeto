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
	.string "Are you interested in hearing me story?$"

Text_ResearchersHouse_OldWomanSaidNo:
	.string "Glosh diggity drabbity darn it...$"

Text_ResearchersHouse_OldWomanSaidYes:
	.string "Golly gee wilikers!\p"
	.string "I promiseth tis worth thy time!\p"
	.string "Legends speak of a legendary dragon\n"
	.string "Pokémon calle' Draconarix.\p"
	.string "They says Draconarix was born in the\n"
	.string "heart of Mt. Emb'fall, and it is said ta\l"
	.string "possess more power tha' any other\l"
	.string "Pokémon knern to us.\p"
	.string "Myths say tha' Draconarix once\n"
	.string "ravaged th' region 'til our ancestors\l"
	.string "banded t'gether to seal away its core,\l"
	.string "an' depriving it of its full pow'rs.\p"
	.string "'fter having its core sealed away,\n"
	.string "Draconarix return'd to iss home to\l"
	.string "its slumber.\p"
	.string "They says tha' Draconarix is the\n"
	.string "embodiment of all forces and energies\l"
	.string "in our world.\p"
	.string "Iss the strongest!$"

Text_ResearchersHouse_OldMan:
	.string "There she goes again...$"

Text_ResearchersHouse_LittleGirl:
	.string "Grandma's stories scare me...$"