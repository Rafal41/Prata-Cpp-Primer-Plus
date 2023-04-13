#include <iostream>
#include <cstring>
#define ROZMIAR 40
int main(void)
{
    using namespace std;
    char imie [ROZMIAR];
    char nazwisko[ROZMIAR];
    char dane[2*ROZMIAR+3];

    cout << "Podaj imie: ";
    cin.getline(imie,ROZMIAR);
    cout << "Podaj nazwisko: ";
    cin.getline(nazwisko,ROZMIAR);

    strncpy(dane,nazwisko,ROZMIAR);
    strncat(dane,", ", 3);
    strncat(dane,imie, ROZMIAR);
    cout << "Oto informacje zestawione w jeden napis: " << dane << endl;


    return 0;
}

