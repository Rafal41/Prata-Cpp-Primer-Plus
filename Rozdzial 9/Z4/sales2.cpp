#include <iostream>
#include "sales.h"

int main(void)
{
    SALES::Sales ob1;
    SALES::Sales ob2;
    double temp[SALES::QUARTERS];
    for (int i = 0; i < SALES::QUARTERS; i++)
    {
        std::cout << "Podaj sprzedaz za kwartal " << i+1 << ": ";
        std::cin >> temp[i];
    }
    
    SALES::setSales(ob1, temp, SALES::QUARTERS);
    SALES::showSales(ob1);
    SALES::setSales(ob2);
    SALES::showSales(ob2);
   
    
    return 0;
}