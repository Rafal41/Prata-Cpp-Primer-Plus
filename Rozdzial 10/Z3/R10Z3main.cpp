#include <iostream>
#include "R10Z3.h"

int main(void)
{
    Golf person1;
    Golf person2 = Golf("Nowak", 20);

    person1.Showgolf();
    person2.Showgolf();

    while (!person1.Setgolf())
        continue;
    person1.Showgolf();
   
    return 0;
}