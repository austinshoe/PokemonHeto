MtEmberfallExtS_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmberfallExtS_OnTransition
	.byte 0

MtEmberfallExtS_OnTransition:
	compare VAR_SKY_PILLAR_STATE, 0
	goto_if_eq MtEmberfallExtS_SetUpRivalOBJpos
	setflag FLAG_TEMP_1
	end

MtEmberfallExtS_SetUpRivalOBJpos:
	clearflag FLAG_TEMP_1
	end

MtEmberfallExtS_UpdatePlayerGFX:
    checkplayergender
    compare VAR_RESULT, FEMALE
    call_if_eq MtEmberfallExtS_UpdatePlayerGFXGirl
	compare VAR_RESULT, MALE
	call_if_eq MtEmberfallExtS_UpdatePlayerGFXBoy
    return
    
MtEmberfallExtS_UpdatePlayerGFXGirl:
    setobjectgfx 2, OBJ_EVENT_GFX_MAY_NORMAL
    return

MtEmberfallExtS_UpdatePlayerGFXBoy:
	setobjectgfx 2, OBJ_EVENT_GFX_BRENDAN_NORMAL
	return

MtEmberfallExtS_Triggers::
	lockall
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call MtEmberfallExtS_UpdatePlayerGFX
	setobjectxyperm 2, VAR_TEMP_0, VAR_TEMP_1
	addobject 2
	setvar VAR_SKY_PILLAR_STATE, 1
	releaseall
	end

MtEmberfallExtS_TriggersUnusedForNOw:
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallExtS_PanCamUp
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtEmberfallExtS_RivalTopMountain, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 1, MtEmberfallExtS_RivalLeave
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, MtEmberfallExtS_PanCamDown
	waitmovement OBJ_EVENT_ID_PLAYER
	setobjectxyperm 2, 0, 69
	removeobject 2
	setvar VAR_SKY_PILLAR_STATE, 1
	setflag FLAG_TEMP_1
	removeobject 1
	releaseall
	end

MtEmberfallExtS_PanCamUp:
	walk_up
	walk_up
	step_end

MtEmberfallExtS_RivalTopMountain:
	.string "I can feel something going on up there.\p"
	.string "I better get going...$"

MtEmberfallExtS_RivalLeave:
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MtEmberfallExtS_PanCamDown:
	walk_down
	walk_down
	face_up
	step_end


