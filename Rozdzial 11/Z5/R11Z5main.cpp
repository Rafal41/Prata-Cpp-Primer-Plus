// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::endl;
#include "R11Z5.h"

int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7); // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);
    
    Stonewt sum = incognito + wolfe;
    Stonewt difference = wolfe - incognito;
    Stonewt mult = taft*incognito;

    cout << "incognito = " << incognito << endl;
    cout << "wolfe = " << wolfe << endl;
    cout << "taft = " << taft << endl;

    incognito.pounds_mode();
    wolfe.pounds_mode();
    taft.pounds_mode();
    cout << "incognito = " << incognito << endl;
    cout << "wolfe = " << wolfe << endl;
    cout << "taft = " << taft << endl;


    cout << "sum = " << sum << endl;
    cout << "diff = " << difference << endl;
    cout << "mutl = " << mult << endl;

    sum.pounds_mode();
    difference.pounds_mode();
    mult.pounds_mode();
    cout << "sum = " << sum << endl;
    cout << "diff = " << difference << endl;
    cout << "mutl = " << mult << endl;

    return 0;
}

