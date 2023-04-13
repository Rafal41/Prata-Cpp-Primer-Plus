#include <iostream>
#include <cstring>
#include "R10Z3.h"

Golf::Golf(const char * fullname, const int handicap)
{
    int length = strlen(fullname);
    strncpy(m_fullname, fullname, length);
    if (handicap < 0)
    {
        std::cout << "handicap nie moze byc ujemny. ustawiam saldo na 0\n";
        m_handicap = 0;
    }
    else
        m_handicap = handicap;
}

Golf::~Golf() {}

int Golf::Setgolf()
{
    using std::cout;
    using std::cin;
    using std::endl;

    char tempname[Len];
    int hndc;

    cout << "podaj imie i nazwisko gracza: (pusty wiersz przerywa) ";
    cin.getline(tempname, Len-1);
    if (strcmp(tempname, "\0") == 0)
        return 0;
    else
    {
        tempname[Len] = '\0';
        
        cout << "podaj handicap: ";
        cin >> hndc;
        *this = Golf(tempname, hndc);

        return 1;
    }   
}

void Golf::Showgolf() const
{
    using std::cout;
    using std::endl;

    cout << "name = " << m_fullname << " handicap = " << m_handicap << endl;
}


