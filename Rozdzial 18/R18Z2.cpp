#include <iostream>
#include <string>
using namespace std;
class Cpmv
{
    public:
        struct Info
        {
        std::string qcode;
        std::string zcode;
        };
    private:
        Info *pi;
        void ShowObject() const;
    public:
        Cpmv();
        Cpmv(std::string q, std::string z);
        Cpmv(const Cpmv & cp);
        Cpmv(Cpmv && mv);
        ~Cpmv();
        Cpmv & operator=(const Cpmv & cp);
        Cpmv & operator=(Cpmv && mv);
        Cpmv operator+(const Cpmv & obj) const;
        void Display() const;
};


Cpmv::Cpmv()
{
    pi = new Info;
    pi->qcode = "";
    pi->zcode = "";
    cout << "konstruktor domyslny" << endl;
    ShowObject();
}

Cpmv::Cpmv(std::string q, std::string z)
{
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
    cout << "konstruktor (string, string)" << endl;
    ShowObject();
}

Cpmv::Cpmv(const Cpmv & cp)
{
    pi = new Info;
    // pi = cp.pi;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    cout << "konstruktor kopiujacy" << endl;
    ShowObject();
}

Cpmv::Cpmv(Cpmv && mv)
{
    pi = mv.pi;
    mv.pi = nullptr;
    // pi->qcode = mv.pi->qcode;
    // pi->zcode = mv.pi->zcode;
    cout << "konstruktor przenoszacy" << endl;
    ShowObject();
}

Cpmv::~Cpmv()
{
    cout << "destruktor" << endl;
    cout << "usuwany obiekt: "<< endl;
    ShowObject();
    delete pi;
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{
    if(this == &cp)
        return *this;
    
    delete pi;
    pi = new Info;
    // pi = cp.pi;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    cout << "operator przypisania" << endl;
    ShowObject();

    return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv)
{
    if(this == &mv)
        return *this;
    
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    cout << "operator przeniesienia" << endl;
    ShowObject();

    return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const
{
    cout << "wejscie do operator+()" << endl;
    cout << "obiekt tymczasowy:" << endl;
    Cpmv temp;
    // temp.pi = pi + obj.pi;
    temp.pi->qcode = pi->qcode + obj.pi->qcode;
    temp.pi->zcode = pi->zcode + obj.pi->zcode;
    cout << "wyjscie z operator+()" << endl;
    return temp;
}

void Cpmv::ShowObject() const
{
    // cout << "qcode = " << pi->qcode << " " << "zcode = " << pi->zcode << endl;
    cout << "Adres danych: " << (void *) pi << endl;
}


void Cpmv::Display() const
{
    cout << "qcode = " << pi->qcode << " " << "zcode = " << pi->zcode << endl;
    cout << "adres = " << (void *) pi << endl;
}

int main(void)
{
    Cpmv one;
    Cpmv two = one;
    Cpmv three("Rafal", "Nowak");
    Cpmv four(one + three);
    cout << " obiekt 1: ";
    one.Display();
    cout << " obiekt 2: ";
    two.Display();
    cout << " obiekt 3: ";
    three.Display();
    cout << " obiekt 4: ";
    four.Display();
    
    cout <<endl;
    cout << "operator przypisania" << endl;
    two = three;
    cout << " obiekt 2: ";
    two.Display();
    cout << " obiekt 3: ";
    three.Display();

    cout <<endl;
    cout << "operator przeniesienia" << endl;;
    two = three + three;
    cout << " obiekt 2: ";
    two.Display();
    cout << " obiekt 3: ";
    three.Display();

    cout <<endl;
    cout << "funkcja move" << endl;;
    two = std::move(three);
    cout << " obiekt 2: ";
    two.Display();
    cout << " obiekt 3: ";
    three.Display();


    return 0;
}