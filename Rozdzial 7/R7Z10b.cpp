#include <iostream>

double add(double m, double n);
double multiply(double m, double n);
double calculate(double x, double y, double (*pf)(double m, double n));

int main(void)
{
    double a,b;
    double q = 0;
    double (*fn[2])(double m, double n) = {&add, &multiply};

    std::cout << "podaj pare liczb: ";
    while (std::cin >> a && std::cin >> b)
    {
        q = calculate(a, b, *(fn));
        std::cout << "wynik dodawania to: " << q << std::endl;
        q = calculate(a, b, *(fn+1));
        std::cout << "wynik mnozenia to: " << q << std::endl;
        std::cout << "podaj nastepna pare liczb (podanie q konczy): ";
    }

    return 0;
}

double add(double m, double n)
{
    return m+n;
}

double multiply(double m, double n)
{
    return m*n;
}

double calculate(double x, double y, double (*pf)(double m, double n))
{
    return pf(x,y);
}

