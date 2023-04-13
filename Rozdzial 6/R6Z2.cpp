#include <iostream>
#include <string>
#include <cctype>
#include <array>

const int Max = 10;
int main(void)
{
    using namespace std;
    array <double,Max> ar;

    cout << "Podaj datek: (Max 10 datkow, 'q' konczy) ";
    int i = 0;
    unsigned int suma = 0;
    float srednia;
    while (i < Max && cin >> ar[i])
    {   
        suma += ar[i];
        i++;
        cout << "Podaj nastepny datek: ";
    }
    srednia = suma/i;
    cout << "Sredni datek to: " << srednia << endl;

    for (int j = 0; j < i; j++)
        if (ar[j] > srednia)
            cout << ar[j] << endl;
    return 0;
}

