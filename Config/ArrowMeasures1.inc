[LuaHome]
Measure=Plugin
Plugin=HotKey
HotKey=ENTER
KeyDownAction=#HideItems#[!SetVariable ItemIsFolder5 "0"][!SetVariable ItemIsFolder9 "0"][!SetVariable NumberOfEvents "0"][!SetVariable NumberOfEventsToday "0"][!CommandMeasure Lua Move()][!UpdateMeasure Lua][!SetVariable NumberOfEventsRaw "(5+([#NotCurrentMonth]=1?4:0))"][!UpdateMeasureGroup Event][!UpdateMeter *][!Redraw]
UpdateDivider=-1

[LuaLeft]
Measure=Plugin
Plugin=HotKey
HotKey=LEFT
KeyDownAction=#HideItems#[!SetVariable ItemIsFolder5 "0"][!SetVariable ItemIsFolder9 "0"][!SetVariable NumberOfEvents "0"][!SetVariable NumberOfEventsToday "0"][!CommandMeasure Lua Move(-1)][!UpdateMeasure Lua][!SetVariable NumberOfEventsRaw "(5+([#NotCurrentMonth]=1?4:0))"][!UpdateMeasureGroup Event][!UpdateMeter *][!Redraw]
UpdateDivider=-1

[LuaRight]
Measure=Plugin
Plugin=HotKey
HotKey=RIGHT
KeyDownAction=#HideItems#[!SetVariable ItemIsFolder5 "0"][!SetVariable ItemIsFolder9 "0"][!SetVariable NumberOfEvents "0"][!SetVariable NumberOfEventsToday "0"][!CommandMeasure Lua Move(1)][!UpdateMeasure Lua][!SetVariable NumberOfEventsRaw "(5+([#NotCurrentMonth]=1?4:0))"][!UpdateMeasureGroup Event][!UpdateMeter *][!Redraw]
UpdateDivider=-1

[LuaUp]
Measure=Plugin
Plugin=HotKey
HotKey=UP
KeyDownAction=#HideItems#[!SetVariable ItemIsFolder5 "0"][!SetVariable ItemIsFolder9 "0"][!SetVariable NumberOfEvents "0"][!SetVariable NumberOfEventsToday "0"][!CommandMeasure Lua Move(12)][!UpdateMeasure Lua][!SetVariable NumberOfEventsRaw "(5+([#NotCurrentMonth]=1?4:0))"][!UpdateMeasureGroup Event][!UpdateMeter *][!Redraw]
UpdateDivider=-1

[LuaDown]
Measure=Plugin
Plugin=HotKey
HotKey=Down
KeyDownAction=#HideItems#[!SetVariable ItemIsFolder5 "0"][!SetVariable ItemIsFolder9 "0"][!SetVariable NumberOfEvents "0"][!SetVariable NumberOfEventsToday "0"][!CommandMeasure Lua Move(-12)][!UpdateMeasure Lua][!SetVariable NumberOfEventsRaw "(5+([#NotCurrentMonth]=1?4:0))"][!UpdateMeasureGroup Event][!UpdateMeter *][!Redraw]
UpdateDivider=-1
