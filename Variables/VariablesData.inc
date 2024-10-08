[Variables]
; -------------------------------------------------------------------------------
; VariablesData.inc is used to store variables for your app that are not user-specific or user-configurable.
; Variables in this document should be used to control the app's general functionality.
; -------------------------------------------------------------------------------

ItemIconPath=#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Icons\

MyAppVersion=24.0817

; ---------------------------------------
; --- GENERAL

Time-KazukiGames82___Update_0=
Time-KazukiGames82___Update_1=[!UpdateMeasure "Time-KazukiGames82_Measure" "Droptop\DropdownBar"][!UpdateMeterGroup "Time-KazukiGames82" "Droptop\DropdownBar"][!UpdateMeterGroup "CustomApp[#Time-KazukiGames82]Sys" "Droptop\DropdownBar"][!UpdateMeterGroup "SysTray" "Droptop\DropdownBar"][!UpdateMeterGroup "HL" "Droptop\DropdownBar"][!UpdateMeterGroup "NotificationBar" "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

Time-KazukiGames82___Update_Measure_0=
Time-KazukiGames82___Update_Measure_1=UpdateMeasure1M

Time-KazukiGames82___Update_Meter_0=
Time-KazukiGames82___Update_Meter_1=UpdateMeter1M

; ---------------------------------------
; --- TOPBAR

Time-KazukiGames82___Text_1=[Time-KazukiGames82_Measure]
Time-KazukiGames82___Text_0=

; ---------------------------------------
; --- FORMAT

Time-KazukiGames82___Format_Leading_Zero_0=#
Time-KazukiGames82___Format_Leading_Zero_1=

Time-KazukiGames82___Format_Time_A_0=I
Time-KazukiGames82___Format_Time_A_1=H

Time-KazukiGames82___Format_Time_B_0=%p
Time-KazukiGames82___Format_Time_B_1=

Time-KazukiGames82___Format_1=%[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]][#Time-KazukiGames82___Format_Time_A_[#*Time-KazukiGames82___Use_24_Hour*]]:%M [#Time-KazukiGames82___Format_Time_B_[#*Time-KazukiGames82___Use_24_Hour*]]
Time-KazukiGames82___Format_2=%a %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]][#Time-KazukiGames82___Format_Time_A_[#*Time-KazukiGames82___Use_24_Hour*]]:%M [#Time-KazukiGames82___Format_Time_B_[#*Time-KazukiGames82___Use_24_Hour*]]
Time-KazukiGames82___Format_3=%A %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]][#Time-KazukiGames82___Format_Time_A_[#*Time-KazukiGames82___Use_24_Hour*]]:%M [#Time-KazukiGames82___Format_Time_B_[#*Time-KazukiGames82___Use_24_Hour*]]
Time-KazukiGames82___Format_4=%B %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]]d  %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]][#Time-KazukiGames82___Format_Time_A_[#*Time-KazukiGames82___Use_24_Hour*]]:%M [#Time-KazukiGames82___Format_Time_B_[#*Time-KazukiGames82___Use_24_Hour*]]
Time-KazukiGames82___Format_5=%A %B %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]]d  %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]][#Time-KazukiGames82___Format_Time_A_[#*Time-KazukiGames82___Use_24_Hour*]]:%M [#Time-KazukiGames82___Format_Time_B_[#*Time-KazukiGames82___Use_24_Hour*]]
Time-KazukiGames82___Format_6=%a %b %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]]d  %[#Time-KazukiGames82___Format_Leading_Zero_[#*Time-KazukiGames82___Use_Leading_Zeros*]][#Time-KazukiGames82___Format_Time_A_[#*Time-KazukiGames82___Use_24_Hour*]]:%M [#Time-KazukiGames82___Format_Time_B_[#*Time-KazukiGames82___Use_24_Hour*]]
Time-KazukiGames82___Format_7=%d/%m/%y
Time-KazukiGames82___Format_8=%Y-%m-%d
Time-KazukiGames82___Format_9=#USER#
Time-KazukiGames82___Format_10=[#*Time-KazukiGames82___Custom_Time_Format*]
