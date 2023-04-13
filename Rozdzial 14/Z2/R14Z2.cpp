#include "R14Z2.h"


Wine::Wine() : std::string("brak"), count(0)
{
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), count(y), PairArray(ArrayInt(y),ArrayInt(y))
{
    for (int i = 0; i < y; i++)
    {
        PairArray::first()[i] = yr[i];
        PairArray::second()[i] = bot[i];
    }
}

Wine::Wine(const char * l, int y) : std::string(l), count(y), PairArray(ArrayInt(y),ArrayInt(y))
{   
}

void Wine::GetBottles()
{
    int yr;
    int amount;
    std::cout << "Podaj dane o winie " << (const std::string &) *this << " dla " << count << " rocznikow\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << "Podaj rocznik: ";
        std::cin >> yr;
        std::cout << "Podaj liczbe butelek: ";
        std::cin >> amount;
        PairArray::first()[i] = yr;
        PairArray::second()[i] = amount;
    }
}

std::string & Wine::Label()
{
    return (std::string &) *this;
}

int Wine::sum()
{
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum += PairArray::second()[i];
    
    return sum;
}

void Wine::Show() const
{
    std::cout << "Wino: " << (const std::string &) *this << std::endl;
    std::cout << "     Rocznik     Butelki" << std::endl;
    for (int i = 0; i < count; i++)
        std::cout << "     " << PairArray::first()[i] << "        " << PairArray::second()[i] << std::endl;
}
