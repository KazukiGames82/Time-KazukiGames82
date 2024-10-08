;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
DefaultUpdateDivider=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=5

FolderNumber=5

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

DropdownMenuWidth=#DropdownSubMenuWidth#

NumberOfBoxes=0

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

WebViewWidth=0
WebViewHeight=0

IconW=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
IconH=((16*#DroptopSize#)-((16*#DroptopSize#)%1))

ItemText1=
ItemAction1=

ItemText2=
ItemAction2=

ItemText3=
ItemAction3=

ItemText4=
ItemAction4=

ItemText5=
ItemAction5=

ItemText6=
ItemAction6=

ItemText7=
ItemAction7=

ItemText8=
ItemAction8=

ItemText9=
ItemAction9=

ItemText10=
ItemAction10=

ItemIconFileName1=display
ItemIconFileName2=display
ItemIconFileName3=display
ItemIconFileName4=display
ItemIconFileName5=display
ItemIconFileName6=display
ItemIconFileName7=display
ItemIconFileName8=display
ItemIconFileName9=display
ItemIconFileName10=display
ItemIconFileName11=display
ItemIconFileName12=display
ItemIconFileName13=display
ItemIconFileName14=display
ItemIconFileName15=display
ItemIconFileName16=display

MICaret=0

DayLabels=#*Day1Shorthand*#|#*Day2Shorthand*#|#*Day3Shorthand*#|#*Day4Shorthand*#|#*Day5Shorthand*#|#*Day6Shorthand*#|#*Day7Shorthand*#
HideLastWeek=0
EventFile=#SKINSPATH#Droptop\@Resources\Calendars\[#Language[#LanguageNum]]\Holidays.xml|#SKINSPATH#Droptop Community Apps\Apps\Time-KazukiGames82\Calendar\Custom.xml
LabelText=
LeadingZeroes=0
MonthLabels=#*Month1*#|#*Month2*#|#*Month3*#|#*Month4*#|#*Month5*#|#*Month6*#|#*Month7*#|#*Month8*#|#*Month9*#|#*Month10*#|#*Month11*#|#*Month12*#
StartOnMonday=#Time-KazukiGames82___Calendar_Start_On_Monday#
NextFormat=
ShowMoonPhases=#Time-KazukiGames82___Calendar_Show_Moon_Phases#
MoonColor=
ShowEvents=#Time-KazukiGames82___Calendar_Show_Events#
DisableScroll=1

; -------------------------------------------------------------------------------

[Lua]
Measure=Script
ScriptFile=#SKINSPATH#Droptop Community Apps\Apps\Time-KazukiGames82\Scripts\CScript.lua
DynamicVariables=1

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
Padding=(#DropdownItemPadding1#/1.35),#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
W=((#DropdownMenuWidth#+2)-(#DropdownItemPadding1#/1.35)-#DropdownNoIconPadding#)

[IconStyle]

[ArrowStyleB]
Hidden=1

[Background]
Shape2=

[HighlightBackground]

[HighlightSelected]

;-----------------------------------------

[1]
MeterStyle=InfoStyle

[2]
MeterStyle=InfoStyle

[3]
MeterStyle=InfoStyle

[4]
MeterStyle=InfoStyle

[5]
MeterStyle=InfoStyle

[6]
MeterStyle=InfoStyle

[7]
MeterStyle=InfoStyle

[8]
MeterStyle=InfoStyle

[9]
MeterStyle=InfoStyle

[10]
MeterStyle=InfoStyle

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle
