#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    struct Pizza {
        char nazwa[40];
        unsigned int srednica;
        unsigned int waga;
    } pizza;

    cout << "Podaj nazwe producenta pizzy: ";
    cin.getline(pizza.nazwa, 40);
    cout << "Podaj srednice pizzy: ";
    cin >> pizza.srednica;
    cout << "Podaj wage pizzy: ";
    cin >> pizza.waga;

    cout << "nazwa: " << pizza.nazwa <<endl;
    cout << "srednica: " << pizza.srednica <<endl;
    cout << "waga: " << pizza.waga <<endl;
    

    return 0;
}

