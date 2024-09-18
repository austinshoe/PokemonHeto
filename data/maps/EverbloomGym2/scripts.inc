EverbloomGym2_MapScripts::
	.byte 0
    
Everbloom_Gym2_Secret_Path::
    lockall
    msgbox Text_Everbloom_Gym2SecretPath, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Everbloom_Gym2_PlayerAnsweredNo
    warp MAP_EVERBLOOM_GYM, 23, 10
    releaseall
    end

Everbloom_Gym2_PlayerAnsweredNo:
    releaseall
    end

Text_Everbloom_Gym2SecretPath:
    .string "Return to the main gym?$"
