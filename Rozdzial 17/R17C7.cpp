#include <iostream>
#include <string>
#include <iomanip>

int main()
{
        using namespace std;
        string name;
        int stawka;
        float godz;
        cout << "Podaj swoje imie i nazwisko: ";
        getline(cin,name);
        cout << "Podaj swoja stawke godzinowa: ";
        cin >> stawka;
        cout << "Podaj liczbe przepracowanych godzin: ";
        cin >> godz;

        cout << "Pierwszy format:\n";
        cout    << setw(16 + name.size()) << name << ":"
                << setw(8)  << stawka << " zl :"
                << setw(8)  << setprecision(2) << godz;

        cout << "\nDrugi format:\n";
        cout << left;
        cout    << setw(16 + name.size())  << name << ":"
                << setw(8)  << stawka << " zl :"
                << setw(8)  << setprecision(2) << godz;


    
    return 0;
}