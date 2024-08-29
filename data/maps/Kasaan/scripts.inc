Kasaan_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, Kasaan_OnTransition
    map_script MAP_SCRIPT_ON_LOAD, Kasaan_OnLoad
    .byte 0

Kasaan_OnTransition::
    call_if_unset FLAG_RECOVERED_DEVON_GOODS, Kasaan_VarZero
    call_if_set FLAG_RECOVERED_DEVON_GOODS, Kasaan_VarTwo
    end

Kasaan_VarZero::
    setvar VAR_DEWFORD_TOWN_STATE, 0
    call_if_set FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT, Kasaan_VarOne
    end

Kasaan_VarOne::
    setvar VAR_DEWFORD_TOWN_STATE, 1
    end
    
Kasaan_OnLoad::
    call_if_set FLAG_RECOVERED_DEVON_GOODS, Kasaan_UnlockedDoor
    call_if_unset FLAG_RECOVERED_DEVON_GOODS, Kasaan_LockedDoor
    end
    
Kasaan_LockedDoor::
    setmetatile 7, 16, METATILE_Tundra1_Gym_Door, TRUE
    end

Kasaan_VarTwo::
    setvar VAR_DEWFORD_TOWN_STATE, 2
    end
    
Kasaan_UnlockedDoor::
    setmetatile 7, 16, METATILE_Tundra1_Gym_Door, FALSE
    end

Kasaan_Outside_Grunt::
    lock
    faceplayer
    goto_if_set FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT, Kasaan_Grunt_Post_Defeat
    msgbox Text_Grunt_Dont_Go_In, MSGBOX_DEFAULT
    applymovement 11, Common_Movement_FaceDown
    waitmovement 11
    release
    end

Kasaan_Grunt_Post_Defeat:
    msgbox Text_KasaanGruntDefeated2, MSGBOX_DEFAULT
    applymovement 11, Common_Movement_FaceDown
    waitmovement 11
    release
    end

Kasaan_Geologist_Trigger::
    lockall
    applymovement 11, Common_Movement_FaceRight
    waitmovement 11
    applymovement 11, Common_Movement_ExclamationMark
    waitmovement 11
    delay 16
    msgbox Text_Kasaan_Back_Off, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq Kasaan_Player_Backed_Off
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
    waitmovement 0
    msgbox Text_Did_Not_Back_Off, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, Text_KasaanGruntDefeated
    setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
    setvar VAR_DEWFORD_TOWN_STATE, 1
    applymovement 11, Common_Movement_FaceDown
    waitmovement 0
    releaseall
    end
    
Kasaan_Player_Backed_Off:
    msgbox Text_Backed_Off, MSGBOX_DEFAULT
    applymovement OBJ_EVENT_ID_PLAYER, Movement_Kasaan_Back_Off
    waitmovement 0
    applymovement 11, Common_Movement_FaceDown
    waitmovement 0
    releaseall
    end

Kasaan_Slide_Ice_Trees_Axes::
    msgbox Kasaan_Slide_Ice_Trees_Axes_Text_0, MSGBOX_SIGN
    end


Kasaan_Logs_Tripping::
    msgbox Kasaan_Logs_Tripping_Text_0, MSGBOX_SIGN
    end


Kasaan_Axes_Trees::
    msgbox Kasaan_Axes_Trees_Text_0, MSGBOX_SIGN
    end


Kasaan_Sus_Mas_Tree::
    msgbox Kasaan_Sus_Mas_Tree_Text_0, MSGBOX_SIGN
    end


Kasaan_Holey_Logs::
    msgbox Kasaan_Holey_Logs_Text_0, MSGBOX_SIGN
    end


Kasaan_Playground_Sign::
    msgbox Kasaan_Playground_Sign_Text_0, MSGBOX_SIGN
    end


Kasaan_Gym_Sign::
    msgbox Kasaan_Gym_Sign_Text_0, MSGBOX_SIGN
    end


Kasaan_Playground_King::
    lock
    faceplayer
    msgbox Kasaan_Playground_King_Text_0, MSGBOX_YESNO
    compare VAR_RESULT, 1
    goto_if_eq Kasaan_Playground_King_2
    msgbox Kasaan_Playground_King_Text_3
    
Kasaan_Playground_King_1:
    release
    end

Kasaan_Playground_King_2:
    msgbox Kasaan_Playground_King_Text_1
    giveitem ITEM_ORAN_BERRY
    msgbox Kasaan_Playground_King_Text_2
    goto Kasaan_Playground_King_1


Kasaan_Oofer::
    lock
    faceplayer
    msgbox Kasaan_Oofer_Text_0
    release
    end


Kasaan_Yippee::
    lock
    faceplayer
    msgbox Kasaan_Yippee_Text_0
    release
    end


Kasaan_Speakeasy_Sign::
    msgbox Kasaan_Speakeasy_Sign_Text_0, MSGBOX_SIGN
    end


Kasaan_Lab_Sign::
    msgbox Kasaan_Lab_Sign_Text_0, MSGBOX_SIGN
    end


Kasaan_Stone_House::
    msgbox Kasaan_Stone_House_Text_0, MSGBOX_SIGN
    end


Kasaan_Slide_Ice_Trees_Axes_Text_0:
    .string "Falling down always feels better when\n"
    .string "you land on the ice with a hatchet in\l"
    .string "your head.\p"
    .string "{COLOR RED}There seems to be bloodstains on the\n"
    .string "handles of the axes.$"

Kasaan_Logs_Tripping_Text_0:
    .string "Logs for kids to trip over. Credited for\n"
    .string "handing out concussions to more than\l"
    .string "69 children.$"

Kasaan_Axes_Trees_Text_0:
    .string "A fun and safe place for children to\n"
    .string "play!\p"
    .string "Huh?\n"
    .string "You're asking what that lump under the\l"
    .string "snow is? The one with a bit of red? I\l"
    .string "have absolutely NO idea what you are\l"
    .string "talking about.$"

Kasaan_Sus_Mas_Tree_Text_0:
    .string "This is the sus-mas tree. Every\n"
    .string "Thursday, we:\p"
    .string "- Kiss the tree\n"
    .string "- play Among Us under the tree\l"
    .string "- Praise the tree\l"
    .string "- Hug the tree\l"
    .string "- Don't chop the tree down\l"
    .string "- Don't light the tree on fire\p"
    .string "For more details, please visit\n"
    .string "theannoyingsite.com.$"

Kasaan_Holey_Logs_Text_0:
    .string "These are the Holey logs. That's\n"
    .string "because they have holes. Plus, they're\l"
    .string "holy. Every Tuesday, we:\p"
    .string "- Kiss the logs\n"
    .string "- Hug the logs\l"
    .string "- Add more logs when the children break\l"
    .string "them\l"
    .string "- Praise the logs\l"
    .string "- Thank the logs for everything, even if\l"
    .string "you are a bum\p"
    .string "For more details on activities, visit\n"
    .string "theannoyingsite.com.$"

Kasaan_Playground_Sign_Text_0:
    .string "The feamus pleigrownd of Heehahmeitoe$"

Kasaan_Gym_Sign_Text_0:
    .string "Feamus Pokimaun Gim of Kasaan$"

Kasaan_Playground_King_Text_0:
    .string "Playground King: Hey, yo, you wanna\n"
    .string "hear my rap? No? I don't care.\p"
    .string "Three...\p"
    .string "Two...\p"
    .string "One and:\p"
    .string "I got ice in my veins\n"
    .string "gonna run you over like a train\l"
    .string "Imma make you feel every milimeter of\l"
    .string "this pain!\p"
    .string "Gonna make you dive for cover\n"
    .string "(yeah!)\l"
    .string "Gonna slice through you like butter\l"
    .string "(uh huh)\l"
    .string "Gonna rip and hack and whack until your\l"
    .string "body's left in tatters!\l"
    .string "(girl!)\p"
    .string "Imma hunt you like a dog\n"
    .string "(slay!)\l"
    .string "Gonna fill your brain with fog\l"
    .string "(make him pay!)\l"
    .string "Gonna make you slither back to your\l"
    .string "rock like you're stuck in a goddamn bog\l"
    .string "(sheesh!)\p"
    .string "They say I'm really fat\n"
    .string "(how could they?)\l"
    .string "But that's a load of crap\l"
    .string "(that's right!)\l"
    .string "I can still beat you hack you slice you\l"
    .string "whack you just like that\l"
    .string "(you tell him!)\p"
    .string "I'm the Playground King, bitch\n"
    .string "(don't you know?)\l"
    .string "Gonna torture you, watch you twitch\l"
    .string "(make him squeal!)\l"
    .string "Gonna beat your freaking arse so hard\l"
    .string "you crawl back home in stitches\l"
    .string "(hot damn!)\p"
    .string "That's right I'm cold-blooded\n"
    .string "(like the snow!)\l"
    .string "By the way you smell really fetid\l"
    .string "(oh the smell!)\l"
    .string "Don't walk away thinkin I'm just a kid\l"
    .string "cuz I am so much more\l"
    .string "(yeah!)\p"
    .string "Did you like my rap?$"

Kasaan_Playground_King_Text_1:
    .string "LETZZZ GOOOOOOO! You're a kewl kid ya\n"
    .string "know?$"

Kasaan_Playground_King_Text_2:
    .string "Listen to my rap again for more!$"

Kasaan_Playground_King_Text_3:
    .string "SCREW YOU, YOU FREAKING UNINTELLIGENT"
    .string "FORM OF LIFE! YOU TAKE UP OXYGEN THAT"
    .string "WOULD BE BETTER USED ELSEWHERE.$"

Kasaan_Oofer_Text_0:
    .string "Uhh.\nOof.$"

Kasaan_Yippee_Text_0:
    .string "Yippee! ...\n"
    .string "The guy up there? He's the playground\l"
    .string "king! He's really nice.$"

Kasaan_Speakeasy_Sign_Text_0:
    .string "Kasaan Sbeke Eezi$"

Kasaan_Lab_Sign_Text_0:
    .string "Research Lab of Hetonian Geology\l"
    .string "Lead Researcher: {SHADOW DARK_GRAY}Dr. Orion Stone$"

Kasaan_Stone_House_Text_0:
    .string "{SHADOW DARK_GRAY}Dr. Stone's {SHADOW LIGHT_GRAY}house$"

Script_KassanSign::
    lock
    faceplayer
    msgbox Text_KassanSign, MSGBOX_DEFAULT
    release
    end
    
Text_KassanSign:
    .string "{COLOR BLUE}{CLEAR_TO 70}Kassan\n"
    .string "{COLOR DARK_GRAY}If you're not a kid, leave$"

Script_KassanLittleGirl1::
    lock
    faceplayer
    msgbox Text_KassanLittleGirl1, MSGBOX_DEFAULT
    release
    end
    
Text_KassanLittleGirl1:
    .string "I'm going to be honest:\n"
    .string "you look a bit older than 10 buddy.\l"
    .string "You better leave.$"

Script_KassanLittleGirl2::
    lock
    faceplayer
    msgbox Text_KassanLittleGirl2, MSGBOX_DEFAULT
    release
    end
    
Text_KassanLittleGirl2:
    .string "It's so cold outside that I'm going to\n"
    .string "ignore how old you are.\l"
    .string "Be happy.$"

Script_KassanLittleBoy1::
    lock
    faceplayer
    msgbox Text_KassanLittleBoy1, MSGBOX_DEFAULT
    release
    end

Text_KassanLittleBoy1:
    .string "What's that smell?\n"
    .string "Oh, I know.\l"
    .string "It's the stench an OLDY MOLDIE!\l"
    .string "PEE YEW!$"

Script_KassanLittleBoy2::
    lock
    faceplayer
    msgbox Text_KassanLittleBoy2, MSGBOX_DEFAULT
    release
    end

Text_KassanLittleBoy2:
    .string "You think you can catch me?\n"
    .string "I don't think so, oldy.\l"
    .string "Oldy moldies can never catch me!$"

Script_KassanLittleBoy3::
    lock
    faceplayer
    msgbox Text_KassanLittleBoy3, MSGBOX_DEFAULT
    release
    end

Text_KassanLittleBoy3:
    .string "Your oldy moldie butt better leave now\l"
    .string "or else imma pull out my Weedle.$"

Text_Grunt_Dont_Go_In:
    .string "Oi! Stay away from here you filthy\n"
    .string "Viola.\p"
    .string "We're in the middle of doing something\n"
    .string "so back off.$"

Text_Kasaan_Back_Off:
    .string "Don't you move any further!\p"
    .string "I've been given special instructions to\n"
    .string "not let anyone in. Especially coloreds\l"
    .string "like you.\p"
    .string "So back off 'cuz you don't want this\n"
    .string "smoke.$"
    
Text_Backed_Off:
    .string "Yeah that's what I thought.\p"
    .string "Back the fuck off.$"

Movement_Kasaan_Back_Off:
    face_down
    walk_down
    step_end

Text_Did_Not_Back_Off:
    .string "So you think you're tough, cuh?\p"
    .string "Square up, cuz shit's boutta get real.$"

Text_KasaanGruntDefeated:
    .string "This is why I hate y'all dulls...$"

Text_KasaanGruntDefeated2:
    .string "This is why I hate y'all dulls...\p"
    .string "I'm telling you though, don't go inside\n"
    .string "or you'll face the repercussions of\l"
    .string "messing with us, {SHADOW DARK_GRAY}Angrboda{SHADOW LIGHT_GRAY}.$"

