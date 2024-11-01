OnsenGlassMaster_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OnsenGlassMaster_OnTransition
	.byte 0

	.set BLUE_FLUTE_PRICE,   250
	.set YELLOW_FLUTE_PRICE, 500
	.set RED_FLUTE_PRICE,    500
	.set WHITE_FLUTE_PRICE,  1000
	.set BLACK_FLUTE_PRICE,  1000
	.set PRETTY_CHAIR_PRICE, 6000
	.set PRETTY_DESK_PRICE,  8000
	.set LOWEST_ASH_PRICE,   BLUE_FLUTE_PRICE

OnsenGlassMaster_OnTransition:
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
	call_if_eq VAR_GLASS_WORKSHOP_STATE, 1, OnsenGlassMaster_EventScript_ReenterWorkshopAfterSootSack
	end

OnsenGlassMaster_EventScript_ReenterWorkshopAfterSootSack::
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	return

OnsenGlassMaster_EventScript_GlassWorker::
	lock
	faceplayer
	goto_if_ge VAR_GLASS_WORKSHOP_STATE, 10, OnsenGlassMaster_EventScript_GiveItemAfterNoRoom
	goto_if_eq VAR_GLASS_WORKSHOP_STATE, 2, OnsenGlassMaster_EventScript_CheckCollectedAsh
	goto_if_eq VAR_GLASS_WORKSHOP_STATE, 1, OnsenGlassMaster_EventScript_ExplainSootSack
	msgbox OnsenGlassMaster_Text_GoCollectAshWithThis, MSGBOX_DEFAULT
	giveitem ITEM_SOOT_SACK
	setvar VAR_GLASS_WORKSHOP_STATE, 1
	msgbox OnsenGlassMaster_Text_ExplainSootSack, MSGBOX_DEFAULT
	release
	end

OnsenGlassMaster_EventScript_ExplainSootSack::
	msgbox OnsenGlassMaster_Text_ExplainSootSack, MSGBOX_DEFAULT
	release
	end

OnsenGlassMaster_EventScript_CheckCollectedAsh::
	checkitem ITEM_SOOT_SACK
	goto_if_eq VAR_RESULT, FALSE, OnsenGlassMaster_EventScript_SootSackNotInBag
	msgbox OnsenGlassMaster_Text_LetsSeeCollectedAshes, MSGBOX_DEFAULT
	goto_if_lt VAR_ASH_GATHER_COUNT, LOWEST_ASH_PRICE, OnsenGlassMaster_EventScript_NotEnoughAsh
	message OnsenGlassMaster_Text_WhichGlassItemWoudYouLike
	waitmessage
	goto OnsenGlassMaster_EventScript_ChooseGlassItem
	end

OnsenGlassMaster_EventScript_SootSackNotInBag::
	msgbox OnsenGlassMaster_Text_HaventGotYourSootSack, MSGBOX_DEFAULT
	release
	end

OnsenGlassMaster_EventScript_ChooseGlassItem::
	setvar VAR_0x8009, 0
	setvar VAR_0x8004, SCROLL_MULTI_GLASS_WORKSHOP_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, OnsenGlassMaster_EventScript_BlueFlute
	case 1, OnsenGlassMaster_EventScript_YellowFlute
	case 2, OnsenGlassMaster_EventScript_RedFlute
	case 3, OnsenGlassMaster_EventScript_WhiteFlute
	case 4, OnsenGlassMaster_EventScript_BlackFlute
	case 5, OnsenGlassMaster_EventScript_PrettyChair
	case 6, OnsenGlassMaster_EventScript_PrettyDesk
	case 7, OnsenGlassMaster_EventScript_CancelGlassItemSelect
	case MULTI_B_PRESSED, OnsenGlassMaster_EventScript_CancelGlassItemSelect
	end

OnsenGlassMaster_EventScript_BlueFlute::
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	setvar VAR_0x800A, BLUE_FLUTE_PRICE
	goto_if_lt VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE, OnsenGlassMaster_EventScript_NotEnoughAshForItem
	msgbox OnsenGlassMaster_Text_IsThatTheItemForYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OnsenGlassMaster_EventScript_ChooseDifferentItem
	setvar VAR_GLASS_WORKSHOP_STATE, 10
	subvar VAR_ASH_GATHER_COUNT, BLUE_FLUTE_PRICE
	goto OnsenGlassMaster_EventScript_MakeGlassItem
	end

OnsenGlassMaster_EventScript_YellowFlute::
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	setvar VAR_0x800A, YELLOW_FLUTE_PRICE
	goto_if_lt VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE, OnsenGlassMaster_EventScript_NotEnoughAshForItem
	msgbox OnsenGlassMaster_Text_IsThatTheItemForYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OnsenGlassMaster_EventScript_ChooseDifferentItem
	setvar VAR_GLASS_WORKSHOP_STATE, 11
	subvar VAR_ASH_GATHER_COUNT, YELLOW_FLUTE_PRICE
	goto OnsenGlassMaster_EventScript_MakeGlassItem
	end

OnsenGlassMaster_EventScript_RedFlute::
	setvar VAR_0x8008, ITEM_RED_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	setvar VAR_0x800A, RED_FLUTE_PRICE
	goto_if_lt VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE, OnsenGlassMaster_EventScript_NotEnoughAshForItem
	msgbox OnsenGlassMaster_Text_IsThatTheItemForYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OnsenGlassMaster_EventScript_ChooseDifferentItem
	setvar VAR_GLASS_WORKSHOP_STATE, 12
	subvar VAR_ASH_GATHER_COUNT, RED_FLUTE_PRICE
	goto OnsenGlassMaster_EventScript_MakeGlassItem
	end

OnsenGlassMaster_EventScript_WhiteFlute::
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	setvar VAR_0x800A, WHITE_FLUTE_PRICE
	goto_if_lt VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE, OnsenGlassMaster_EventScript_NotEnoughAshForItem
	msgbox OnsenGlassMaster_Text_IsThatTheItemForYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OnsenGlassMaster_EventScript_ChooseDifferentItem
	setvar VAR_GLASS_WORKSHOP_STATE, 13
	subvar VAR_ASH_GATHER_COUNT, WHITE_FLUTE_PRICE
	goto OnsenGlassMaster_EventScript_MakeGlassItem
	end

OnsenGlassMaster_EventScript_BlackFlute::
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	setvar VAR_0x800A, BLACK_FLUTE_PRICE
	goto_if_lt VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE, OnsenGlassMaster_EventScript_NotEnoughAshForItem
	msgbox OnsenGlassMaster_Text_IsThatTheItemForYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OnsenGlassMaster_EventScript_ChooseDifferentItem
	setvar VAR_GLASS_WORKSHOP_STATE, 14
	subvar VAR_ASH_GATHER_COUNT, BLACK_FLUTE_PRICE
	goto OnsenGlassMaster_EventScript_MakeGlassItem
	end

OnsenGlassMaster_EventScript_PrettyChair::
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
	bufferdecorationname STR_VAR_1, VAR_0x8008
	setvar VAR_0x800A, PRETTY_CHAIR_PRICE
	goto_if_lt VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE, OnsenGlassMaster_EventScript_NotEnoughAshForItem
	msgbox OnsenGlassMaster_Text_IsThatTheItemForYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OnsenGlassMaster_EventScript_ChooseDifferentItem
	setvar VAR_GLASS_WORKSHOP_STATE, 15
	subvar VAR_ASH_GATHER_COUNT, PRETTY_CHAIR_PRICE
	goto OnsenGlassMaster_EventScript_MakeGlassItem
	end

OnsenGlassMaster_EventScript_PrettyDesk::
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, DECOR_PRETTY_DESK
	bufferdecorationname STR_VAR_1, VAR_0x8008
	setvar VAR_0x800A, PRETTY_DESK_PRICE
	goto_if_lt VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE, OnsenGlassMaster_EventScript_NotEnoughAshForItem
	msgbox OnsenGlassMaster_Text_IsThatTheItemForYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OnsenGlassMaster_EventScript_ChooseDifferentItem
	setvar VAR_GLASS_WORKSHOP_STATE, 16
	subvar VAR_ASH_GATHER_COUNT, PRETTY_DESK_PRICE
	goto OnsenGlassMaster_EventScript_MakeGlassItem
	end

OnsenGlassMaster_EventScript_CancelGlassItemSelect::
	msgbox OnsenGlassMaster_Text_AllThatAshButDontWantAnything, MSGBOX_DEFAULT
	release
	end

OnsenGlassMaster_EventScript_NotEnoughAsh::
	setvar VAR_0x800A, LOWEST_ASH_PRICE
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
	buffernumberstring STR_VAR_1, VAR_0x800A
	msgbox OnsenGlassMaster_Text_NotEnoughAshNeedX, MSGBOX_DEFAULT
	release
	end

OnsenGlassMaster_EventScript_NotEnoughAshForItem::
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
	buffernumberstring STR_VAR_2, VAR_0x800A
	message OnsenGlassMaster_Text_NotEnoughAshToMakeItem
	waitmessage
	goto OnsenGlassMaster_EventScript_ChooseGlassItem
	end

OnsenGlassMaster_EventScript_ChooseDifferentItem::
	message OnsenGlassMaster_Text_WhichWouldYouLike
	waitmessage
	goto OnsenGlassMaster_EventScript_ChooseGlassItem
	end

OnsenGlassMaster_EventScript_MakeGlassItem::
	msgbox OnsenGlassMaster_Text_IllMakeItemForYou, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_SELECT
	delay 30
	fadescreen FADE_FROM_BLACK
	msgbox OnsenGlassMaster_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
	call_if_eq VAR_0x8009, 0, OnsenGlassMaster_EventScript_GiveGlassFlute
	call_if_eq VAR_0x8009, 1, OnsenGlassMaster_EventScript_GiveGlassDecor
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	release
	end

OnsenGlassMaster_EventScript_GiveGlassFlute::
	giveitem VAR_0x8008
	goto_if_eq VAR_RESULT, FALSE, OnsenGlassMaster_EventScript_NoRoomForFlute
	return

OnsenGlassMaster_EventScript_GiveGlassDecor::
	givedecoration VAR_0x8008
	goto_if_eq VAR_RESULT, FALSE, OnsenGlassMaster_EventScript_NoRoomForDecor
	return

OnsenGlassMaster_EventScript_NoRoomForFlute::
	call Common_EventScript_BagIsFull
	msgbox OnsenGlassMaster_Text_NoRoomInBag, MSGBOX_DEFAULT
	release
	end

OnsenGlassMaster_EventScript_NoRoomForDecor::
	call Common_EventScript_NoRoomForDecor
	msgbox OnsenGlassMaster_Text_NoRoomInPC, MSGBOX_DEFAULT
	release
	end

OnsenGlassMaster_EventScript_GiveItemAfterNoRoom::
	switch VAR_GLASS_WORKSHOP_STATE
	case 10, OnsenGlassMaster_EventScript_GiveBlueFlute
	case 11, OnsenGlassMaster_EventScript_GiveYellowFlute
	case 12, OnsenGlassMaster_EventScript_GiveRedFlute
	case 13, OnsenGlassMaster_EventScript_GiveWhiteFlute
	case 14, OnsenGlassMaster_EventScript_GiveBlackFlute
	case 15, OnsenGlassMaster_EventScript_GivePrettyChair
	case 16, OnsenGlassMaster_EventScript_GivePrettyDesk
	end

OnsenGlassMaster_EventScript_GiveBlueFlute::
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, ITEM_BLUE_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	goto OnsenGlassMaster_EventScript_TryGiveItemAgain
	end

OnsenGlassMaster_EventScript_GiveYellowFlute::
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, ITEM_YELLOW_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	goto OnsenGlassMaster_EventScript_TryGiveItemAgain
	end

OnsenGlassMaster_EventScript_GiveRedFlute::
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, ITEM_RED_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	goto OnsenGlassMaster_EventScript_TryGiveItemAgain
	end

OnsenGlassMaster_EventScript_GiveWhiteFlute::
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, ITEM_WHITE_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	goto OnsenGlassMaster_EventScript_TryGiveItemAgain
	end

OnsenGlassMaster_EventScript_GiveBlackFlute::
	setvar VAR_0x8009, 0
	setvar VAR_0x8008, ITEM_BLACK_FLUTE
	bufferitemname STR_VAR_1, VAR_0x8008
	goto OnsenGlassMaster_EventScript_TryGiveItemAgain
	end

OnsenGlassMaster_EventScript_GivePrettyChair::
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, DECOR_PRETTY_CHAIR
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_CHAIR
	goto OnsenGlassMaster_EventScript_TryGiveItemAgain
	end

OnsenGlassMaster_EventScript_GivePrettyDesk::
	setvar VAR_0x8009, 1
	setvar VAR_0x8008, DECOR_PRETTY_DESK
	bufferdecorationname STR_VAR_1, DECOR_PRETTY_DESK
	goto OnsenGlassMaster_EventScript_TryGiveItemAgain
	end

OnsenGlassMaster_EventScript_TryGiveItemAgain::
	msgbox OnsenGlassMaster_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
	call_if_eq VAR_0x8009, 0, OnsenGlassMaster_EventScript_GiveGlassFlute
	call_if_eq VAR_0x8009, 1, OnsenGlassMaster_EventScript_GiveGlassDecor
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	release
	end

OnsenGlassMaster_EventScript_NinjaBoy::
	msgbox OnsenGlassMaster_Text_FunToBlowGlassFlute, MSGBOX_NPC
	end

OnsenGlassMaster_Text_GoCollectAshWithThis:
	.string "This area is covered in volcanic ash,\n"
	.string "huff-puff!\p"
	.string "I'm specially gifted, huff-puff.\p"
	.string "I make glass out of volcanic ash\n"
	.string "and make items, huff-puff.\p"
	.string "Go collect ashes with this, huff-puff.$"

OnsenGlassMaster_Text_ExplainSootSack:
	.string "Just take that SOOT SACK and walk\n"
	.string "through piles of ash, huff-puff.\p"
	.string "And it will fill up with the volcanic ash,\n"
	.string "huff-puff.\p"
	.string "Once you think you've collected a good\n"
	.string "amount, come see me, huff-puff.$"

OnsenGlassMaster_Text_LetsSeeCollectedAshes:
	.string "Have you collected ashes, huff-puff?\n"
	.string "Let me see, huff-puff.$"

OnsenGlassMaster_Text_NotEnoughAshNeedX:
	.string "Hmmm…\n"
	.string "There's not enough ash here, huff-puff.\l"
	.string "I can't make glass with this, huff-puff.\p"
	.string "Let's see… {STR_VAR_1} is the number of steps\n"
	.string "you'll need to walk for me to make you\l"
	.string "a BLUE FLUTE, huff-puff.$"

OnsenGlassMaster_Text_WhichGlassItemWoudYouLike:
	.string "Oh!\n"
	.string "You've got a lot of ashes, huff-puff!\p"
	.string "I'll make you a glass item, huff-puff!\n"
	.string "Which one would you like, huff-puff?$"

OnsenGlassMaster_Text_IsThatTheItemForYou:
	.string "A {STR_VAR_1}, huff-puff?\n"
	.string "Is that the one for you, huff-puff?$"

OnsenGlassMaster_Text_WhichWouldYouLike:
	.string "Which one would you like, huff-puff?$"

OnsenGlassMaster_Text_IllMakeItemForYou:
	.string "A {STR_VAR_1} it is, then, huff-puff!\p"
	.string "Okay! I'll make it for you, huff-puff.\n"
	.string "Just wait a little while, huff-puff.$"

OnsenGlassMaster_Text_NotEnoughAshToMakeItem:
	.string "A {STR_VAR_1}, huff-puff?\p"
	.string "There's not enough ash here to make\n"
	.string "that, though, huff-puff.\p"
	.string "Let's see… {STR_VAR_2} is the number of steps\n"
	.string "you'll need to walk through volcanic ash\l"
	.string "for me to make that item, huff-puff.\p"
	.string "Which item would you rather have me\n"
	.string "make instead, huff-puff?$"

OnsenGlassMaster_Text_AllThatAshButDontWantAnything:
	.string "You've collected all that ash, but you\n"
	.string "don't want anything, huff-puff?$"

OnsenGlassMaster_Text_IveFinishedGlassItem:
	.string "Ah, I've finished your {STR_VAR_1}.\n"
	.string "Take it, huff-puff.$"

OnsenGlassMaster_Text_NoRoomInBag:
	.string "Oh?\n"
	.string "You've no room in your BAG, huff-puff.\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

OnsenGlassMaster_Text_NoRoomInPC:
	.string "Oh?\n"
	.string "You've no room in your PC, huff-puff?\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

OnsenGlassMaster_Text_HaventGotYourSootSack:
	.string "Hah? You haven't got your Soot Sack\n"
	.string "with you, huff-puff.\p"
	.string "You have to keep it with you to collect\n"
	.string "volcanic ash, huff-puff.$"

OnsenGlassMaster_Text_FunToBlowGlassFlute:
	.string "My boss is so cool!\p"
	.string "He can make all sorts of trinkets with\n"
	.string "volcanic ash!$"


