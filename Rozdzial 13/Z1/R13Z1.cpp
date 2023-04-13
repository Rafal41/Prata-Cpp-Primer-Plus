#include <iostream>
#include <cstring>
using namespace std;
#include "R13Z1.h" 

// class Cd methods
Cd::Cd()
{
    strcpy(performers, "brak");
    strcpy(label, "brak");
    selections = 0;
    playtime = 0;
}

Cd::Cd(const char * s1, const char * s2, const int n, const double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

void Cd::Report() const
{
    cout << endl;
    cout << "wykonawca: " << performers << endl;
    cout << "wydawca: " << label << endl;
    cout << "liczba utworow: " << selections << endl;
    cout << "dlugosc plyty w minutach: " << playtime << endl;
}

// class Classic methods
Classic::Classic() : Cd()
{
    strcpy(maincomp, "brak");
}

Classic::Classic(const char * comp, const char * s1, const char * s2, const int n, const double x) : Cd(s1, s2, n, x)
{
    strcpy(maincomp, comp);
}

// Classic::Classic(char * comp, const Cd & disk) : Cd(disk) 
// {
//     strcpy(maincomp, comp);
// }

void Classic::Report() const
{
    Cd::Report();
    cout << "glowny utwor: " << maincomp << endl;
}
