HetonianDesert_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, HetonianDesert_Random_Weather
	.byte 0

HetonianDesert_Random_Weather::
    random 10
    switch VAR_RESULT
    case 0, HetonianDesert_WeatherSandStorm
    case 1, HetonianDesert_WeatherSunny
    case 2, HetonianDesert_WeatherSandStorm
    case 3, HetonianDesert_WeatherSunny
    case 4, HetonianDesert_WeatherNormal
    case 5, HetonianDesert_WeatherNormal
    case 6, HetonianDesert_WeatherSunny
    case 7, HetonianDesert_WeatherSandStorm
    case 8, HetonianDesert_WeatherSunny
    case 9, HetonianDesert_WeatherSandStorm
    end

HetonianDesert_WeatherSandStorm::
    setweather WEATHER_SANDSTORM
    doweather
    end

HetonianDesert_WeatherSunny::
    setweather WEATHER_DROUGHT
    doweather
    end

HetonianDesert_WeatherNormal::
    setweather WEATHER_NONE
    doweather
    end

Script_HetonianDesertMan1::
    lock
    faceplayer
    msgbox Text_HetonianDesertMan1, MSGBOX_DEFAULT
    release
    end

Text_HetonianDesertMan1:
    .string "Are you also running away from those\n"
    .string "guys from the powerplant?$"
    
Script_HetonianDesertWoman1::
    lock
    faceplayer
    msgbox Text_HetonianDesertWoman1, MSGBOX_DEFAULT
    release
    end

Text_HetonianDesertWoman1:
    .string "The dispute ended years ago.\n"
    .string "Why are they still mad about it?$"
    
Script_HetonianDesertMan2::
    lock
    faceplayer
    msgbox Text_HetonianDesertMan2, MSGBOX_DEFAULT
    release
    end

Text_HetonianDesertMan2:
    .string "I am one with the Desert and the\n"
    .string "Desert is one with me.\p"
    .string "Commence the ritual.$"
