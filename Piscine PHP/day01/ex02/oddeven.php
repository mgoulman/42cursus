#!/usr/bin/php
<?php

function check($str)
{
    $i = 0;
    if ($str[$i] == '-' || $str[$i] == '+')
        $i++;
    while ($str[$i] != NULL)
    {
        if ($str[$i] >= '0' && $str[$i] <= '9')
            return (1);
        else
            return (0);
            $i++;
    }
}

$str = fopen("php://stdin", "r");
while($str && !feof($str))
{
    echo "Entrez un nombre: ";
    $number = fgets($str);
    if($number)
    {
        $number = str_replace("\n", "", $number);
        if (check($number) == 1)
        {
            if(is_numeric($number))
            {
                if($number % 2 == 0)
                    echo "Le chiffre " . $number . " est Pair\n";
                else
                    echo "Le chiffre " . $number . " est Impair\n";
            }
            else
                echo "'" . $number . "' is not a number\n";
        }
        else
            echo "'" . $number . "' is not a number\n";
    }
}
echo "\n";
?>