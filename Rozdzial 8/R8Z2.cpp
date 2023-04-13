#include <iostream>
#include <cstring>

struct batonik {
    char name[40];
    double waga;
    int kalorie;
};

void ustaw(batonik & typ, const char * str = "Millenium Munch", const double x = 2.85, const int y = 350);
void pokaz(const batonik & typ);
int main(void)
{
    batonik pierwszy;
    char str[20] = "Mars";
    double wag = 42.5;
    int kal = 200;
    
    ustaw(pierwszy);
    pokaz(pierwszy);
    ustaw(pierwszy, str, wag, kal);
    pokaz(pierwszy);

    return 0;
}

void ustaw(batonik & typ, const char * str, const double x, const int y)
{
    int m = strlen(str);
    strncpy(typ.name, str ,m);
    typ.name[m]= '\0';
    typ.waga = x;
    typ.kalorie = y;
}

void pokaz(const batonik & typ)
{
    using namespace std;
    cout << "nazwa: " << typ.name << endl;
    cout << "waga: " << typ.waga << endl;
    cout << "ilosc kalorii: " << typ.kalorie << endl;
}