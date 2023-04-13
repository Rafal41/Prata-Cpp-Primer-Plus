// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class bad_hmean : public std::logic_error
{
    public:
        explicit bad_hmean(const std::string & s ="hmean(): invalid arguments: a = -b\n") : std::logic_error(s){}
        // void what();
};

// inline void bad_hmean::what()
// {
//     std::cout << "hmean(" << v1 << ", " << v2 <<"): " << "invalid arguments: a = -b\n";
// }

class bad_gmean : public std::logic_error
{
    public:
        // double v1;
        // double v2;
        explicit bad_gmean(const std::string & s ="gmean() arguments should be >= 0\n") : std::logic_error(s){}
        // void what();
        // const char * mesg();
};

// inline const char * bad_gmean::mesg()
// {
//     return "gmean() arguments should be >= 0\n";
// }
// inline void bad_gmean::what()
// {
//     std::cout << "gmean() arguments should be >= 0\n";
// }