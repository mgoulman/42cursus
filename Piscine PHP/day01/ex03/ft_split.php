<?php
    function ft_split($str)
    {
        $mot = explode(" ", $str);
        $arr = array_filter($mot, "strlen");
        sort($arr);
        
        if(!count($arr))
            return(NULL);
        return($arr);
    }
?>