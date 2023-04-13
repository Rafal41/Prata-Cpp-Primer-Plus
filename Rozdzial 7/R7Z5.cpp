#include <iostream>

long long factorial(unsigned n);
int main(void)
{
    using namespace std;
    unsigned liczba;
    cout <<"podaj liczbe a ja oblicze silnie\n";
    while (cin >> liczba)
    {
        cout << "silnia danej liczby to: " << factorial(liczba);
        cout <<"\npodaj nastepna liczbe (q konczy)\n";
    }
        
    return 0;
}

long long factorial(unsigned n)
{
    long long result = 1;
    if (n > 0)
        result = n*factorial(n-1);
    return result;
}