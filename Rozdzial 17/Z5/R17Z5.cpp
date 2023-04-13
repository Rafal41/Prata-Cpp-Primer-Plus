#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

void show(std::string & record) {std::cout << record << std::endl;}
int main(void)
{   
    using namespace std;
    const int Size = 40;

    ifstream fin1;
    fin1.open("bolek.dat");
    if (!fin1.is_open())
    {
        cerr << "Nie mozna otworzyc pliku zrodlowego " << "bolek.dat" << endl;
        exit(EXIT_FAILURE);
    } 
    ifstream fin2;
    fin2.open("lolek.dat");
    if (!fin2.is_open())
    {
        cerr << "Nie mozna otworzyc pliku zrodlowego " << "lolek.dat" << endl;
        exit(EXIT_FAILURE);
    } 
    ofstream fout;
    fout.open("boilol.dat");
    if (!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku docelowego" << "boilol.dat" << endl;
        exit(EXIT_FAILURE);
    } 


    char nametemp[Size];
    vector<string> bolek;

    while (!fin1.eof())
    {
        fin1.getline(nametemp, Size);
        bolek.push_back(nametemp);
    }
    for_each(bolek.begin(), bolek.end(),show);
    cout << endl;
    // teraz posortowane
    sort(bolek.begin(), bolek.end());
    for_each(bolek.begin(), bolek.end(),show);
    cout << endl;

    vector<string> lolek;
    while (!fin2.eof())
    {
        fin2.getline(nametemp, Size);
        lolek.push_back(nametemp);
    }
    for_each(lolek.begin(), lolek.end(),show);
    cout << endl;
    // teraz posortowane
    sort(lolek.begin(), lolek.end());
    for_each(lolek.begin(), lolek.end(),show);
    cout << endl;


    vector<string> sum(bolek);
    sum.insert(sum.end(), lolek.begin(), lolek.end());
    sort(sum.begin(),sum.end());
    vector<string>::iterator ptr = unique(sum.begin(), sum.end());

    for_each(sum.begin(), ptr, show);
    cout << endl;
   
    for (vector<string>::iterator i = sum.begin(); i < ptr; i++)
        fout << *i << endl;

    fin1.close();
    fin2.close();
    fout.close();
    
    return 0;
}
