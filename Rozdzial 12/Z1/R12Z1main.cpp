#include <iostream>
#include <cstring>
#include "R12Z1.h"

int main(void)
{
    Cow ob1;
    Cow ob2("laciata", "jedzenie", 500.00);
    // ob1.ShowCow();
    ob2.ShowCow();

    Cow ob3(ob2);
    ob3.ShowCow();

    ob1 = ob2;
    ob1.ShowCow();

    return 0;
}