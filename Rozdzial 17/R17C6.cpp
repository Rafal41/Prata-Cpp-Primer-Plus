#include <iostream>

int main()
{
    using namespace std;
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    cout << "Liczba to: dec/oct/hex" << endl;
    cout.setf(ios_base::showbase);
    cout << cout.width(12) << liczba << oct << cout.width(12) << liczba  << hex << cout.width(12) << liczba << endl;
    
    return 0;
}