#include <iostream>
#define SIZE 10

struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void zmien(pudlo * n);
void wyswietlwyniki(pudlo n);

int main(void)
{
    using namespace std;
    pudlo nr1 = { 
        "dhl",
        8.0,
        35.0,
        60.0,
        0.00
    };
    zmien(&nr1);
    wyswietlwyniki(nr1);
    

    return 0;
}
void wyswietlwyniki(pudlo n)
{
    using namespace std;
    cout << "producent szerokosc dlugosc objetosc" << endl;
    cout << n.producent << " " << n.wysokosc << " " << n.szerokosc << " " << n.dlugosc << " " << n.objetosc << endl;
}

void zmien(pudlo * n)
{
    n->objetosc = n->wysokosc * n->szerokosc * n->dlugosc;
}