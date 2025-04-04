CutMasterHouse_MapScripts::
	.byte 0

Everbloom_FlashMaster::
    lock
    faceplayer
    goto_if_unset FLAG_RECEIVED_HM_FLASH, Everbloom_GiveFlash
    msgbox Everbloom_HasFlash, MSGBOX_DEFAULT
    release
    end

Everbloom_GiveFlash::
    msgbox Text_Everbloom_Flash, MSGBOX_DEFAULT
    waitmessage
    giveitem ITEM_HM_FLASH
    setflag FLAG_RECEIVED_HM_FLASH
    msgbox Text_Everbloom_ExplainFlash, MSGBOX_DEFAULT
    release
    end

Text_Everbloom_Flash:
    .string "You must be an aspiring Trainer!\p"
    .string "Here, have this.\p"
    .string "$"

Text_Everbloom_ExplainFlash:
    .string "{COLOR LIGHT_GRAY}{SHADOW DARK_GRAY}Flash {COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}can help you light up dark caves.\n"
    .string "It'll help you on your journey.$"

Everbloom_HasFlash:
    .string "Good luck on your journey!$"

Script_EverbloomFlashMasterHouse1::
    lock
    faceplayer
    msgbox Text_EverbloomCutMasterHouse1, MSGBOX_DEFAULT
    release
    end

Text_EverbloomCutMasterHouse1:
    .string "When it gets dark outside,\n"
    .string "Daddy uses {SHADOW DARK_GRAY}Flash {SHADOW LIGHT_GRAY}to light up our\l"
    .string "surroundings.$"
