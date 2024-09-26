KushinadaHouse2_MapScripts::
	.byte 0

Script_KushinadaHouse2Man1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse2Man1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse2Man1:
    .string "In the grand scheme of things,\n"
    .string "memories of even the most remarkable\l"
    .string "of us will last maybe 10000 years.\l"
    .string "That's why none of us care about\l"
    .string "disputes between {SHADOW DARK_GRAY}Hehehehatia {SHADOW LIGHT_GRAY}and {SHADOW DARK_GRAY}Toemayto{SHADOW LIGHT_GRAY}.\l"
    .string "It just really doesn't matter.$"

Script_KushinadaHouse2Woman1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse2Woman1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse2Woman1:
    .string "Would it surprise you if I told\n"
    .string "you that he hosts his own shows where\l"
    .string "he debates about political topics with\l"
    .string "others?$"
    
Script_KushinadaHouse2Kid1::
    lock
    faceplayer
    msgbox Text_KushinadaHouse2Kid1, MSGBOX_DEFAULT
    release
    end

Text_KushinadaHouse2Kid1:
    .string "Man I tell you,\n"
    .string "my dad yaps like crazy sometimes.\l"
    .string "But whatever.\l"
    .string "I'm used to it.$"
