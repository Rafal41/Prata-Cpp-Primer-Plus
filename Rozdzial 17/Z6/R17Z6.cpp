#include "R17Z6.h"

abstr_emp::~abstr_emp() {}

void abstr_emp::ShowAll() const
{
    cout << "imie: " << fname << "     nazwisko: " << lname << "     zawod: " << job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Podaj imie: ";
    cin >> fname;
    cout << "Podaj nazwisko: ";
    cin >> lname;
    cout << "Podaj zawod: ";
    cin >> job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << e.fname << " " << e.lname ;
    return os;
}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "liczba pracownikow ktorymi zarzadza: " << inchargeof << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Podaj liczbe pracownikow ktorymi zarzadza: ";
    cin >> inchargeof;
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "osoba do ktorej donosi: " << reportsto << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Podaj osobe do ktorej donosi: ";
    cin >> reportsto;
}


void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "liczba pracownikow ktorymi zarzadza: " << InChargeOf() << endl;
    cout << "osoba do ktorej donosi: " << ReportsTo() << endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();

    int icotemp;
    std::string rttemp;
    cout << "Podaj liczbe pracownikow ktorymi zarzadza: ";
    cin >> icotemp;
    InChargeOf() = icotemp;
    cout << "Podaj osobe do ktorej donosi: ";
    cin >> rttemp;
    ReportsTo() = rttemp;
}

void abstr_emp::WriteAll(std::ostream & fout)
{
    fout << fname << " " << lname << " " << job << " ";
}

void employee::WriteAll(std::ostream & fout)
{
    fout <<  Employee << endl;
    abstr_emp::WriteAll(fout);
    fout << endl;
}

void manager::WriteAll(std::ostream & fout)
{
    fout << Manager << endl;
    abstr_emp::WriteAll(fout);
    fout << InChargeOf() << endl;
}

void fink::WriteAll(std::ostream & fout)
{
    fout << Fink << endl;
    abstr_emp::WriteAll(fout);
    fout << ReportsTo() << endl;
}

void highfink::WriteAll(std::ostream & fout)
{
    fout << Highfink << endl;
    abstr_emp::WriteAll(fout);
    fout << InChargeOf() << " " << ReportsTo() << endl;
}

void abstr_emp::GetAll(std::istream & fin)
{
    fin >> fname >> lname >> job;
}

void employee::GetAll(std::istream & fin)
{
    abstr_emp::GetAll(fin);
}

void manager::GetAll(std::istream & fin)
{
    abstr_emp::GetAll(fin);
    fin >> InChargeOf();
}

void fink::GetAll(std::istream & fin)
{
    abstr_emp::GetAll(fin);
    fin >> ReportsTo();
}

void highfink::GetAll(std::istream & fin)
{
    abstr_emp::GetAll(fin);
    fin >> InChargeOf() >> ReportsTo();
}