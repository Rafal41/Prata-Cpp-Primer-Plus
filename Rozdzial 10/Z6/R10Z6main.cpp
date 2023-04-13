#include <iostream>
#include "R10Z6.h"

int main(void)
{
    Move ob1;
    Move ob2(2.5,3.5);

    ob1.Showmove();
    ob2.Showmove();

    ob1.Reset(3.33, 2.13);
    ob2.Reset();

    ob1.Showmove();
    ob2.Showmove();

    Move ob3(5.55, 2.22);

    Move nwobj = ob1.Add(ob3);
    nwobj.Showmove();

    return 0;
}