NewMap4_MapScripts::
	.byte 0

Script_FallGroveTownSign::
    lock
    faceplayer
    msgbox Text_FallGroveTownSign, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownSign:
    .string "{COLOR BLUE}Fall Grove Town\n"
    .string "It's...I dont even know to be honest$"

Script_FallGroveTownHouse1OldMan1::
    lock
    faceplayer
    msgbox Text_FallGroveTownHouse1OldMan1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse1OldMan1:
    .string "Back in my day, I was the number one\n"
    .string "pokémon trainer in the world!$"

Script_FallGroveTownHouse1OldWoman1::
    lock
    msgbox Text_FallGroveTownHouse1OldWoman1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse1OldWoman1:
    .string "I think it's time for you to take\n"
    .string "your pills, dear.$"
    
Script_FallGroveTownHouse2Woman1::
    lock
    faceplayer
    msgbox Text_FallGroveTownHouse2Woman1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse2Woman1:
    .string "My husband works super hard to take\n"
    .string "care of the farm, and now my son\l"
    .string "is helping as well.\l"
    .string "I'm so proud of both of them.$"

Script_FallGroveTownHouse2LittleGirl1::
    lock
    faceplayer
    msgbox Text_FallGroveTownHouse2LittleGirl1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownHouse2LittleGirl1:
    .string "My brother is just a little older than\n"
    .string "me, so why does he get to help and I\l"
    .string "don't?\l"
    .string "It's not fair...$"
    
Script_FallGroveTownFarmer1::
    lock
    faceplayer
    msgbox Text_FallGroveTownFarmer1, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownFarmer1:
    .string "Working the farm is a lot of work,\n"
    .string "but knowing my wife is waiting at\l"
    .string "home with fresh food helps me continue\l"
    .string "pushing myself.$"

Script_FallGroveTownFarmer2::
    lock
    faceplayer
    msgbox Text_FallGroveTownFarmer2, MSGBOX_DEFAULT
    release
    end

Text_FallGroveTownFarmer2:
    .string "I can't wait until my little sister\n"
    .string "can help me and dad in the farm.\l"
    .string "We are a perfect team!$"
