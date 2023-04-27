#include "onejob.h"
#include "level.h"
#include "income.h"

OneJob::OneJob()
{

}

bool OneJob :: setJobAct(Income incomes){

    //jobNumber+1)*(-3)


    if(!sw){

        if( oneJobIncome.coins()==0 && ((incomes.coins()>= ((jobNumber+1)*3)) || jobNumber==0)){

            for(int num=0;num<=(level.level/10);num++)
                time--;

            sw=true;
            return true;

          //  click++;
            // income.checkChange(jobIncome());
            //   in.checkChange(jobIncome());
        }
        else if(oneJobIncome.coins()!=0)
        {
            sw=true;
            return true;
            //click++;
        }
    }
    else if(sw)
    {
        time--;
        return true;

        /*
        income.checkChange(jobIncome());
        if(time==0){
            time=10;
            income.checkChange(jobIncome());
            in.checkChange(10);
            //sw=false;
        }*/
    }
    else{
        return false;
    }
}

Income OneJob :: setActUp(Income cityIncome){

    if(cityIncome.checkChange((-1)*cityIncome.coinToIncreaseLevel(jobNumber,level))){

        clickUp=true;
        level.increaseLevel();
    }
    else{
        clickUp=false;
    }

    return cityIncome;
}

// //

int OneJob :: coinToIncreaseJobLevel(){

    return oneJobIncome.coinToIncreaseLevel(jobNumber,level);
}

int OneJob :: jobIncome(){

    return level.level*2*(jobNumber+1);
}

Level OneJob :: jobLevel(){

    return level;
}

void OneJob :: setNumber(int number){
    jobNumber = number;
}

bool OneJob :: effectiveClickUp(){
    return clickUp;
}
