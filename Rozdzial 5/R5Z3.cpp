#include <iostream>

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    int liczba, suma = 0;

    cout << "Podaj pierwsza dowolna liczba calkowita (Liczbna 0 konczy): ";
    cin >> liczba;

    while (liczba != 0)
    {   
        suma += liczba;
        cout << "Suma podanych do tej chwili liczb to: " << suma << endl;
        cout << "Podaj następną liczba calkowita. (Liczbna 0 konczy): ";
        cin >> liczba;
    }
    
    cout << "Suma wszystkich liczb to: " << suma << endl;

    return 0;
}

