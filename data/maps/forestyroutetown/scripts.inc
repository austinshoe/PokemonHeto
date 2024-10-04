forestyroutetown_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, forestyroutetown_DrStoneCall_OnFrame
    .byte 0
    
forestyroutetown_DrStoneCall_OnFrame:
    map_script_2 VAR_LILYCOVE_CITY_STATE, 0, EventScript_RunCutsceneStone1
    .2byte 0

EventScript_RunCutsceneStone1:
    lock
    msgbox Text_forestyroutetownstonecall1, MSGBOX_DEFAULT
    setvar VAR_LILYCOVE_CITY_STATE, 1
    release
    end

Text_forestyroutetownstonecall1:
    .string "Bzzzt...\p"
    .string "Bzzzt...\p"
    .string "Any news??? On you know what???\n"
    .string "You saw Angrboda??? At fall grove,"
    .string "but not Emberfall?"
    .string "Oh no, what are they planning..."
    .string "{FONT FONT_SMALL_NARROW}(click){FONT FONT_NORMAL}\p"
    .string "...\p"
    .string "...$"
