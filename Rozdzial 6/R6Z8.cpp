#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(void)
{
    using namespace std;
    string filename;
    ifstream file;
    char ch;
    unsigned int count = 0;

    cout << "Podaj nazwe pliku z danymi: " << endl;
    getline(cin, filename);
    file.open(filename);
    if(!file.is_open())
    {
        cout << "Otwarcie pliku " << filename << " nie powiodlo sie.\n";
        cout << "Program zostanie zamkniety";
        exit(EXIT_FAILURE);
    }

    file.get(ch);
    while (file.good())
    {
        count++;
        cout << ch;
        file.get(ch);
    }
    if (file.eof())
        cout << "\nkoniec pliku.\n";
    else if (file.fail())
        cout << "wczytywanie danych przerwane - blad\n";
    else    
        cout << "wczytywanie danych przerwane, przyczyna nieznana.\n";

    file.close();

    cout << "liczba znakow w pliku to : " << count << endl;

    return 0;
}
