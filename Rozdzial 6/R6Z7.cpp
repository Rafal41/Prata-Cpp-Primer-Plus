#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    string slowo;
    unsigned int spolgos = 0, samoglos = 0, inne = 0;

    cout << "Podawaj slowa (pojedyncze q konczy):" << endl;
    while ((cin >> slowo) && slowo != "q")
    {
        if (!isalpha(slowo[0])) // slowo nie zaczyna sie od liter
            inne++;
        else
        {   
            switch(slowo[0])
            {
                case 'a':
                case 'A': samoglos++; break;
                case 'e':
                case 'E': samoglos++; break;
                case 'i':
                case 'I': samoglos++; break;
                case 'o':
                case 'O': samoglos++; break;
                case 'u':
                case 'U': samoglos++; break;
                case 'y':
                case 'Y': samoglos++; break;
                default: spolgos++;
            }

        }
    }
    cout << spolgos << " slow zaczyna sie od spolglosek." << endl;
    cout << samoglos << " slow zaczyna sie od samoglosek." << endl;
    cout << inne << " slow nie zalicza sie do zadnej z tych kategorii" << endl;
    return 0;
}
