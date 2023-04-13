#include <iostream>
#include "sales.h"
namespace SALES
{
  
    void setSales(Sales & s, const double ar[], int n)
    {
        double total = 0;
        double min = ar[0];
        double max = ar[0];

        for (int i = 0; i < n ; i++)
        {   
            s.sales[i] = ar[i];
            total += s.sales[i];
            min = s.sales[i] < min? s.sales[i] : min;
            max = s.sales[i] > max? s.sales[i] : max;
        }
         
        s.average = total/QUARTERS;
        s.max = max;
        s.min = min;

    }

    void setSales(Sales & s)
    {
        double total = 0;
        for (int i = 0; i < QUARTERS ; i++)
        {
            std::cout << "Podaj sprzedaz za kwartal " << i+1 << ": ";
            std::cin >> s.sales[i];
            total += s.sales[i];
        }

        double min = s.sales[0];
        double max = s.sales[0];
        for (int i = 0; i < QUARTERS ; i++)
        {
            min = s.sales[i] < min? s.sales[i] : min;
            max = s.sales[i] > max? s.sales[i] : max;
        }

        s.average = total/QUARTERS;
        s.max = max;
        s.min = min;

    }

    void showSales(const Sales & s)
    {
        std::cout << "Kwartal       Srednia      Max     Min" << std::endl;
        for (int i = 0; i < QUARTERS ; i++)
            std::cout << s.sales[i] << std::endl;
        std::cout << "    " << s.average << "    " << s.max << "    " << s.min << std::endl;
    }
}