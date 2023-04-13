#include <iostream>
#include <cstring>
using namespace std;
#include "R13Z2.h" 

// class Cd methods
Cd::Cd()
{
    performers = new char[5];
    label = new char[5];
    strcpy(performers, "brak");
    strcpy(label, "brak");
    selections = 0;
    playtime = 0;
}

Cd::Cd(const char * s1, const char * s2, const int n, const double x)
{
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;
    
    delete [] performers;
    delete [] label;

    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
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
    maincomp = new char[5];
    strcpy(maincomp, "brak");
}

Classic::Classic(const char * comp, const char * s1, const char * s2, const int n, const double x) : Cd(s1, s2, n, x)
{
    maincomp = new char[strlen(comp) + 1];
    strcpy(maincomp, comp);
}

Classic::Classic(const Classic & d) : Cd(d)
{
    maincomp = new char[strlen(d.maincomp) + 1];
    strcpy(maincomp, d.maincomp);
}

Classic & Classic::operator=(const Classic & d)
{
    if (this == &d)
        return *this;
    
    Cd::operator=(d);

    delete [] maincomp;
    maincomp = new char[strlen(d.maincomp) + 1];
    strcpy(maincomp, d.maincomp);

    return *this;
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
