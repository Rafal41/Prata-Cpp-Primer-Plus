#include <iostream>
#define SIZE 10

unsigned fill_array(double tab[], int size);
void show_array(double tab[], unsigned ilosc);
void reverse_array(double tab[], unsigned ilosc);

int main(void)
{
    using namespace std;
    double wyniki[10];
    unsigned iloscwyn;
    iloscwyn = fill_array(wyniki, SIZE);
    show_array(wyniki, iloscwyn);
    reverse_array(wyniki, iloscwyn);
    show_array(wyniki, iloscwyn);
    return 0;
}

unsigned fill_array(double tab[], int size)
{
    using namespace std;
    unsigned count = 0;
    cout << "Podaj liczby zmiennoprzecinkowe (max 10, q przerywa)" << endl;
    unsigned int i = 0;
    while (i < SIZE && cin >> tab[i++])
        count++;

    // for (int i = 0; i < size; i++)
    // {
    //     if(!(cin >> tab[i]))
    //         break;  
    //     count++;
    // }

    
    return count;
}

void show_array(double tab[], unsigned ilosc)
{
    using namespace std;
    if (ilosc > 0)
    {
        cout << "lista podanych liczb: ";
        for (int i =0; i < ilosc ; i++)
            cout << tab[i] << " ";
        cout << endl;
    }
}

void reverse_array(double tab[], unsigned ilosc)
{
    if (ilosc > 0)
    {
        double temp;
        
        for (int i = 0; i < ilosc/2 ; i++)
            {
                temp = tab[i];
                tab[i]= tab[ilosc-1-i];
                tab[ilosc-1-i] = temp;
            }
    }
}