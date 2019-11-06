<?php
    class Jaime extends Lannister {
        public function sleepWith($person) {
            if ($person instanceof Tyrion) {
                print("Not even if I'm drunk !" . PHP_EOL);
            } else if ($person instanceof Sansa) {
                print("Let's do this." . PHP_EOL);
            }  else if ($person instanceof Cersei) {
                print("With pleasure, but only in a tower in Winterfell, then." . PHP_EOL);
            }
        }
    }
?>