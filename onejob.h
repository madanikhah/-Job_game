#ifndef ONEJOB_H
#define ONEJOB_H
#include "income.h"
#include "level.h"

class OneJob
{
public:
    OneJob();

    bool sw=false;
    int time=10;
   // int jobLevel();
    int jobIncome();
    bool setJobAct(Income); // //
    Income setActUp(Income);
    int coinToIncreaseJobLevel();
    Level jobLevel();
    void setNumber(int);
    Income oneJobIncome;
    bool effectiveClickUp();

private:
    Level level;
    int jobNumber;
    bool clickUp=false;
};

#endif // ONEJOB_H
