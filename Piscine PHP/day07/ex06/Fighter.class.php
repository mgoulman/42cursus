<?php
    abstract class Fighter{
        public $arr; 
        public abstract function fight();
        function __construct($type){
            $this->arr = $type;
        }
    }
?>