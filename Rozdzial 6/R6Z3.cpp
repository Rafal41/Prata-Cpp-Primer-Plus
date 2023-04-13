#include <iostream>

void pokaz_menu(void);

int main(void)
{
    using namespace std;
    char ch;
    pokaz_menu();
    cout << "Prosze podac litere r, p, d lub g: ";
    
    while ((ch = cin.get()) != 'r' && ch != 'p' && ch != 'd' && ch != 'g')
    {
        if (ch != '\n')
            cout << "Prosze podac litere r, p, d lub g: ";
    }
    switch (ch)
    {
        case 'r': cout << "Krowa jest roslinozerca"; break;
        case 'p': cout << "Szopen byl pianista"; break;
        case 'd': cout << "Klon jest drzewem"; break;
        case 'g': cout << "CS GO to moja ulubiona gra"; break;
    }

    return 0;
}

void pokaz_menu(void)
{   
    using namespace std;
    cout << "r) roslinozerca    p) pianista" << endl;
    cout << "d) drzewo          g) gra" << endl;
}

