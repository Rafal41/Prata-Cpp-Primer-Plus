#include <iostream>
template <typename T>
void show2(double x, T & fp) {std::cout << x << " -> " << fp(x) << '\n';}
// double f1(double x) {return 1.8 *x +32;}
auto lam = [](double x) {return 1.8 * x +32;};
int main()
{
    show2(18.0 , lam);
    return 0;
}