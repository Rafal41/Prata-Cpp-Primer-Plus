#include <iostream>
#define PROG1 5000
#define PROG2 15000
#define PROG3 35000
#define STAWKA1 0
#define STAWKA2 0.1
#define STAWKA3 0.15
#define STAWKA4 0.2
#define PODSTAWA1 (PROG1 * STAWKA1)
#define PODSTAWA2 (PODSTAWA1 + (PROG2 - PROG1) * STAWKA2)
#define PODSTAWA3 (PODSTAWA2 + (PROG3 - PROG2) * STAWKA3)
int main(void)
{
    using namespace std;
    
    long long zarobki;
    float suma = 0.0;
    cout << "Podaj ile zarabiasz twarpow, ja wylicze podatek" << endl;
    while ((cin >> zarobki) && zarobki > 0)
    {
        if (zarobki < PROG1)
            suma = PODSTAWA1;
        else if (zarobki < PROG2)
            suma = PODSTAWA1 + (zarobki - PROG1)* STAWKA2;
        else if (zarobki < PROG3)
            suma = PODSTAWA2 + (zarobki - PROG2)* STAWKA3;
        else  // zarobki > 35000
            suma = PODSTAWA3 + (zarobki - PROG3)* STAWKA4;

        cout << "Lacznie masz do zaplaty podatek o wysokosci: " << suma << endl;
        cout << "Podaj ile zarabiasz twarpow, ja wylicze podatek" << endl;
    }
    
    
    return 0;
}