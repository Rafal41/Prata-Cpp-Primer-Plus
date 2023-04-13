#include <iostream>
#include "R10C5.h"

Bankacc::Bankacc()
{
    m_name = "brak";
    for(int i = 0; i < Len; i++)
        m_ban[i] = 0;
    m_balance = 0.0;
}

Bankacc::Bankacc(const std::string & name, int ban[], double balance)
{
    m_name = name;
    if (balance < 0)
    {
        std::cout << "saldo konta nie moze byc ujemne. ustawiam saldo na 0\n";
        m_balance = 0.0;
    }

    if (ban[0] <= 0)
    {
        std::cout << "Zle podany numer konta. Ustawiam na domyslny\n";
        for(int i = 0; i < Len; i++)
            m_ban[i] = 0;
    }

    for(int i = 0; i < Len; i++)
        m_ban[i] = ban[i];
    m_balance = balance;
}

