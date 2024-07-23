# Create Node 
$path = "C:\Users\KazukiGames82\Documents\Rainmeter\Skins\Droptop Community Apps\Apps\Time-KazukiGames82\Config\Custom.xml"
$year = "2024"
$month = "3"
$day = "1"
$anniversary = "true"
$repeat = "year"
$finish = "00/00/0000"
$desc = "Event Test"

$content ='<Event Day="$day" Year="$year" Finish="$finish" Anniversary="$anniversary" Repeat="$repeat">$desc</Event>'

$xml = [xml](Get-Content $path)
$newNode = [xml]@"
$content
"@
$xml.EventFile.Set[$month].AppendChild($xml.ImportNode($newNode.Event,$true)) |out-null
$xml.Save($path)
