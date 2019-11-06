#!/usr/bin/php
<?PHP
if ($argc > 1)
{
   $string = trim($argv[1]);
   $string = preg_replace('/ +/', ' ',$string);

    $tab = explode(" ", $string);
    print_r($tab);
    $nb_word = count($tab);

    $i = 1;
    while ($i < $nb_word)
        echo $tab[$i++]." ";
    echo $tab[0]."\n";
}
?>