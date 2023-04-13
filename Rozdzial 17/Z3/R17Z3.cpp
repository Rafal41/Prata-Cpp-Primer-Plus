#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char * argv[])
{   
    using namespace std;
    const int Size = 80;
    if (argc != 3)
    {
        cerr << "Bledne proba uzycia programu. Skladnia: nazwa_programu plik_zrodlowy plik_docelowy" << endl;
        exit(EXIT_FAILURE);
    }

    ifstream fin;
    fin.open(argv[1]);
    if (!fin.is_open())
    {
        cerr << "Nie mozna otworzyc pliku zrodlowego " << argv[1] << endl;
        exit(EXIT_FAILURE);
    } 
    ofstream fout;
    fout.open(argv[2]);
    if (!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku docelowego" << argv[2] << endl;
        exit(EXIT_FAILURE);
    } 

    char ch;
    while (fin.get(ch))
        fout.put(ch);
    
    fin.close();
    fout.close();
    
    // ifstream fin;
    // fin.open(argv[1]);
    // if (!fin.is_open())
    // {
    //     cerr << "Nie mozna otworzyc pliku do odczytu " << argv[1] << endl;
    //     exit(EXIT_FAILURE);
    // } 

    // cout << "Oto zawartosc pliku " << argv[1] << ":\n";
    // while (fin.get(ch))
    //     cout << ch;
    

    return 0;
}