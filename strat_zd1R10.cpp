#include "strat_zd1R10.h"
#include <cmath>
#include <ctime>
#include <cstdlib>
strat_zd1R10::strat_zd1R10()
{
    //ctor
}

bool::strat_zd1R10::play(bool other_p, bool p, int round)
{
    if(round > 0)
    {
        if ((other_p == 1) && (p == 1))
        {
            int x = rand() % 1000;
            if(x <= 778)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 1) && (p == 0))
        {
            int x = rand() % 100;
            if(x <= 3)
            {
                return true;
            }
            else return false;
        }
        else if((other_p == 0) && (p == 1))
        {
            int x = rand() % 100;
            if(x <= 50)
            {
                return true;
            }
            else (x>= 50);
            {
                return false;
            }
        }
        else if((other_p == 0) && (p == 0))
        {
            return false;
        }
    }
    else return true;
}
