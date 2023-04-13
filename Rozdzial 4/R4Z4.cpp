#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string imie, nazwisko, dane;

    cout << "Podaj imie: ";
    getline(cin, imie);
    cout << "Podaj nazwisko: ";
    getline(cin, nazwisko);

    dane = nazwisko;
    dane += ", ";
    dane += imie;
    cout << "Oto informacje zestawione w jeden napis: " << dane << endl;


    return 0;
}

