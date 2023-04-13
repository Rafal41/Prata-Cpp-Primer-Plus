#include <iostream>
#include <string>
int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    string slowo;
    unsigned int ilosc = 0;

    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")" << endl;
    cin >> slowo;
   
    while (slowo != "gotowe")
    {
        ilosc++;
        cin >> slowo;
    }

    cout << "Podano " << ilosc << " slow.";

    return 0;
}

