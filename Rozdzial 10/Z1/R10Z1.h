#ifndef R10Z1_H_
#define R10Z1_H_

#include <string>
const int Size = 26;
const int tab[Size]={0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0, 0,0,0,0};
class Bankacc
{
    
    private:
        enum {Len = 26};
        std::string m_name;
        int m_ban[Len];
        double m_balance;
    public:
        Bankacc();
        // Bankacc(const std::string & name, int ban[], double balance = 0.0);                                  // dwie wersje, jedna z inicjalizacją tablicy
        Bankacc(const std::string & name, const int ban[] = tab, double balance = 0.0);
        ~Bankacc();
        void show() const;
        void acquire(double amount);
        void emit(double amount);

};


#endif