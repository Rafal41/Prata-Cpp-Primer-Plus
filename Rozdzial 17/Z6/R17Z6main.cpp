// g++ R17Z6.cpp R17Z6main.cpp
// useemp1.cpp -- using the abstr_emp classes
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "R17Z6.h"

using namespace std;
const char * file = "R17Z6.txt";
const int MAX = 10;

int show_menu();
int main(void)
{
    abstr_emp * pc[MAX];
    int i = 0;
    char ch;

    // pokaz poczatkowa zawartosc
    ifstream fin;
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Oto aktualna zawartosc pliku " << file << ":\n";
        int classtype;
        while ((fin >> classtype).get(ch))
        {
            switch(classtype)
            {
                case Employee:  pc[i] = new employee; 
                                break;
                case Manager:   pc[i] = new manager;
                                break;
                case Fink:      pc[i] = new fink;
                                break;
                case Highfink:  pc[i] = new highfink;                   
                                break;
                default:        cout << "Nieznany blad\n";
            }
            pc[i++]->GetAll(fin);
            pc[i-1]->ShowAll();
        }

        fin.close();
    }

    // dodaj nowe osoby
    ofstream fout;
    fout.open(file);
    if(!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku " << file << " do zapisu\n";
        exit(EXIT_FAILURE);
    }
    if(i < MAX)
    {
        char choice;
        while ((choice = show_menu()) && choice != 'q')
        {
            cout << "dodawanie danych choice = " << choice << endl;
            switch(choice)
            {
                case '1':  pc[i] = new employee; 
                                break;
                case '2':   pc[i] = new manager;
                                break;
                case '3':      pc[i] = new fink;
                                break;
                case '4':  pc[i] = new highfink;                        
                                break;
                default:        cout << "Nieznany blad\n";
            }
            pc[i++]->SetAll();
        }
    }
    else
        cout << "Lista jest pelna - nie mozna dodac nowych danych" << endl;

    for (int j = 0; j < i; j++)
        pc[j]->WriteAll(fout);

    fout.close();


    // wyswietl zmieniona zawartosc
    fin.clear();
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Oto nowa zawartosc pliku " << file << ":\n";
        i = 0;
        int classtype;
       
        while ((fin >> classtype).get(ch))
        {
            switch(classtype)
            {
                case Employee:  pc[i] = new employee; 
                                break;
                case Manager:   pc[i] = new manager;
                                break;
                case Fink:      pc[i] = new fink;
                                break;
                case Highfink:  pc[i] = new highfink;                   
                                break;
                default:        cout << "Nieznany blad\n";
            }
            pc[i++]->GetAll(fin);
            pc[i-1]->ShowAll();

        }

        fin.close();
    }
        
    return 0;
}

int show_menu()
{
    cout << "Jaki obiekt chcesz stworzyc?" << endl;
    cout << "1) employee" << endl;
    cout << "2) manager" << endl;
    cout << "3) fink" << endl;
    cout << "4) highfink" << endl;
    cout << "q) quit" << endl;

    char ch;
    cin.get(ch);
    if(ch == '\n')
        cin.get(ch);

    while (!strchr("1234q",ch))
    {
        cout << "podaj poprawny wybor" <<endl;
        ch = show_menu();
    }
    
    while (cin.get() != '\n')
        continue;

    return ch;
}