OnsenHouse3_MapScripts::
	.byte 0

Script_OnsenCityHouse5Man1::
    lock
    faceplayer
    msgbox Text_OnsenCityHouse5Man1, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityHouse5Man1:
    .string "We should be very thankful that beans\n"
    .string "aren't purple.$"

Script_OnsenCityHouse5Woman1::
    lock
    faceplayer
    msgbox Text_OnsenCityHouse5Woman1, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityHouse5Woman1:
    .string "He went a bit senile a couple years\n"
    .string "ago, but hey.\l"
    .string "Who wouldn't if you had to inhale\l"
    .string "smoke everyday?$"
