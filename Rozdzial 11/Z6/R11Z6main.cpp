// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "R11Z6.h"

int main()
{
    Stonewt tab[6] = {Stonewt(200), Stonewt(100), Stonewt(300)};
    double temp;

    for (int i = 3; i < 6; i++)
    {
        cout << "podaj wage w funtach: ";
        cin >> temp;
        tab[i]= Stonewt(temp);
    }

    for (int i = 0; i < 6; i++)
        tab[i].show_stn();
    for (int i = 0; i < 6; i++)
        tab[i].show_lbs();


    int idxmax = 0, idxmin = 0;
    Stonewt max = tab[0];
    Stonewt min = tab[0];
    Stonewt comp = Stonewt(11,0);
    unsigned counter = 0;

    for (int i = 0; i < 6; i++)
    {
        if (tab[i] > max)
            idxmax = i;
        if (tab[i] < min)
            idxmin = i;
        if (tab[i] >= comp)  
            counter++;
    }
    
    cout << "Najwieksza wartosc to wartosc nr:  " << idxmax << endl;
    cout << "Najmniejsza wartosc to wartosc nr:  " << idxmin << endl;
    cout << "Liczba elementow ktore o wartosci wiekszej lub rownej 11 kamieniom to: " << counter << endl;
    
    return 0;
}

