#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    struct Batonik {
        char marka[40];
        float waga;
        int kalorie;
    } snack
    {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "marka: " << snack.marka <<endl;
    cout << "waga: " << snack.waga <<endl;
    cout << "kalorie: " << snack.kalorie <<endl;

    return 0;
}

