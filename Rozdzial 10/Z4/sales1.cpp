#include <iostream>
#include "sales.h"
namespace SALES
{
    Sales::Sales()
    {
        for (int i = 0; i < QUARTERS ; i++)
            sales[i] = 0.0;
        average = 0.0;
        min = 0.0;
        max = 0.0;
    }

    Sales::Sales(const double ar[])
    {
        double total = 0;
        min = ar[0];
        max = ar[0];

        for (int i = 0; i < QUARTERS ; i++)
        {   
            sales[i] = ar[i];
            total += sales[i];
            min = sales[i] < min? sales[i] : min;
            max = sales[i] > max? sales[i] : max;
        }
        average = total/QUARTERS;
    }

    Sales::~Sales() {}

    void Sales::Setsales()
    {
        double temp[SALES::QUARTERS];
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Podaj sprzedaz za kwartal " << i+1 << ": ";
            std::cin >> temp[i];
        }
        *this = Sales(temp);
    }

    void Sales::Showsales() const
    {
        std::cout << "Kwartal       Srednia      Max     Min" << std::endl;
        for (int i = 0; i < QUARTERS ; i++)
            std::cout << sales[i] << std::endl;
        std::cout << "    " << average << "    " << max << "    " << min << std::endl;
    }
}