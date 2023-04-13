#include <iostream>
#include <cstring>
#include "golf.h"

int main(void)
{
    using namespace std;
    golf person[Size];
    for (int i = 0; i < Size; i++)
        strncpy(person[i].fullname,"\0",2);
    int i = 0;
    while (i < Size && setgolf(person[i]))
        i++;
    
    showgolf(person);

    return 0;
}