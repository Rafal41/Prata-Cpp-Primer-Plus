#include <iostream>
#define YTOM 12

int main(void)
{
    using namespace std;
    int years;

    cout << "Podaj swoj wiek ";
    cin >> years;
    cout << endl; 
    cout << "Twoj wiek w miesiacach wynosi " << YTOM * years << endl;

    return 0;
}