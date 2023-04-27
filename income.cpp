#include "income.h"
#include "level.h"


Income::Income()
{

}

int Income :: coins(){
    return coin;
}

bool Income ::checkChange(int change){

    if((coin+change)>0){
        coin+=change;
        return true;
    }
    else{
        return false;
    }
}

int Income :: coinToIncreaseLevel(int number, Level level){

    return (number+1)*(3)*level.level;
}

   /*
    if(change<=0){

         decreaseCoin(change);

        if((coin+change)>0){
            decreaseCoin(change);
        }
        else{
            return false;
        }
    }
    else{
        increaseCoin(change);
    }
    return true;
}

void Income ::decreaseCoin(int decrease){
    coin-=decrease;
}

void Income :: increaseCoin(int increase){
    coin+=increase;
}*/
