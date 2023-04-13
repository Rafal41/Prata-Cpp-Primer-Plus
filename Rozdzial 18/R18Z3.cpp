#include <iostream>

long double sum_values() {return 0;}

template <typename T, typename... Args>
long double sum_values(const T & value, const Args&...args)
{
    return value + sum_values(args...);
}

int main(void)
{
    // sum_values(1,2,4,6,2);
    std::cout << sum_values(1,2,4,6,2) << std::endl;
    std::cout << sum_values(2.5,1.2,3.4,2.0,1.15) << std::endl;
    std::cout << sum_values(1,4.0,4,12.1,2) << std::endl;
    std::cout << sum_values('a',4.0,4,12.1,'!') << std::endl;
    return 0;
}