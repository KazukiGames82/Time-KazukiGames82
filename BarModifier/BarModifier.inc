;----------------------------------------------------
; Measures
;----------------------------------------------------

[Time-KazukiGames82_Measure]
Measure=Time
Format=[#Time-KazukiGames82___Format_[#Time-KazukiGames82___Type_Time_Format]]
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1
Disabled=((#Time-KazukiGames82___Show_Text#-1)*-1)
Group=[#Time-KazukiGames82___Update_Measure_[#Time-KazukiGames82___Show_Text]]

;----------------------------------------------------
; Styles
;----------------------------------------------------

[Time-KazukiGames82.Style]
ImageAlpha=0
W=([Time-KazukiGames82_String:W]-(([Time-KazukiGames82_String:W])%1))

[Time-KazukiGames82_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Time-KazukiGames82]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
Container=SystemTrayContainer
Group=CustomApp[#Time-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Time-KazukiGames82]] | CustomAppButton | Time-KazukiGames82 | [#Time-KazukiGames82___Update_Meter_[#Time-KazukiGames82___Show_Text]]
DynamicVariables=1

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Time-KazukiGames82_String]
Meter=String
MeterStyle=InfoStyle | Time-KazukiGames82_Style
StringAlign=LeftCenter
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(#Time-KazukiGames82___Show_Icon#=1?(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1):((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)),#TopBarSysTextYPadding#,(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)*#Time-KazukiGames82___Show_Text#),0
Text=[#Time-KazukiGames82___Text_[#Time-KazukiGames82___Show_Text]]
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))

[Time-KazukiGames82_Icon]
Meter=Image
MeterStyle=InfoStyle | Time-KazukiGames82_Style
; ImageName="#SKINSPATH#Droptop Community Apps\Apps\Time-KazukiGames82\Button\Medium\#Time-KazukiGames82___Type_Style_Icon#\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageName="#SKINSPATH#Droptop Community Apps\Apps\Time-KazukiGames82\Button\Medium\1\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#*#Time-KazukiGames82___Show_Icon#)
Padding=#SysIconPadding#
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)
