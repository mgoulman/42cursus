#!/usr/bin/php
<?php

function ft_split($str)
{
	$ss = explode(" ", $str);
	$result = array_filter($ss, 'strlen');
	sort($result);
	return ($result);
}
function cmps($s1, $s2)
{
	$code = "abcdefhijklmnopqrstuvwxyz0123456789!\"#$%&\'()*+,-./_";
	$lows1= strtolower($s1);
	$lows2= strtolower($s2);
	$len1 = 0;
	$len2 = 0;
	$i = -1;
	while ($s1[$len1] != NULL)
		$len1++;
	while ($s2[$len2] != NULL)
		$len2++;
	while (++$i < $len1 || $i < $len2 )
	{
		if ($lows1[$i] == NULL && $lows2[$i] != NULL)
			return (0);
		if ($lows2[$i] == NULL && $lows1[$i] != NULL)
			return (1);
		if (strpos($code, $lows1[$i]) < strpos($code, $lows2[$i]))
		{
			return 0;
		}
		else if (strpos($code, $lows1[$i]) > strpos($code, $lows2[$i]))
		{
			return 1;
		}
	}
}

$arr = $argv;
array_shift($arr);
$str = join(" ", $arr);
$arr = ft_split($str);
usort($arr, cmps);
$index = -1;
while ($arr[++$index] != NULL)
{
	echo("$arr[$index]\n");
}
?>
