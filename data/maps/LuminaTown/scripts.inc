LuminaTown_MapScripts::
	.byte 0

LuminaTown_StoreClerk::
    lock
    faceplayer
    goto_if_set FLAG_RECEIVED_POTION_OLDALE, LuminaTown_Received, MSGBOX_DEFAULT
    msgbox Text_NeedHelp, MSGBOX_YESNO
    
    
LuminaTown_Received::
    msgbox Text_vist
    release
    end

Text_visit:
    .string "Please feel free to visit our PokéMart\n"
    .string "for anything you might need.$"
    
Text_NeedHelp:
    .string "Hey! You there!\n"
    .string "You're a new face here. Are you new to\n"
    .string "Pokémon? If you want I can help you a \n"
    .string "little.$"
