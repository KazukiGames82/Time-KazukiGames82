[Variables]

;----------------------------------------------------

NotCurrentMonth=0

mDay1Day=0
mDay2Day=0
mDay3Day=0
mDay4Day=0
mDay5Day=0
mDay6Day=0
mDay7Day=0
mDay8Day=0
mDay9Day=0
mDay10Day=0
mDay11Day=0
mDay12Day=0
mDay13Day=0
mDay14Day=0
mDay15Day=0
mDay16Day=0
mDay17Day=0
mDay18Day=0
mDay19Day=0
mDay20Day=0
mDay21Day=0
mDay22Day=0
mDay23Day=0
mDay24Day=0
mDay25Day=0
mDay26Day=0
mDay27Day=0
mDay28Day=0
mDay29Day=0
mDay30Day=0
mDay31Day=0
mDay32Day=0
mDay33Day=0
mDay34Day=0
mDay35Day=0
mDay36Day=0
mDay37Day=0
mDay38Day=0
mDay39Day=0
mDay40Day=0
mDay41Day=0
mDay42Day=0

ThisWeek=0
Week=0

;Custom text for Weekday labels. Uses the following format: Sun|Mon|Tue|Wed|Thu|Fri|Sat
DayLabels=#*Day1Shorthand*#|#*Day2Shorthand*#|#*Day3Shorthand*#|#*Day4Shorthand*#|#*Day5Shorthand*#|#*Day6Shorthand*#|#*Day7Shorthand*#

;Set to 1 to hide week 6 if not included in the current month
HideLastWeek=0

;Holidays File names
;Note: For Holiday file names, multiple sources can be used by uisng the pipe delimiter (|).
EventFile=#SKINSPATH#Droptop\@Resources\Calendars\[#Language[#LanguageNum]]\Holidays.xml|#CURRENTPATH#\Calendar\Custom.xml
;Custom Text formatting for Month Labels. See Readme for details.
LabelText={$MName} {$Year}

;Set to 1 to add a leading zero to any number below 10.
LeadingZeroes=0

;Custom text for Month labels. Uses the following format: Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
MonthLabels=#*Month1*#|#*Month2*#|#*Month3*#|#*Month4*#|#*Month5*#|#*Month6*#|#*Month7*#|#*Month8*#|#*Month9*#|#*Month10*#|#*Month11*#|#*Month12*#

;Set to 1 to have the week start on Monday
StartOnMonday=#Time-KazukiGames82___Calendar_Start_On_Monday#

;The format for the list of upcoming events. {$day} and {$desc} are valid variables.
NextFormat=

;Show the Moon Phases as events
ShowMoonPhases=#Time-KazukiGames82___Calendar_Show_Moon_Phases#

;Color to use for the Moon Phases Events
MoonColor=

;Set to 0 to hide all calendar events including the Moon Phases
ShowEvents=#Time-KazukiGames82___Calendar_Show_Events#

;Set to 1 to disable scroll actions for changing the month
DisableScroll=1

;----------------------------------------------------

Space.x=0
Space.y=0
C.w=((((#DropdownMenuWidth#+2)-(#DropdownNoIconPadding#*2))/(7+#Time-KazukiGames82___Calendar_Show_Week_Number#))-((((#DropdownMenuWidth#+2)-(#DropdownNoIconPadding#*2))/(7+#Time-KazukiGames82___Calendar_Show_Week_Number#))%1))
C.h=#DropdownItemHeight#
Bumper.x=((((#DropdownMenuWidth#+2)/2)-(#C.w#*(7-#Time-KazukiGames82___Calendar_Show_Week_Number#))/2)-((((#DropdownMenuWidth#+2)/2)-(#C.w#*(7-#Time-KazukiGames82___Calendar_Show_Week_Number#))/2)%1))
Bumper.y=0
Bumper.top=([4:Y])
Bumper.bottom=0

;----------------------------------------------------

[LblTxtSty]
Padding=
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
InlineSetting=CharacterSpacing | 0 | 0
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
stringAlign=CenterCenter
AntiAlias=#DropdownAntiAlias#

[LblTxtStart]
X=(#Bumper.x#+((#C.w#/2)-((#C.w#/2)%1)))
Y=(#Bumper.top#+((#C.h#/2)-((#C.h#/2)%1))+#Space.y#)

[LblCurrSty]
StringStyle=Bold

[TextStyle]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
InlineSetting=CharacterSpacing | 0 | 0
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=#FontName0#
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
stringAlign=CenterCenter
AntiAlias=#DropdownAntiAlias#

[FirstDay]
Y=(#C.h#+#Space.y#)r
X=(#Bumper.x#+((#C.w#/2)-((#C.w#/2)%1)))

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+((#C.w#/2)-((#C.w#/2)%1)))

[CurrentDay]
FontSize=(#DropdownItemFontSize#*1.2)
InlineSetting3=
StringStyle=Normal
FontWeight=#FontWeight#

[LastWeek]

[PreviousMonth]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/4)

[NextMonth]
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/4)

[HolidayStyle]
PreFix=" "
PostFix=" "
InlineSetting3=Underline
TrailingSpaces=1
StringStyle=Bold
FontWeight=600

[WeekendStyle]

[WeekStyle]
Hidden=((#Time-KazukiGames82___Calendar_Show_Week_Number#-1)*-1)
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=

;----------------------------------------------------

[DaysHL]
Meter=Shape
X=#Bumper.x#
Y=(#Bumper.top#+(#C.h#+#Space.y#))
Shape=Rectangle 0,0,0,0 | Fill LinearGradient HLColorGradientBg | StrokeWidth ((2*#DroptopSize#)-((2*#DroptopSize#)%1)) | Stroke LinearGradient HLStrokeGradientBg
Shape2=Rectangle (#C.w#*(7-#mDay7Day#)),0,(#C.w#*#mDay7Day#),#C.h#,(#DropdownBGCorner#/1.5)
Shape3=Rectangle (#C.w#*(7-#mDay7Day#)),(#C.h#/2),(#C.w#*#mDay7Day#),#C.h#,0
Shape4=Rectangle (#C.w#*(6.5-#mDay7Day#)),(#C.h#*0.5),#C.w#,#C.h#,(#DropdownBGCorner#/1.5)
Shape5=Rectangle (#C.w#*(6-#mDay7Day#)),0,#C.w#,#C.h#,(#DropdownBGCorner#/1.5)
Shape6=Combine Shape4 | Exclude Shape5 | Offset (#C.w#*((7-#mDay7Day#)<=0?1:0)),0
Shape7=Rectangle 0,#C.h#,(#C.w#*7),(#C.h#*3),(#DropdownBGCorner#/1.5)
Shape8=Rectangle 0,(#C.h#*4),(#C.w#*((7-#mDay35Day#)=0?0:((7-#mDay35Day#)<0?7:(7-#mDay35Day#)))),#C.h#,(#DropdownBGCorner#/1.5)
Shape9=Rectangle 0,(#C.h#*3.5),(#C.w#*((7-#mDay35Day#)=0?0:((7-#mDay35Day#)<0?7:(7-#mDay35Day#)))),#C.h#,0
Shape10=Combine Shape8 | Union Shape9 | Offset 0,(-(#C.h#*2.5)*((7-#mDay35Day#)=0?1:0))
Shape11=Rectangle (#C.w#*((6.5-#mDay35Day#)=0?0:((6.5-#mDay35Day#)<0?6.5:(6.5-#mDay35Day#)))),(#C.h#*3.5),#C.w#,#C.h#,(#DropdownBGCorner#/1.5)
Shape12=Rectangle (#C.w#*((7-#mDay35Day#)=0?0:((7-#mDay35Day#)<0?7:(7-#mDay35Day#)))),(#C.h#*4),#C.w#,#C.h#,(#DropdownBGCorner#/1.5)
Shape13=Combine Shape11 | Exclude Shape12 | Offset (-#C.w#*((6.5-#mDay35Day#)<=0?1:0)),(-(#C.h#*2.5)*((7-#mDay35Day#)=0?1:0))
Shape14=Rectangle 0,(#C.h#*5),((#C.w#*(7-#mDay42Day#))*((7-#mDay42Day#)<=0?0:1)),#C.h#,(#DropdownBGCorner#/1.5)
Shape15=Rectangle 0,(#C.h#*4.5),((#C.w#*(7-#mDay42Day#))*((7-#mDay42Day#)<=0?0:1)),#C.h#,0
Shape16=Combine Shape14 | Union Shape15 | Offset 0,(-(#C.h#*3)*((7-#mDay42Day#)<=0?1:0))
Shape17=Rectangle ((#C.w#*(6.5-#mDay42Day#))*((6.5-#mDay42Day#)<=0?0:1)),(#C.h#*4.5),#C.w#,#C.h#,(#DropdownBGCorner#/1.5)
Shape18=Rectangle ((#C.w#*(7-#mDay42Day#))*((7-#mDay42Day#)<=0?0:1)),(#C.h#*5),#C.w#,#C.h#,(#DropdownBGCorner#/1.5)
Shape19=Combine Shape17 | Exclude Shape18 | Offset ((#C.w#*1)*((7-#mDay42Day#)<=0?1:0)),(-(#C.h#*3)*((7-#mDay42Day#)<=0?1:0))
Shape20=Rectangle ((#C.w#+#Space.x#)*#Week#),((#C.h#+#Space.y#)*(#ThisWeek#-1)),(#C.w#*((#NotCurrentMonth#-1)*-1)),(#C.h#*((#NotCurrentMonth#-1)*-1)),(#DropdownBGCorner#/1.5)
Shape21=Combine Shape | Union Shape2 | Union Shape3 | Union Shape6 | Union Shape7 | Union Shape10 | Union Shape13 | Union Shape16 | Union Shape19 | Exclude Shape20
Shape22=Rectangle 0,0,0,0 | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#*#Time-KazukiGames82___Calendar_Fill_Outline#)*#Time-KazukiGames82___Calendar_Show_Outline#) | StrokeWidth 0
Shape23=Combine Shape22 | Union Shape2 | Union Shape3 | Union Shape6 | Union Shape7 | Union Shape10 | Union Shape13 | Union Shape16 | Union Shape19 | XOR Shape20
Shape24=Rectangle 0,0,0,0 | Fill LinearGradient HLShadowGradientBg | StrokeWidth 0
Shape25=Combine Shape24 | Union Shape2 | Union Shape3 | Union Shape6 | Union Shape7 | Union Shape10 | Union Shape13 | Union Shape16 | Union Shape19 | XOR Shape20
Shape26=Rectangle 0,0,0,0 | Fill Color 255,255,255,((55*#DropdownHLSolidColor#*#Time-KazukiGames82___Calendar_Fill_Outline#)*#Time-KazukiGames82___Calendar_Show_Outline#) | StrokeWidth 0 | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape27=Combine Shape26 | Union Shape2 | Union Shape3 | Union Shape6 | Union Shape7 | Union Shape10 | Union Shape13 | Union Shape16 | Union Shape19 | XOR Shape20
Shape28=Rectangle ((#C.w#+#Space.x#)*#Week#),((#C.h#+#Space.y#)*(#ThisWeek#-1)),(#C.w#*((#NotCurrentMonth#-1)*-1)),(#C.h#*((#NotCurrentMonth#-1)*-1)),(#DropdownBGCorner#/1.5) | Fill LinearGradient HLColorGradient | StrokeWidth ((2*#DroptopSize#)-((2*#DroptopSize#)%1)) | Stroke LinearGradient HLStrokeGradient
Shape29=Rectangle ((#C.w#+#Space.x#)*#Week#),((#C.h#+#Space.y#)*(#ThisWeek#-1)),(#C.w#*((#NotCurrentMonth#-1)*-1)),(#C.h#*((#NotCurrentMonth#-1)*-1)),(#DropdownBGCorner#/1.5) | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*(#Time-KazukiGames82___Calendar_Show_Outline#=1?(#Time-KazukiGames82___Calendar_Fill_Outline#=1?0:1):1)) | StrokeWidth 0
Shape30=Rectangle ((#C.w#+#Space.x#)*#Week#),((#C.h#+#Space.y#)*(#ThisWeek#-1)),(#C.w#*((#NotCurrentMonth#-1)*-1)),(#C.h#*((#NotCurrentMonth#-1)*-1)),(#DropdownBGCorner#/1.5) | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape31=Rectangle ((#C.w#+#Space.x#)*#Week#),((#C.h#+#Space.y#)*(#ThisWeek#-1)),(#C.w#*((#NotCurrentMonth#-1)*-1)),(#C.h#*((#NotCurrentMonth#-1)*-1)),(#DropdownBGCorner#/1.5) | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*(#Time-KazukiGames82___Calendar_Show_Outline#=1?(#Time-KazukiGames82___Calendar_Fill_Outline#=1?0:1):1)) | StrokeWidth 0 | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
HLColorGradientBg=45 | #DropdownItemHL#,(((255/6)*#Time-KazukiGames82___Calendar_Fill_Outline#)*#Time-KazukiGames82___Calendar_Show_Outline#) ; 1.0 | #DropdownItemHL2#,(((255/6)*#Time-KazukiGames82___Calendar_Fill_Outline#)*#Time-KazukiGames82___Calendar_Show_Outline#) ; 0.0
HLStrokeGradientBg=45 | #DropdownItemHL#,(255*#Time-KazukiGames82___Calendar_Show_Outline#) ; 1.0 | #DropdownItemHL2#,(255*#Time-KazukiGames82___Calendar_Show_Outline#) ; 0.0
HLShadowGradientBg=90 | 255,255,255,((35*#DropdownHLShadow#*#Time-KazukiGames82___Calendar_Fill_Outline#)*#Time-KazukiGames82___Calendar_Show_Outline#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#*#Time-KazukiGames82___Calendar_Fill_Outline#)*#Time-KazukiGames82___Calendar_Show_Outline#) ; 0.0
HLColorGradient=0 | #DropdownItemHL#,((255/6)*(#Time-KazukiGames82___Calendar_Show_Outline#=1?(#Time-KazukiGames82___Calendar_Fill_Outline#=1?0:1):1)) ; 1.0 | #DropdownItemHL2#,((255/6)*(#Time-KazukiGames82___Calendar_Show_Outline#=1?(#Time-KazukiGames82___Calendar_Fill_Outline#=1?0:1):1)) ; 0.0
HLStrokeGradient=0 | #DropdownItemHL#,((255*((#Time-KazukiGames82___Calendar_Show_Outline#-1)*-1))*((#NotCurrentMonth#-1)*-1)) ; 1.0 | #DropdownItemHL2#,((255*((#Time-KazukiGames82___Calendar_Show_Outline#-1)*-1))*((#NotCurrentMonth#-1)*-1)) ; 0.0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*(#Time-KazukiGames82___Calendar_Show_Outline#=1?(#Time-KazukiGames82___Calendar_Fill_Outline#=1?0:1):1)) ; 1.0 | 0,0,0,(((35*#DropdownHLShadow#)*#Time-KazukiGames82___Calendar_Fill_Outline#)*#Time-KazukiGames82___Calendar_Show_Outline#) ; 0.0
DynamicVariables=1

;----------------------------------------------------

;Day Labels
[l0]
Meter=string

[l1]
Meter=string

[l2]
Meter=string

[l3]
Meter=string

[l4]
Meter=string

[l5]
Meter=string

[l6]
Meter=string

;Week 1 Begin
[mDay1]
Meter=string

[mDay2]
Meter=string

[mDay3]
Meter=string

[mDay4]
Meter=string

[mDay5]
Meter=string

[mDay6]
Meter=string

[mDay7]
Meter=string

;Week 2 Begin
[mDay8]
Meter=string

[mDay9]
Meter=string

[mDay10]
Meter=string

[mDay11]
Meter=string

[mDay12]
Meter=string

[mDay13]
Meter=string

[mDay14]
Meter=string

;Week 3 Begin
[mDay15]
Meter=string

[mDay16]
Meter=string

[mDay17]
Meter=string

[mDay18]
Meter=string

[mDay19]
Meter=string

[mDay20]
Meter=string

[mDay21]
Meter=string

;Week 4 Begin
[mDay22]
Meter=string

[mDay23]
Meter=string

[mDay24]
Meter=string

[mDay25]
Meter=string

[mDay26]
Meter=string

[mDay27]
Meter=string

[mDay28]
Meter=string

;Week 5 Begin
[mDay29]
Meter=string

[mDay30]
Meter=string

[mDay31]
Meter=string

[mDay32]
Meter=string

[mDay33]
Meter=string

[mDay34]
Meter=string

[mDay35]
Meter=string

;Week 6 Begin
[mDay36]
Meter=string

[mDay37]
Meter=string

[mDay38]
Meter=string

[mDay39]
Meter=string

[mDay40]
Meter=string

[mDay41]
Meter=string

[mDay42]
Meter=string

[mWeek1]
Meter=String
MeterStyle=InfoStyle | LblTxtSty | WeekStyle
X=((((#DropdownMenuWidth#+2)/2)-(#C.w#*8)/2)-((((#DropdownMenuWidth#+2)/2)-(#C.w#*8)/2)%1)+#C.w#/2)
Y=(#Bumper.top#+#C.h#+#C.h#/2+#Space.y#)
Text=#WeekNumber1#

[mWeek2]
Meter=String
MeterStyle=InfoStyle | LblTxtSty | WeekStyle
X=r
Y=R
Text=#WeekNumber2#

[mWeek3]
Meter=String
MeterStyle=InfoStyle | LblTxtSty | WeekStyle
X=r
Y=R
Text=#WeekNumber3#

[mWeek4]
Meter=String
MeterStyle=InfoStyle | LblTxtSty | WeekStyle
X=r
Y=R
Text=#WeekNumber4#

[mWeek5]
Meter=String
MeterStyle=InfoStyle | LblTxtSty | WeekStyle
X=r
Y=R
Text=#WeekNumber5#

[mWeek6]
Meter=String
MeterStyle=InfoStyle | LblTxtSty | WeekStyle
X=r
Y=R
Text=#WeekNumber6#
