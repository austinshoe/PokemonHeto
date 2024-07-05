FallGroveHouse1_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, FallGrove_Center_OnTransition
	.byte 0

FallGrove_Center_OnTransition::
    setrespawn HEAL_LOCATION_NEW_MAP4
    end

FallGrove_Old_Nanny::
    lock
    faceplayer
    msgbox Text_FallGrove_Rest MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq FallGrove_NoRest
    msgbox Text_FallGrove_Heal MSGBOX_DEFAULT
    closemessage
    call Common_EventScript_OutOfCenterPartyHeal
    msgbox Text_FallGrove_HealedUp MSGBOX_DEFAULT
    release
    end
    
Text_FallGrove_Rest:
    .string "Oh, dear!\n"
    .string "You're looking a bit tired.\l"
    .string "Why don't you take a rest here?$"

FallGrove_NoRest::
    msgbox Text_FallGrove_NoRest MSGBOX_DEFAULT
    release
    end

Text_FallGrove_NoRest:
    .string "Are you sure?\n"
    .string "Feel free to rest here anytime.$"

Text_FallGrove_Heal:
    .string "Go ahead, make yourself comfy and rest.$"

Text_FallGrove_HealedUp:
    .string "There we go.\n"
    .string "You look full of energy now."
    .string "Take care on your journey.$"
