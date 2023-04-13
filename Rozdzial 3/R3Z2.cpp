#include <iostream>

int main(void)
{
    using namespace std;
    const float kintom = 0.0254;
    const float kfttoin = 12;
    const float klbstokg = 1/2.2;
    int wzrostft;
    float wzrostin, wagalbs, wzrostm, wagakg, bmi; 

    cout << "Podaj swój wzrost\n";
    cout << "Najpierw ilość pełnych stóp:";
    cin >> wzrostft;
    cout << "Teraz ilość pozostałych cali: ";
    cin >> wzrostin;
    cout << "Teraz podaj swoją wagę w funtach: ";
    cin >> wagalbs;

    wzrostm = (wzrostft*kfttoin + wzrostin)*kintom;
    wagakg = wagalbs*klbstokg;
    bmi = wagakg/(wzrostm * wzrostm);

    cout << "twoj wzrost to " << wzrostm << "m a waga to " << wagakg << "kg\n"; 
    cout << "BMI wynosi = " << bmi << endl;
    return 0;
}

