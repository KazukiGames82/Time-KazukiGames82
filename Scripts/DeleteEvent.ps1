# Delete Node
$path = "C:\Users\KazukiGames82\Documents\Rainmeter\Skins\Droptop Community Apps\Apps\Time-KazukiGames82\Config\Custom.xml"
$event = "Test Month 4"
$xml = [xml](Get-Content $path)
$node = $xml.SelectSingleNode("//.//Event[.='$event']")
$node.ParentNode.RemoveChild($node) | Out-Null
$xml.Save($path)