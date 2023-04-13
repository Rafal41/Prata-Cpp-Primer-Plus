// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>

class base : public std::logic_error
{
    protected:
        double v1;
        double v2;
    public:
        explicit base(const std::string & s ="base(): unknown problem\n", double a = 0, double b = 0) : std::logic_error(s), v1(a), v2(b){}
        virtual void msg() { std::cout << "base(): unknown problem\n"; }

};

class bad_hmean : public base
{
    public:
        explicit bad_hmean( double a = 0, double b = 0, const std::string & s ="hmean(): invalid arguments: a = -b\n") : base(s,a,b) {}
        void msg();
};

inline void bad_hmean::msg()
{
    std::cout << "hmean(" << v1 << ", " << v2 <<"): " << "invalid arguments: a = -b\n";
}

class bad_gmean : public base
{
    public:
        explicit bad_gmean( double a = 0, double b = 0, const std::string & s ="gmean() arguments should be >= 0\n") : base(s,a,b){}
        void msg();
};

inline void bad_gmean::msg()
{
    std::cout << "gmean(" << v1 << ", " << v2 <<"): " << "arguments should be >= 0\n";
}

