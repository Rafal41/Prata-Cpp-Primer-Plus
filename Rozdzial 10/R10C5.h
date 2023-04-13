#ifndef R10C5_H_
#define R10C5_H_

#include <string>

class Bankacc
{
    
    private:
        enum {Len = 26};
        std::string m_name;
        int m_ban[Len];
        double m_balance;
    public:
        Bankacc();
        Bankacc(const std::string & name, int ban[], double balance = 0.0);
        ~Bankacc();
        void show() const;
        void aqcuire(double amount);
        void emit(double amount);

};


#endif