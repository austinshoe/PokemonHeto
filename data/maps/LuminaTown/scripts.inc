LuminaTown_MapScripts::
	.byte 0

LuminaTown_StoreClerk::
    lock
    faceplayer
    goto_if_set FLAG_RECEIVED_POTION_OLDALE, LuminaTown_Received
    msgbox Text_NeedHelp, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq LuminaTown_Know
    msgbox Text_ShowAround, MSGBOX_DEFAULT
    checkitemspace ITEM_POTION, 1
    compare VAR_RESULT, FALSE
    goto_if_eq LuminaTown_NotEnoughSpaceInBag
    giveitem ITEM_POTION
    msgbox Text_visit, MSGBOX_DEFAULT
    setflag FLAG_RECEIVED_POTION_OLDALE
    release
    end
    
LuminaTown_NotEnoughSpaceInBag::
    msgbox Text_BagIsFull MSGBOX_DEFAULT
    release end
    
LuminaTown_LilBoy::
    lock
    faceplayer
    msgbox Text_LuminaTownLilBoy, MSGBOX_DEFAULT
    release
    end

Text_LuminaTownLilBoy:
    .string "Sometimes the breeze carries over the\n"
    .string "the scent of flowers to Lumina Town.\l"
    .string "It smells so nice and refreshing!$"
    
LuminaTown_Received::
    msgbox Text_visit, MSGBOX_DEFAULT
    release
    end

LuminaTown_Know::
    msgbox Text_FeelFree, MSGBOX_DEFAULT
    release
    end

Text_visit:
    .string "Please feel free to visit our PokéMart\n"
    .string "for anything you might need.$"
    
Text_NeedHelp:
    .string "Hey! You there!\l"
    .string "You're a new face here. Are you new to\n"
    .string "Pokémon? If you want I can help you a \n"
    .string "little.$"

Text_FeelFree:
    .string "Feel free to ask me for help!$"
    
Text_ShowAround:
    .string "I see!\l"
    .string "Let me give you a run down of the town.\p"
    .string "That blue roofed building next to us is\n"
    .string "called a {COLOR BLUE}PokéMart{COLOR DARK_GRAY}. You can find a\l"
    .string "variety of Items there.\l"
    .string "Almost every town or city has one.\p"
    .string "The red roofed ones are called\n"
    .string "{COLOR RED}PokéCenters{COLOR DARK_GRAY}.\l"
    .string "You can get your Pokémon healed there\l"
    .string "free of charge.$"

Text_BagIsFull:
    .string "Your Bag is full.$"
