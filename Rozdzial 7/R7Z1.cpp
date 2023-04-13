#include <iostream>

double oblsrhrm(double n, double m);

int main(void)
{
    using namespace std;
    double x, y;

    cout << "Podaj pare liczb, a ja oblicze srednia harmoniczna: ";
    while ((cin >> x && x != 0) && (cin >> y && y != 0)) 
    {
        cout << "srednia harmoniczna podanych liczb wynosi: " << oblsrhrm(x, y);
        cout << "\nPodaj nastepna pare liczb (0 konczy): ";
    }
    
    return 0;
}

double oblsrhrm(double n, double m)
{
    return (2.0 * n * m) /(n + m);
}