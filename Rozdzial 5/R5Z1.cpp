#include <iostream>

int main(void)
{
    using std::cout;
    using std::cin;

    int liczba1, liczba2, suma = 0;

    cout << "Podaj pierwsza dowolna liczba calkowita: ";
    cin >> liczba1;
    cout << "Podaj druga dowolna liczba calkowita. Ta liczba musi byc wieksza od poprzedniej: ";
    cin >> liczba2;
    
    for (int i = liczba1; i <= liczba2; i++)
        suma += i;

    cout << "Suma podanych liczb to: " << suma;

    return 0;
}

