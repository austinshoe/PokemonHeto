OnsenHouse1_MapScripts::
	.byte 0

Script_OnsenCityHouse2Man1::
    lock
    faceplayer
    msgbox Text_OnsenCityHouse2Man1, MSGBOX_DEFAULT
    msgbox Text_OnsenCityHouse2Man2, MSGBOX_DEFAULT
    delay 8
    msgbox Text_OnsenCityHouse2ManOpinion, MSGBOX_DEFAULT
    delay 16
    msgbox Text_OnsenCityHouse2ManHappy, MSGBOX_DEFAULT
    delay 8
    msgbox Text_OnsenCityHouse2ManTripping, MSGBOX_DEFAULT
    release
    end
    
Script_OnsenCityHouse2Man2::
    lock
    faceplayer
    msgbox Text_OnsenCityHouse2Man1, MSGBOX_DEFAULT
    delay 8
    msgbox Text_OnsenCityHouse2Man2, MSGBOX_DEFAULT
    delay 8
    msgbox Text_OnsenCityHouse2ManOpinion, MSGBOX_DEFAULT
    delay 16
    msgbox Text_OnsenCityHouse2ManHappy, MSGBOX_DEFAULT
    delay 8
    msgbox Text_OnsenCityHouse2ManTripping, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityHouse2Man1:
    .string "Can you settle this argument real\n"
    .string "quick?\p"
    .string "This guy thinks that Light is smarter\l"
    .string "than L, but L is waaaay smarter than-$"

Text_OnsenCityHouse2Man2:
    .string "No way.\p"
    .string "Light is miles smarter than L.\p"
    .string "It's not even close.$"
    
Text_OnsenCityHouse2ManOpinion:
    .string "Let the man speak.\n"
    .string "What do you think?$"

Text_OnsenCityHouse2ManHappy:
    .string "SEEE?!\n"
    .string "I TOLD YOU!\p"
    .string "L IS WAY SMARTER!$"

Text_OnsenCityHouse2ManTripping:
    .string "Nah, both of you are tripping.\n"
    .string "I'm not going to waste a second longer\p"
    .string "arguing with you fools.$"
    
Script_OnsenCityHouse2Woman1::
    lock
    faceplayer
    msgbox Text_OnsenCityHouse2Woman1, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityHouse2Woman1:
    .string "They argue like that all the time.\n"
    .string "We just ignore them.\l"
    .string "You should do it as well.$"
    
Script_OnsenCityHouse2Woman2::
    lock
    faceplayer
    msgbox Text_OnsenCityHouse2Woman2, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityHouse2Woman2:
    .string "Argument?\n"
    .string "There was an argument going on?$"
