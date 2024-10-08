
[MeasureTime]
Measure=Time
Format=%[#Time-KazukiGames82___Format_Leading_Zero_[#Time-KazukiGames82___Use_Leading_Zeros]][#Time-KazukiGames82___Format_Time_A_[#Time-KazukiGames82___Use_24_Hour]]:%M:%S [#Time-KazukiGames82___Format_Time_B_[#Time-KazukiGames82___Use_24_Hour]]
FormatLocale=[#Language[#LanguageNum]]
UpdateDivider=1

[MeasureTime3]
Measure=Time
Format=[#Time-KazukiGames82___Format_Time_B_0]
FormatLocale=[#Language[#LanguageNum]]
UpdateDivider=-1

;----------------------------------------------------------------------

[MeasureTime4]
Measure=Time
OnChangeAction=[!UpdateMeasure MeasureCondition]
UpdateDivider=60

[MeasureLogin]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_LOGONTIME
UpdateDivider=-1

[MeasureCondition]
Measure=Uptime
Format=%4!i!,%3!i!,%2!i! 
SecondsValue=([MeasureTime4:]-[MeasureLogin:])
OnChangeAction=[!UpdateMeasure MeasureUptime]
IfMatch=^0
IfMatchAction=[!SetVariable "MeasureDay" "0"]
IfNotMatchAction=[!SetVariable "MeasureDay" "1"]
IfMatch2=.*,0,
IfMatchAction2=[!SetVariable "MeasureHr" "0"]
IfNotMatchAction2=[!SetVariable "MeasureHr" "1"]
IfMatch3=.*,.*,0
IfMatchAction3=[!SetVariable "MeasureMin" "0"]
IfNotMatchAction3=[!SetVariable "MeasureMin" "1"]
DynamicVariables=1
UpdateDivider=-1

[MeasureUptime]
Measure=Uptime
Format=[#Measure_[#MeasureDay]_[#MeasureHr]_[#MeasureMin]]
SecondsValue=([MeasureTime4:]-[MeasureLogin:])
DynamicVariables=1
UpdateDivider=-1
