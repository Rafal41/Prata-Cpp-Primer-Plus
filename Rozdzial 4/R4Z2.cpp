#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string imie, nazwisko;
    unsigned int wiek, ocena;

    cout << "Jak masz na imie? ";
    getline(cin, imie);
    cout << "Jak sie nazywasz? ";
    getline(cin, nazwisko);
    cout << "Na jaka ocene zaslsugujesz? ";
    cin >> ocena;    
    cout << "Ile masz lat? ";
    cin >> wiek;

    cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    cout << "Wiek: " << wiek << endl;

    return 0;
}

