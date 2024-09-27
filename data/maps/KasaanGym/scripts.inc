KasaanGym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, KasaanGym_OnTransition
	.byte 0

KasaanGym_OnTransition:
	setvar VAR_TEMP_0, 0

KasaanGym_WeatherSwitch::
	lock
	compare VAR_TEMP_0, 0
	goto_if_eq KasaanGym_LetItSnow
	setweather WEATHER_NONE
	doweather
	msgbox Text_KasaanGym_CLear
	setvar VAR_TEMP_0, 0
	release
	end


KasaanGym_LetItSnow:
	setweather WEATHER_SNOW
	doweather
	msgbox Text_KasaanGym_Snow
	setvar VAR_TEMP_0, 1
	release
	end

Text_KasaanGym_Snow:
	.string "It started snowing!$"

Text_KasaanGym_CLear:
	.string "The weather cleared up.$"