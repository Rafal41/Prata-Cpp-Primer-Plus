#include <iostream>
#include "R10Z7.h"

int main(void)
{
    Plorg ob1;
    Plorg ob2("Bies", 100);
    ob1.Showplorg();
    ob2.Showplorg();
    ob2.Setcoef(25);
    ob2.Showplorg();

    return 0;
}