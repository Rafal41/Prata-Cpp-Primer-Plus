#include <iostream>
#include "sales.h"

int main(void)
{
    double temp[SALES::QUARTERS] = { 250.1, 213.5, 42.3, 333.2};
    // for (int i = 0; i < SALES::QUARTERS; i++)
    // {
    //     std::cout << "Podaj sprzedaz za kwartal " << i+1 << ": ";
    //     std::cin >> temp[i];
    // }

    SALES::Sales ob1 = SALES::Sales(temp);
    SALES::Sales ob2;
    ob1.Showsales();
    ob2.Showsales();
    
    ob2.Setsales();
    ob2.Showsales();
   
    
    return 0;
}