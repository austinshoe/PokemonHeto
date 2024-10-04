forestyroutetown_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, forestyroutetown_DrStoneCall_OnFrame
    .byte 0
    
forestyroutetown_DrStoneCall_OnFrame:
    map_script_2 VAR_ROUTE105_STATE, 0, EventScript_RunCutsceneStone1
    .2byte 0

EventScript_RunCutsceneStone1:
    lock
    msgbox Text_forestyroutetownstonecall1, MSGBOX_DEFAULT
    setvar VAR_ROUTE105_STATE, 1
    release
    end

Text_forestyroutetownstonecall1:
    .string "Bzzzt...\p"
    .string "Bzzzt...\p"
    .string "{COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}: Hey, {PLAYER}?\n"
    .string "It's me, {COLOR BLUE}Dr. Stone{COLOR DARK_GRAY}, again.\p"
    .string "Any news?\n"
    .string "On {COLOR BLUE}Angrboda{COLOR DARK_GRAY}'s movements?\p"
    .string "...\p"
    .string "...\p"
    .string "So you saw them at Fall Grove, but not\n"
    .string "at {COLOR RED}Mt. Emberfall{COLOR DARK_GRAY}...\p"
    .string "I wonder what they're up to...\p"
    .string "For now, just keep an eye out for them.\p"
    .string "Just let me know if you see them again.\p"
    .string "{FONT FONT_SMALL}click{FONT FONT_NORMAL}\p"
    .string "...\p"
    .string "...$"
