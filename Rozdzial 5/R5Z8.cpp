#include <iostream>
#include <string>
#include <cstring>
int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    char slowo[40];
    unsigned int ilosc = 0;

    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")" << endl;
    cin >> slowo;
   
    while (strcmp(slowo, "gotowe"))
    {
        ilosc++;
        cin >> slowo;
    }

    cout << "Podano " << ilosc << " slow.";

    return 0;
}

