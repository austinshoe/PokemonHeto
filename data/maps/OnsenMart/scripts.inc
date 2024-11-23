OnsenMart_MapScripts::
	.byte 0

Script_OnsenCityMartCustomer1::
    lock
    msgbox Text_OnsenCityMartCustomer1, MSGBOX_DEFAULT
    release
    end

Text_OnsenCityMartCustomer1:
    .string "Man,\n"
    .string "it's so hard to choose what items to\l"
    .string "buy.\p"
    .string "Just like how it's so hard to choose\n"
    .string "if I belong to {COLOR RED}Toemayto{COLOR DARK_GRAY} or {COLOR RED}Hehamayto{COLOR DARK_GRAY}.\p"
    .string "{FONT_SMALL_NARROW}I should not have said that.$"
