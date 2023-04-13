#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    struct Pizza {
        char nazwa[40];
        unsigned int srednica;
        unsigned int waga;
    };

    Pizza * wsk = new Pizza;

    cout << "Podaj srednice pizzy: ";
    cin >> wsk->srednica;
    cin.get();
    cout << "Podaj nazwe producenta pizzy: ";
    cin.getline(wsk->nazwa, 40);
    cout << "Podaj wage pizzy: ";
    cin >> wsk->waga;

    cout << "nazwa: " << wsk->nazwa <<endl;
    cout << "srednica: " << wsk->srednica <<endl;
    cout << "waga: " << wsk->waga <<endl;
    
    delete wsk;

    return 0;
}

