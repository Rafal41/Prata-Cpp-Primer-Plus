#include <iostream>
#include <cstring>
#define SIZE 5

template <typename T>
T max5(const T * n);

int main(void)
{
    using namespace std;
    int tab[SIZE];
    double tabdouble[SIZE];
    cout << "Podaj 5 wartosci typu int: ";
    for (int i = 0; i < SIZE; i++)
        cin >> tab[i];
    cout << "Wartosc maksymalna ze zbioru to: " << max5(tab) << endl;

    cout << "Podaj 5 wartosci typu double: ";
    for (int i = 0; i < SIZE; i++)
        cin >> tabdouble[i];
    cout << "Wartosc maksymalna ze zbioru to: " << max5(tabdouble) << endl;


    return 0;
}


template <typename T>
T max5(const T * n)
{
    T max = n[0];
    for (int i = 1; i < SIZE; i++)
        max = n[i] > max? n[i]: max;
return max;
}