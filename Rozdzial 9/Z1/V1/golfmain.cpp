#include <iostream>
#include "golf.h"

int main(void)
{
    golf person;

    if (setgolf(person))
        showgolf(person);

    return 0;
}