SilverstoneHouse5B_MapScripts::
	.byte 0

Script_SilverstoneHouse5Kid1::
    lock
    faceplayer
    msgbox Text_SilverstoneHouse5Kid1, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse5Kid1:
    .string "WOAH!!!!\n"
    .string "A REAL POKÉMON MASTER!!!!!\l"
    .string "THIS IS THE HAPPIEST DAY OF MY LIFE!$"
    
Script_SilverstoneHouse5Kid2::
    lock
    msgbox Text_SilverstoneHouse5Kid2, MSGBOX_DEFAULT
    release
    end

Text_SilverstoneHouse5Kid2:
    .string "Sorry, im reading right now.\n"
    .string "Please don't disturb me.$"
