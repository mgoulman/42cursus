<?php
    class  UnholyFactory{
        public $tab = array('foot soldier' => 0,
                            'assassin' => 0, 
                            'archer' => 0);
        function absorb($fighter){
            if ( $fighter instanceof Fighter){
                if ($fighter->arr == 'foot soldier' && $this->tab['foot soldier'] == 0){
                    print("(Factory absorbed a fighter of type foot soldier)". PHP_EOL);
                    $this->tab['foot soldier'] = 1;
                }else if($fighter->arr == 'foot soldier' && $this->tab['foot soldier'] == 1){
                    print("(Factory already absorbed a fighter of type foot soldier)" . PHP_EOL);
                }
                if ($fighter->arr == 'assassin' && $this->tab['assassin'] == 0){
                    print("(Factory absorbed a fighter of type assassin)". PHP_EOL);
                    $this->tab['assassin'] = 1;
                }else if($fighter->arr == 'assassin' && $this->tab['assassin'] == 1){
                    print("(Factory already absorbed a fighter of type assassin)" . PHP_EOL);
                }
                if ($fighter->arr == 'archer' && $this->tab['archer'] == 0){
                    print("(Factory absorbed a fighter of type archer)". PHP_EOL);
                    $this->tab['archer'] = 1;
                }else if($fighter->arr == 'archer' && $this->tab['archer'] == 1){
                    print("(Factory already absorbed a fighter of type archer)" . PHP_EOL);
                }
            }else{
                print("(Factory can't absorb this, it's not a fighter)" . PHP_EOL);
            }
        }
        function fabricate($name){
            if ($name == 'foot soldier'){
                print("(Factory fabricates a fighter of type $name)".PHP_EOL);
                return(new Footsoldier());
            }else if ($name == 'assassin'){
                print("(Factory fabricates a fighter of type $name)".PHP_EOL);
                return(new Assassin());
            }else if ($name == 'archer'){
                print("(Factory fabricates a fighter of type $name)".PHP_EOL);
                return(new Archer());
            }else{
                print("(Factory hasn't absorbed any fighter of type $name)".PHP_EOL);
            }
        }
    }
?>