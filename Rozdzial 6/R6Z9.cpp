#include <iostream>
#include <fstream>
#include <cstdlib>

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
    string filename;
    ifstream file;

    cout << "Podaj nazwe pliku z danymi: " << endl;
    getline(cin, filename);
    file.open(filename);
    if(!file.is_open())
    {
        cout << "Otwarcie pliku " << filename << " nie powiodlo sie.\n";
        cout << "Program zostanie zamkniety";
        exit(EXIT_FAILURE);
    }
    
    file >> liczbawplacaj;
    file.get(); // Odrzucenie entera
    cout << "liczba wplacajacych to: " << liczbawplacaj << endl;
    wplacajacy *wsk = new wplacajacy[liczbawplacaj];

    // file.getline(wsk[0].nazwisko,Strsize);
    // cout << wsk[0].nazwisko << endl;
    for (int i = 0; i < liczbawplacaj; i++)
    {
        file.getline(wsk[i].nazwisko,Strsize);
        cout << wsk[i].nazwisko << endl;
        file >> wsk[i].kwota;
        cout << wsk[i].kwota << endl;
        file.get();                                      // Odrzucenie entera
    }

    if (file.eof())
        cout << "\nkoniec pliku.\n";
    else if (file.fail())
        cout << "wczytywanie danych przerwane - blad\n";
    else    
        cout << "wczytywanie danych przerwane, przyczyna nieznana.\n";
    file.close();

/****************************************************************/
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
