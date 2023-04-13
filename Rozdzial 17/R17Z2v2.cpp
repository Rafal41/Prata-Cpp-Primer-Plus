#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char * argv[])
{   
    using namespace std;
    const int Size = 80;
    if (argc != 2)
    {
        cerr << "Bledne proba uzycia programu. Skladnia: nazwa_programu plik_tekstowy" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    fout.open(argv[1]);
    if (!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku " << argv[1] << endl;
        exit(EXIT_FAILURE);
    } 


    int count = 0;
    char ch;
    
    cout << "Podaj jakis tekst, a ja skopiuje jego znaki do pliku podanego jako argumentu wiersza polecenia. Znak CTRL+Z konczy" << endl;
    while (cin.get(ch) && ch != EOF)
    {
        fout.put(ch);
    }
    
    fout.close();

    ifstream fin;
    fin.open(argv[1]);
    if (!fin.is_open())
    {
        cerr << "Nie mozna otworzyc pliku do odczytu " << argv[1] << endl;
        exit(EXIT_FAILURE);
    } 

    cout << "Oto zawartosc pliku " << argv[1] << ":\n";
    while (fin.get(ch))
        cout << ch;
    fin.close();

    return 0;
}