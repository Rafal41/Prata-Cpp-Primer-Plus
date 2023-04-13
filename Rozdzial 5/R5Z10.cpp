#include <iostream>
#include <string>
#include <cstring>
int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    unsigned int ilosc = 0;
    unsigned int gwiazdki = 1;

    cout << "Podaj liczbe wierszy: ";
    cin >> ilosc;
   
    for (int i = 0; i < ilosc ; i++)
    {
        for (int j = 0; j < (ilosc - gwiazdki); j++)
            cout << ".";
        for (int j = 0; j < gwiazdki; j++)
            cout << "*";
        cout << endl;
        gwiazdki++;
    }

    return 0;
}

