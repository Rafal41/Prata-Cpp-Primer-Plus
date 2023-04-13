#ifndef R11Z7_H_
#define R11Z7_H_
#include <iostream>

class Cplx
{
    private:
        int m_real;
        int m_imgry;

    public:
        Cplx(int real = 0, int imgry = 0);
        ~Cplx();
        Cplx operator+(const Cplx & num) const;
        Cplx operator-(const Cplx & num) const;
        Cplx operator*(const Cplx & num) const;
        Cplx operator*(const double mult) const;
        Cplx operator~() const;
        friend Cplx operator*(const double mult, const Cplx & num);
        friend std::istream & operator>>(std::istream & os, Cplx & num);
        friend std::ostream & operator<<(std::ostream & os, const Cplx & num);
};
#endif