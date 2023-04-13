#include <iostream>
#include <cstring>

int main(void)
{
    using namespace std;

    struct Batonik {
        char marka[40];
        float waga;
        int kalorie;
    };
    
    Batonik * wsk = new Batonik[3];
    // strcpy(wsk[0].marka,"Mocha Munch");
    // wsk[0].waga = 2.3;
    // wsk[0].kalorie = 330;

    // strcpy(wsk[1].marka,"Mocha Munch 1");
    // wsk[1].waga = 2.32;
    // wsk[1].kalorie = 350;

    // strcpy(wsk[2].marka,"Mocha Munch 2");
    // wsk[2].waga = 2.34;
    // wsk[2].kalorie = 320;

    Batonik * wsk = new Batonik[3] {
        {"Mocha Munch", 2.3, 350},
        {"Mocha Munch 2", 2.33, 441},
        {"Mocha Munch 3", 2.45, 342}
    };

        
    cout << "marka: " << wsk[0].marka <<endl;
    cout << "waga: " << wsk[0].waga <<endl;
    cout << "kalorie: " << wsk[0].kalorie <<endl;

    cout << "marka: " << wsk[1].marka <<endl;
    cout << "waga: " << wsk[1].waga <<endl;
    cout << "kalorie: " << wsk[1].kalorie <<endl;
    
    cout << "marka: " << wsk[2].marka <<endl;
    cout << "waga: " << wsk[2].waga <<endl;
    cout << "kalorie: " << wsk[2].kalorie <<endl;

    delete [] wsk;
 

    return 0;

}

