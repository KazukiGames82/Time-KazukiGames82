[Variables]

MeasureNextEventUpComing_Parent_Substitute_0="[&*MeasureNextEventToday_Parent*]":"No upcoming events","(?siU)^(?(?=[#*Today*]:)[#*Today*]: (.*)<\/>)(.*)$":"\2","<\/>":"{/}","\\2":"No upcoming events"
MeasureNextEventUpComing_Parent_Substitute_1="<\/>":"{/}","":"No events"

MeasureNextEventUpcoming_Child_3_Substitute_0="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\4|\3","\\4\|":"","\\3":"","^\S.*\|\S.*$":"More Events..."
MeasureNextEventUpcoming_Child_3_Substitute_1="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\3","\\3":""

; -------------------------------------------------------------------------------

[MeasureNextEventToday_Parent]
Measure=String
String=#NextEvent#
RegExpSubstitute=1
Substitute="(?siU)^(?(?=#Today#:)#Today#: (.*)<\/>).*$":"\1","\\1":"No events today"
DynamicVariables=1
Group=Event
Disabled=#NotCurrentMonth#

[MeasureNextEventToday_Child_1]
Measure=String
String=[MeasureNextEventToday_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsToday 1][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\1","\\1":""
DynamicVariables=1
Group=Event
Disabled=#NotCurrentMonth#

[MeasureNextEventToday_Child_2]
Measure=String
String=[MeasureNextEventToday_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsToday ([#NumberOfEventsToday]+1)][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\2","\\2":""
DynamicVariables=1
Group=Event
Disabled=#NotCurrentMonth#

[MeasureNextEventToday_Child_3]
Measure=String
String=[MeasureNextEventToday_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsToday ([#NumberOfEventsToday]+1)][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatch2="More Events..."
IfMatchAction2=[!SetVariable ItemIsFolder5 "1"]
IfNotMatchAction2=[!SetVariable ItemIsFolder5 "0"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\4|\3","\\4\|":"","\\3":"","^\S.*\|\S.*$":"More Events..."
DynamicVariables=1
Group=Event
Disabled=#NotCurrentMonth#

; -------------------------------------------------------------------------------

[MeasureNextEventUpComing_Parent]
Measure=String
String=#NextEvent#
IfMatchMode=1
RegExpSubstitute=1
Substitute=[#MeasureNextEventUpComing_Parent_Substitute_[#NotCurrentMonth]]
DynamicVariables=1
Group=Event

[MeasureNextEventUpcoming_Child_1]
Measure=String
String=[MeasureNextEventUpcoming_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsUpcoming 1][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+2+([#NotCurrentMonth]=1?(-1):(3-[#NumberOfEventsToday])))][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\1","\\1":""
DynamicVariables=1
Group=Event | UpcomingEvents

[MeasureNextEventUpcoming_Child_2]
Measure=String
String=[MeasureNextEventUpcoming_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsUpcoming ([#NumberOfEventsUpcoming]+1)][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\2","\\2":""
DynamicVariables=1
Group=Event | UpcomingEvents

[MeasureNextEventUpcoming_Child_3]
Measure=String
String=[MeasureNextEventUpcoming_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsUpcoming ([#NumberOfEventsUpcoming]+1)][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatch2="More Events..."
IfMatchAction2=[!SetVariable ItemIsFolder9 "1"]
IfNotMatchAction2=[!SetVariable ItemIsFolder9 "0"]
IfMatchMode=1
RegExpSubstitute=1
Substitute=[#MeasureNextEventUpcoming_Child_3_Substitute_[#NotCurrentMonth]]
DynamicVariables=1
Group=Event | UpcomingEvents

[MeasureNextEventUpcoming_Child_4]
Measure=String
String=[MeasureNextEventUpcoming_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsUpcoming ([#NumberOfEventsUpcoming]+1)][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\4","\\4":""
DynamicVariables=1
Group=Event | UpcomingEvents
Disabled=((#NotCurrentMonth#-1)*-1)

[MeasureNextEventUpcoming_Child_5]
Measure=String
String=[MeasureNextEventUpcoming_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsUpcoming ([#NumberOfEventsUpcoming]+1)][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\5","\\5":""
DynamicVariables=1
Group=Event | UpcomingEvents
Disabled=((#NotCurrentMonth#-1)*-1)

[MeasureNextEventUpcoming_Child_6]
Measure=String
String=[MeasureNextEventUpcoming_Parent]
IfMatch=\S
IfMatchAction=[!SetVariable NumberOfEventsUpcoming ([#NumberOfEventsUpcoming]+1)][!SetVariable NumberOfEvents ([#NumberOfEvents]+1)][!SetVariable NumberOfEventsRaw ([#NumberOfEventsRaw]+1)][!SetVariable ItemText[#NumberOfEventsRaw] "[#CURRENTSECTION#]"]
IfMatchMode=1
RegExpSubstitute=1
Substitute="(?siU)^(.*)(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}(.*))(?(?={\/}.*){\/}.*)$":"\7|\6","\\7\|":"","\\6":"","^\S.*\|\S.*$":"More Events..."
DynamicVariables=1
Group=Event | UpcomingEvents
Disabled=((#NotCurrentMonth#-1)*-1)
