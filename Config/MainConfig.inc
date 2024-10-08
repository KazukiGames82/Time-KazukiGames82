;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=[#Update[#Time-KazukiGames82___Calendar_Show_Only_Calendar]]
DefaultUpdateDivider=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=5
DropdownItemHL2=#DropdownItemHL#
@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

Update0=1000
Update1=-1

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
ItemIsFolder1=0
ItemAction1=#HideItems#

ItemText2=
ItemIsFolder2=0
ItemAction2=#HideItems#

ItemText3=
ItemIsFolder3=0
ItemAction3=#HideItems#

ItemText4=
ItemIsFolder4=0
ItemAction4=#HideItems#

ItemText5=
ItemIsFolder5=0
ItemAction5=#HideItems#

ItemText6=
ItemIsFolder6=0
ItemAction6=#HideItems#

ItemText7=
ItemIsFolder7=0
ItemAction7=#HideItems#

ItemText8=
ItemIsFolder8=0
ItemAction8=#HideItems#

ItemText9=
ItemIsFolder9=0
ItemAction9=#HideItems#

ItemText10=
ItemIsFolder10=0
ItemAction10=#HideItems#

ItemText11=
ItemIsFolder11=0
ItemAction11=#HideItems#

ItemText12=
ItemIsFolder12=0
ItemAction12=#HideItems#

ItemText13=
ItemIsFolder13=0
ItemAction13=#HideItems#

ItemText14=
ItemIsFolder14=0
ItemAction14=#HideItems#

ItemText15=
ItemIsFolder15=0
ItemAction15=#HideItems#

ItemText16=
ItemIsFolder16=0
ItemAction16=

DividerExists12=0
DividerExists13=0
DividerExists14=0
DividerY13=11
DividerY14=13
DividerY15=14

;----------------------------------------------------

MeasureDay=0
MeasureHr=0
MeasureMin=0

Measure_0_0_0=%2!i! #TimeMinShorthand#
Measure_0_0_1=%2!i! #TimeMinShorthand#
Measure_0_1_0=%3!i! #TimeHrShorthand#
Measure_0_1_1=%3!i! #TimeHrShorthand#, %2!i! #TimeMinShorthand#
Measure_1_0_0=%4!i! #TimeDayShorthand#
Measure_1_0_1=%4!i! #TimeDayShorthand#, %2!i! #TimeMinShorthand#
Measure_1_1_0=%4!i! #TimeDayShorthand#, %3!i! #TimeHrShorthand#
Measure_1_1_1=%4!i! #TimeDayShorthand#, %3!i! #TimeHrShorthand#, %2!i! #TimeMinShorthand#

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]

[IconStyle]
Group=Items

[ArrowStyleB]
Y=0

[BoxStyle]

[EventStyle]
Padding=(#DropdownItemPadding1#/1.35),#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
Y=((#DropdownItemHeight#)*([##CURRENTSECTION#]>((#NumberOfEventsToday#+5))?0:1)*#Time-KazukiGames82___Calendar_Show_Events#*((#NotCurrentMonth#-1)*-1))r
W=((#DropdownMenuWidth#+2)-(#DropdownItemPadding1#/1.35)-#DropdownNoIconPadding#)
H=((#DropdownItemHeight#)*([##CURRENTSECTION#]>((#NumberOfEventsToday#+5))?0:1)*#Time-KazukiGames82___Calendar_Show_Events#*((#NotCurrentMonth#-1)*-1))
Hidden=(#Time-KazukiGames82___Calendar_Show_Events#=1?(#NotCurrentMonth#=1?1:([##CURRENTSECTION#]>((#NumberOfEventsToday#+5))?1:0)):1)

[EventStyle2]
Padding=(#DropdownItemPadding1#/1.35),#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
Y=(#DropdownItemHeight#*([##CURRENTSECTION#]>=(#NumberOfEvents#+7+(#NotCurrentMonth#=1?3:(3-[#NumberOfEventsToday])))?0:1)*#Time-KazukiGames82___Calendar_Show_Events#)r
W=((#DropdownMenuWidth#+2)-(#DropdownItemPadding1#/1.35)-#DropdownNoIconPadding#)
H=((#DropdownItemHeight#)*([##CURRENTSECTION#]>=(#NumberOfEvents#+7+(#NotCurrentMonth#=1?3:(3-[#NumberOfEventsToday])))?0:1)*#Time-KazukiGames82___Calendar_Show_Events#)
Hidden=(#Time-KazukiGames82___Calendar_Show_Events#=1?([##CURRENTSECTION#]>=(#NumberOfEvents#+7+(#NotCurrentMonth#=1?3:(3-[#NumberOfEventsToday])))?1:0):1)

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

[11]
Meter=String
MeterStyle=#DefaultMeterStyle#

[12]
Meter=String
MeterStyle=#DefaultMeterStyle#

[13]
Meter=String
MeterStyle=#DefaultMeterStyle#

[14]
Meter=String
MeterStyle=#DefaultMeterStyle#

[15]
Meter=String
MeterStyle=#DefaultMeterStyle#

[16]
Meter=String
MeterStyle=#DefaultMeterStyle#

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

[11Icon]
Meter=Image
MeterStyle=IconStyle

[12Icon]
Meter=Image
MeterStyle=IconStyle

[13Icon]
Meter=Image
MeterStyle=IconStyle

[14Icon]
Meter=Image
MeterStyle=IconStyle

[15Icon]
Meter=Image
MeterStyle=IconStyle

[16Icon]
Meter=Image
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

[11Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[12Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[13Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[14Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[15Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[16Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

;-----------------------------------------

[Box1]
MeterStyle=
Y=

[Box2]
MeterStyle=

[Box3]
MeterStyle=

[Box4]
MeterStyle=

[Box5]
MeterStyle=
