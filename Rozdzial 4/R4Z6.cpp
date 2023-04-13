#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    struct Batonik {
        char marka[40];
        float waga;
        int kalorie;
    } snack [3]
    {
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch 2", 2.33, 441},
        {"Mocha Munch 3", 2.45, 342}
    };

    cout << "marka: " << snack[0].marka <<endl;
    cout << "waga: " << snack[0].waga <<endl;
    cout << "kalorie: " << snack[0].kalorie <<endl;

    cout << "marka: " << snack[1].marka <<endl;
    cout << "waga: " << snack[1].waga <<endl;
    cout << "kalorie: " << snack[1].kalorie <<endl;
    
    cout << "marka: " << snack[2].marka <<endl;
    cout << "waga: " << snack[2].waga <<endl;
    cout << "kalorie: " << snack[2].kalorie <<endl;

    return 0;
}

