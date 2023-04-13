#include <iostream>
#include <cstring>
#include "R10Z2.h"

Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    // strcpy(fname, fn);
    int i;
    for (i = 0; i < strlen(fn); i++)
        fname[i] = fn[i];
    fname[i] = '\0';
}

void Person::Show() const
{
    using std::cout;
    using std::endl;
    cout << "imie: " << fname << "  nazwisko: " << lname << endl;
}

void Person::FormalShow() const
{
    using std::cout;
    using std::endl;
    cout << "nazwisko: " << lname << "  imie: " << fname <<  endl;
}
