#include <iostream>
#define SIZE 10

unsigned wpiszwyniki(int tab[]);
void wyswietlwyniki(int tab[], unsigned ilosc);
void oblsrednia(int tab[], unsigned ilosc);

int main(void)
{
    using namespace std;
    int wyniki[10];
    unsigned iloscwyn;
    iloscwyn = wpiszwyniki(wyniki);
    wyswietlwyniki(wyniki, iloscwyn);
    oblsrednia(wyniki, iloscwyn);
    return 0;
}

unsigned wpiszwyniki(int tab[])
{
    using namespace std;
    unsigned count = 0;
    cout << "Podaj wyniki (max 10, \"-1\" przerywa)" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "wynik " << i << ": ";
        cin >> tab[i];
        if (tab[i] < 0)
            break;  
        count++;
    }
    return count;
}

void wyswietlwyniki(int tab[], unsigned ilosc)
{
    using namespace std;
    if (ilosc > 0)
    {
        cout << "lista wynikow: ";
        for (int i =0; i < ilosc ; i++)
            cout << tab[i] << " ";
        cout << endl;
    }
}

void oblsrednia(int tab[], unsigned ilosc)
{
    using namespace std;
    if (ilosc > 0)
    {
        unsigned suma = 0;
        
        for (int i =0; i < ilosc ; i++)
            suma += tab[i];
        cout << "sredni wynik to: " << float(suma) / float(ilosc) ; 
    }
}