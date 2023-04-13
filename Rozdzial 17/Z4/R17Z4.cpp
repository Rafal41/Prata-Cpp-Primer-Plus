#include <iostream>
#include <fstream>
#include <cstdlib>

int main(void)
{   
    using namespace std;
    const int Size = 80;

    ifstream fin1;
    fin1.open("zr1.txt");
    if (!fin1.is_open())
    {
        cerr << "Nie mozna otworzyc pliku zrodlowego " << "zr1.txt" << endl;
        exit(EXIT_FAILURE);
    } 
    ifstream fin2;
    fin2.open("zr2.txt");
    if (!fin2.is_open())
    {
        cerr << "Nie mozna otworzyc pliku zrodlowego " << "zr2.txt" << endl;
        exit(EXIT_FAILURE);
    } 
    ofstream fout;
    fout.open("sklejony.txt");
    if (!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku docelowego" << "sklejony.txt" << endl;
        exit(EXIT_FAILURE);
    } 

    char ch;
    
    while (!fin1.eof() || !fin2.eof())
    {
        if (!fin1.eof())
        {
            while (fin1.get(ch) && ch != '\n')
            {
                fout.put(ch);
            }
            fout.put(' ');
        }
        if (!fin2.eof())
        {
            while (fin2.get(ch) && ch != '\n')
            {
                fout.put(ch);
            }
        }
        fout.put('\n');
    }
        
    fin1.close();
    fin2.close();
    fout.close();
    

    return 0;
}