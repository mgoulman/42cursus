<?php
    function ft_is_sort($str)
    {
        $nrm = $str;
        $rev = $str;
        sort($nrm);
        rsort($rev);
        if ($str == $nrm || $str == $rev)
            return (TRUE);
        else
            return (FALSE);
    }
?>