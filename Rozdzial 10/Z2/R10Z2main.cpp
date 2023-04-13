#include <iostream>
#include "R10Z2.h"

int main(void)
{
    Person one;
    Person two("Staszek");
    Person three("Jacek", "Placek");
    one.Show();
    std::cout << std::endl;
    one.FormalShow();
    std::cout << std::endl;

    two.Show();
    std::cout << std::endl;
    two.FormalShow();
    std::cout << std::endl;

    three.Show();
    std::cout << std::endl;
    three.FormalShow();
    std::cout << std::endl;

    return 0;
}