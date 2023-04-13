#include <iostream>
#include <cstring>
#include "R12Z1.h"

using namespace std;

Cow::Cow()
{
    name[0] = '\0';
    hobby = nullptr;
    weight = 0;

}


Cow::Cow(const char *nm, const char * ho, double wt)
{
    unsigned int lengthnm = strlen(nm);
    strncpy(name, nm, lengthnm); 
    name[lengthnm] = '\0';

    unsigned int lengthho = strlen(ho);
    hobby = new char[lengthho + 1];
    // strcpy(hobby, ho);
    strncpy(hobby, ho, lengthho);
    hobby[lengthho] = '\0';

    weight = wt;

}

Cow::Cow(const Cow & c)
{
    unsigned int lengthnm = strlen(c.name);
    strncpy(name, c.name, lengthnm);
    name[lengthnm] = '\0';

    unsigned int lengthho = strlen(c.hobby);
    hobby = new char[lengthho + 1];
    // strcpy(hobby, c.hobby);
    strncpy(hobby, c.hobby, lengthho);
    hobby[lengthho] = '\0';

    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    if (this == &c)
        return *this;
    
    delete [] hobby;

    unsigned int lengthnm = strlen(c.name);
    strncpy(name, c.name, lengthnm);
    name[lengthnm] = '\0';

    unsigned int lengthho = strlen(c.hobby);
    hobby = new char[lengthho + 1];
    // strcpy(hobby, c.hobby);
    strncpy(hobby, c.hobby, lengthho);
    hobby[lengthho] = '\0';

    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    cout << "imie: " << name << endl;
    cout << "hobby: " << hobby << endl;
    cout << "waga: " << weight << endl;
}