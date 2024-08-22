KushiandaHouse3_MapScripts::
	.byte 0

Script_KushinadaHouse3Man1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse3Man1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse3Man1:
    .string "The whole situation with Jörmungandr\n"
    .string "is just really stupid.\l"
    .string "He's literally the only person that\l"
    .string "hasn't moved on.$"

Script_KushinadaHouse3Woman1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse3Woman1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse3Woman1:
    .string "OH!\n"
    .string "Don't scare me!\l"
    .string "I almost burned myself.$"
    
Script_KushinadaHouse3Kid1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse3Kid1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse3Kid1:
    .string "Woah.\n"
    .string "You're a pokémon master.\l"
    .string "My mom said I can't become one,\l"
    .string "but hopefully I can convince her.$"
