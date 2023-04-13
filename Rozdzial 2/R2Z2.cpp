#include <iostream>
#define SMTOM 1852

int main(void)
{
    using namespace std;
    int mm;

    cout << "Podaj odleglosc w milach morskich ";
    cin >> mm;
    cout << endl; 
    cout << mm << " mil morskich to " << SMTOM * mm << " m" << endl;

    return 0;
}