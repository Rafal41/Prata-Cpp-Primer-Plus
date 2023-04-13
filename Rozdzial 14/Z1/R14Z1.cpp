#include "R14Z1.h"


Wine::Wine() : name("brak"), count(0)
{
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), count(y), data(ArrayInt(y),ArrayInt(y))
{
    for (int i = 0; i < y; i++)
    {
        data.first()[i] = yr[i];
        data.second()[i] = bot[i];
    }
}

Wine::Wine(const char * l, int y) : name(l), count(y), data(ArrayInt(y),ArrayInt(y))
{   
}

void Wine::GetBottles()
{
    int yr;
    int amount;
    std::cout << "Podaj dane o winie " << name << " dla " << count << " rocznikow\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << "Podaj rocznik: ";
        std::cin >> yr;
        std::cout << "Podaj liczbe butelek: ";
        std::cin >> amount;
        data.first()[i] = yr;
        data.second()[i] = amount;
    }
}

std::string & Wine::Label()
{
    return name;
}

int Wine::sum()
{
    int sum = 0;
    for (int i = 0; i < count; i++)
        sum += data.second()[i];
    
    return sum;
}

void Wine::Show() const
{
    std::cout << "Wino: " << name << std::endl;
    std::cout << "     Rocznik     Butelki" << std::endl;
    for (int i = 0; i < count; i++)
        std::cout << "     " << data.first()[i] << "        " << data.second()[i] << std::endl;
}
