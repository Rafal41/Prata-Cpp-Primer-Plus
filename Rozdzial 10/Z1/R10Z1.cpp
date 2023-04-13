#include <iostream>
#include "R10Z1.h"

Bankacc::Bankacc()
{
    m_name = "brak";
    for(int i = 0; i < Len; i++)
        m_ban[i] = 0;
    m_balance = 0.0;
}

Bankacc::Bankacc(const std::string & name, const int ban[], double balance)
{
    m_name = name;

    if (balance < 0)
    {
        std::cout << "saldo konta nie moze byc ujemne. ustawiam saldo na 0\n";
        m_balance = 0.0;
    }
    else
         m_balance = balance;

    if (ban[0] <= 0)
    {
        std::cout << "Zle podany numer konta. Ustawiam na domyslny\n";
        for(int i = 0; i < Len; i++)
            m_ban[i] = 0;
    }
    else 
        for(int i = 0; i < Len; i++)
            m_ban[i] = ban[i];
   
}

Bankacc::~Bankacc()
{
}

void Bankacc::show() const
{
    using std::cout;
    using std::endl;
    bool flag = false;
    cout << "Wlasciciel konta: " << m_name << endl;
    cout << "Numer konta: ";
    for (int i = 0; i < Len; i++)
    {
        cout << m_ban[i];
        if ((i+1) % 2 == 0 && flag == false)
        {
            cout << " ";
            flag = true;
        }
        else if ((i-1) % 4 == 0 && flag == true)
            cout << " ";
    }
    cout << endl;
    cout << "Stan konta: " << m_balance << endl;
}


void Bankacc::acquire(double amount)
{
    if (amount < 0)
    {
        std::cout << "Kwota wpłacana na konto nie moze byc ujemna\n";
        return;
    }

    m_balance +=amount;
}

void Bankacc::emit(double amount)
{
    if (amount < 0)
    {
        std::cout << "Kwota wypłacana z konta nie moze byc ujemna\n";
        return;
    }
    m_balance -=amount;
}