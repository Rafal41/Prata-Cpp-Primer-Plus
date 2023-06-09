#include <iostream>
#include <array>

const int Size = 5;

template<typename T>
void sum(std::array<double,Size> a, T & fp);

int main()
{
    double total = 0.0;
    std::array<double, Size> temp_c = {32.1, 34.3, 37.8, 35.2, 34.7};
    auto lam = [&total](double x){total += x;};
    sum(temp_c, lam);
    // sum(temp_c, [&total](double x){total += x;});
    std::cout << "total: " << total << '\n';
    return 0;
}

template<typename T>
void sum(std::array<double,Size> a, T& fp)
{
    for(auto pt = a.begin(); pt != a.end(); ++pt)
    {
        fp(*pt);
    }
}