#include <iostream>

#include <array>

int main(void)
{
    using namespace std;
    array<float,3> wyniki;

    cout << "Podaj wynik sprintu na 100m: ";
    cin >> wyniki[0];
    cout << "Podaj wynik sprintu na 100m: ";
    cin >> wyniki[1];
    cout << "Podaj wynik sprintu na 100m: ";
    cin >> wyniki[2];

    cout << "twoje wyniki to:\n";
    cout << wyniki[0] << endl;
    cout << wyniki[1] << endl;
    cout << wyniki[2] << endl;
    cout << "srednia wynikow to: " << (wyniki[0]+wyniki[1]+wyniki[2])/3.0 <<endl;

    return 0;
}

