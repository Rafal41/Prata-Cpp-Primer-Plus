#include <iostream>

const int Strsize = 40;
const int Rozmiar = 5;

struct zpdw {
    char imie[Strsize];
    char stanowisko[Strsize];
    char pseudozpdw[Strsize];
    int preferencje;
};

void pokaz_menu(void);
void imiona(zpdw tab[]);
void stanowiska(zpdw tab[]);
void pseudonimy(zpdw tab[]);
void preferencje(zpdw tab[]);
int main(void)
{
    using namespace std;
    


    zpdw tab[Rozmiar] = {
        {"Rafal Nowak", "Mlodszy Programista", "Rafcio", 0},
        {"Tomasz Hajnos", "Kierownik", "Tadek", 1},
        {"Lukasz Hybel", "Administrator sieci", "Pientaszek", 2},
        {"Piotr Falecki", "Starszy Programista", "Pjoter", 0},
        {"Damian Zarotynski", "Mlodszy Programista", "Jubi", 2},
    };

    char ch;

    cout << "Zakon programistow dobrej woli" << endl;
    pokaz_menu();
    cout << "Wybierz jedna z opcji: ";
    
    while ((ch = cin.get()) != 'q')
    {
        if (ch <'a' || ch >'d')
        {   
            if (ch == '\n')
                continue;
            cout << "Prosze podac poprawna litere: ";
        }
        else
        {
            switch (ch)
            {
                case 'a': imiona(tab); break;
                case 'b': stanowiska(tab); break;
                case 'c': pseudonimy(tab); break;
                case 'd': preferencje(tab); break;
            }
            cin.get();                                          //pobiera enter
            cout << endl;
            pokaz_menu();
            cout << "Wybierz jedna z opcji: ";
        }
    }
    return 0;
}

void pokaz_menu(void)
{   
    using namespace std;
    cout << "a) lista wg imion          b) lista wg stanowisk" << endl;
    cout << "c) lista wg pseudonimow    d) lista wg preferencji" << endl;
    cout << "q) koniec" << endl;
}

void imiona(zpdw tab[])
{
    for (int i = 0; i < Rozmiar; i++)
        std::cout << tab[i].imie << std::endl;
}

void stanowiska(zpdw tab[])
{
    for (int i = 0; i < Rozmiar; i++)
        std::cout << tab[i].stanowisko << std::endl;
}

void pseudonimy(zpdw tab[])
{
    for (int i = 0; i < Rozmiar; i++)
        std::cout << tab[i].pseudozpdw << std::endl;
}

void preferencje(zpdw tab[])
{
    for (int i = 0; i < Rozmiar; i++)
    {
        if (tab[i].preferencje == 0)
            std::cout << tab[i].imie << std::endl;
        else if (tab[i].preferencje == 1)
            std::cout << tab[i].stanowisko << std::endl;
        else if (tab[i].preferencje == 2)
            std::cout << tab[i].pseudozpdw << std::endl;
    }
        
}
