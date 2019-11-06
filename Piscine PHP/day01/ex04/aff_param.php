#!/usr/bin/php
<?php
    $argc = 1;
    foreach ($argv as $elem)
    {
         if ($argc++ > 1)
            echo "$elem"."\n";
    }
?>