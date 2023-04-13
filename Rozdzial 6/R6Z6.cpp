#include <iostream>

const int Strsize = 40;
const int Prog = 10000;
struct wplacajacy {
    char nazwisko[Strsize];
    double kwota;
};

int main(void)
{
    using namespace std;
    unsigned int liczbawplacaj = 0;
    bool flag = false;
    
    cout << "Podaj liczbe wplacajacych" << endl;
    cin >> liczbawplacaj;
    // cin.get();                                      // Odrzucenie entera
    wplacajacy *wsk = new wplacajacy[liczbawplacaj];

    for (int i = 0; i < liczbawplacaj; i++)
    {
        cout << "Podaj nazwisko wplacajacego: " << endl;
        //  cin.getline(wsk[i].nazwisko,Strsize);
        cin >> wsk[i].nazwisko;
        cout << "Podaj kwote jaka zostala wplacona: " << endl;
        cin >> wsk[i].kwota;
        // cin.get();                                      // Odrzucenie entera
    }

    cout << "\nNasi wspaniali sponsorzy" << endl;
    for (int i = 0; i < liczbawplacaj; i++)
    {
        if (wsk[i].kwota >= Prog)
        {
            cout << wsk[i].nazwisko <<" wplacil "<<  wsk[i].kwota << endl;
            flag = true;
        }   
    }
    if (!flag)
        cout << "brak" << endl;

    flag = false;
    cout << "\nNasi sponsorzy" << endl;
    for (int i = 0; i < liczbawplacaj; i++)
    {
        if (wsk[i].kwota < Prog)
        {
            cout << wsk[i].nazwisko <<" wplacil "<<  wsk[i].kwota << endl;
            flag = true;
        }
    }
    if (!flag)
    cout << "brak" << endl;

    delete [] wsk;
    return 0;
}
