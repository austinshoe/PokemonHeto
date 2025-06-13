SunaTown_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, SunaTown_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, SunaTown_OnFrameTable
	.byte 0

SunaTown_OnTransition:
    setflag FLAG_VISITED_VERDANTURF_TOWN
    end

SunaTown_OnFrameTable:
    map_script_2 VAR_VERDANTURF_TOWN_STATE, 0, SunaTown_DrStoneCall
    .2byte 0

SunaTown_DrStoneCall:
    msgbox SunaTown_DrStoneCallText, MSGBOX_DEFAULT
    waitmessage
    closemessage
    setvar VAR_VERDANTURF_TOWN_STATE, 1
    end

SunaTown_DrStoneCallText:
    .string "Bzzzt...\p"
    .string "Bzzzt...\p"
    .string "Dr. Stone: Hey, {PLAYER}?\n"
    .string "It's me, Dr. Stone- long time no see.\p"
    .string "The Pokémon Association contacted me and\n"
    .string "updated me on the recent events.\p"
    .string "I'm sorry for not contacting you sonner,\n"
    .string "but I'm currently conducting research on\l"
    .string "Draconarix, with the help of\l"
    .string "Professor Pine.\p"
    .string "The Pokémon Association also reached out\n"
    .string "some old woman living in Fall Grove Town.\p"
    .string "I don't know who she is, but she seems to\n"
    .string "have a lot of information on Draconarix.\p"
    .string "According to her intel, the reason why\n"
    .string "Draconarix wasn't able to break through\l"
    .string "the bedrock was because it was still in\l"
    .string "a sealeed state.\p"
    .string "According to her, some old heros in\n"
    .string "Hetonian mythology sealed Draconarix's\l"
    .string "power by removing its energy core from\l"
    .string "its rib cage, thus transforming it into\l"
    .string "a sealed, smaller form.\p"
    .string "She said that the core was hidden away\n"
    .string "somewhere near Ruinveil City, but she\l"
    .string "doesn't know where exactly.\p"
    .string "By the way, where are you right now?\p"
    .string "...\p"
    .string "Suna Town? I see.\p"
    .string "Ruinveil City should be just to the\n"
    .string "south of Suna Town, but you'll need to\n"
    .string "traverse another section of desert.\p"
    .string "When you arrive at Ruinveil City, please\n"
    .string "keep an eye out for Angrboda.\p"
    .string "During your encounter with them at the\n"
    .string "Power Plant, they seemed to be unaware\l"
    .string "of Draconarix's existence, but we're\l"
    .string "not quite sure how extensive their\l"
    .string "information network is.\p"
    .string "Please be careful, and let me know if you\n"
    .string "find anything else out.\p"
    .string "{FONT FONT_SMALL}click{FONT FONT_NORMAL}\p"
    .string "...$"


Script_SunaTownTag1::
    lock
    faceplayer
    msgbox Text_SunaTownTag1, MSGBOX_DEFAULT
    release
    end

Text_SunaTownTag1:
    .string "Man my sister is so fast.\n"
    .string "I just can't catch her.\l"
    .string "I'm never going to give up though.$"

Script_SunaTownTag2::
    lock
    faceplayer
    msgbox Text_SunaTownTag2, MSGBOX_DEFAULT
    release
    end

Text_SunaTownTag2:
    .string "My little brother is pretty slow,\n"
    .string "but I love his determination.\l"
    .string "He always comes back no matter what.$"
