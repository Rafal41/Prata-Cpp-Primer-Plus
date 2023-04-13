#include <iostream>
const float start = 100.0;
const float prst = 0.1;
const float prskl = 0.05;

int main(void)
{
    using std::cout;

    using std::endl;

    float dafne = start, cleo = start;

    while (cleo <= dafne)
    {   
        dafne += start * prst;
        cleo += cleo * prskl;
        cout << "Dafne: " << dafne << " Cleo: " << cleo << endl;

    }
    
    cout << "Na koniec Dafne: " << dafne << " Cleo: " << cleo << endl;

    return 0;
}

