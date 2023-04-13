#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    int length = strlen(name);
    strncpy(g.fullname, name, length);
    handicap(g,hc);
}

int setgolf(golf & g)
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
        setgolf(g,tempname, hndc);

        return 1;
    }   
}
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    using std::cout;
    using std::endl;

    cout << "name = " << g.fullname << " handicap = " << g.handicap << endl;

}


