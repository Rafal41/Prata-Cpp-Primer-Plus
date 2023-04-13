#include <iostream>
#include "R10Z1.h"

int main(void)
{
    using namespace std;
    int tab[Size]={2,3, 1,2,5,4, 2,2,2,2, 8,1,2,3, 0,0,0,0, 3,2,6,6, 6,6,6,6};
    // Bankacc person = Bankacc("Nowak",tab, 1502.23);
    Bankacc person = Bankacc("Nowak");
    person.show();
    person.acquire(250);
    person.show();
    person.emit(322);
    person.show();

    return 0;
}
