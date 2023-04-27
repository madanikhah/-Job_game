#ifndef INCOME_H
#define INCOME_H

#include "level.h"

class Income
{
public:
    Income();

    bool checkChange(int);
    int coins();
    int coinToIncreaseLevel(int, Level);

private:
  //  void decreaseCoin(int);
   // void increaseCoin(int);
    int coin=0;
};

#endif // INCOME_H
