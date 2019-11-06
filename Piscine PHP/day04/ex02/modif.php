<?php
   if ($_POST['login'] && $_POST['oldpw'] && $_POST['newpw'] && $_POST['submit'] && $_POST['submit'] === "OK" &&file_exists('../private/passwd')) {
       $account = unserialize(file_get_contents('../private/passwd'));
       if ($account) {
           $exist = 0;
           foreach ($account as $key => $value) {
               if ($value['login'] === $_POST['login'] && $value['passwd'] === hash('whirlpool', $_POST['oldpw'])) {
                   $exist = 1;
                   $account[$key]['passwd'] =  hash('whirlpool', $_POST['newpw']);
               }
           }
           if ($exist) {
               file_put_contents('../private/passwd', serialize($account));
               echo "OK\n";
           } else {
               echo "ERROR\n";
           }
       } else {
           echo "ERROR\n";
       }
   } else {
       echo "ERROR\n";
   }
