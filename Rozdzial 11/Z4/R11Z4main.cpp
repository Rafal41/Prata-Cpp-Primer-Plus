//usetime3.cpp -- using the fourth draft of the Time class
// compile usetime3.cpp and mytime3.cpp together
#include <iostream>
#include "R11Z4.h"

int main()
{
    using std::cout;
    using std::endl;

    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    
    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca; // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = 4.0 * aida; // member operator*()
    cout << "4 * Aida: " << temp << endl;
    cout << "2 * Tosca: " << 2.0 * tosca << endl;
    temp = aida - tosca; // operator+()
    cout << "Aida - Tosca: " << temp << endl;
    
    return 0;
}