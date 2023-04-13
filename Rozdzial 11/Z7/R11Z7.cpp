using namespace std;
#include "R11Z7.h" // to avoid confusion with complex.h

Cplx::Cplx(int real, int imgry)
{
    m_real = real;
    m_imgry = imgry;
}

Cplx::~Cplx()
{

}

Cplx Cplx::operator+(const Cplx & num) const
{
    return Cplx(m_real + num.m_real, m_imgry + num.m_imgry);
}

Cplx Cplx::operator-(const Cplx & num) const
{
    return Cplx(m_real - num.m_real, m_imgry - num.m_imgry);
}

Cplx Cplx::operator*(const Cplx & num) const
{
    int x = m_real * num.m_real - m_imgry * num.m_imgry;    // A*C - B*D
    int y = m_real * num.m_imgry + m_imgry * num.m_real;    // A*D + B*C
    return Cplx(x, y);
}

Cplx Cplx::operator*(const double mult) const
{
    return Cplx(m_real * mult, m_imgry * mult);
}

Cplx Cplx::operator~() const
{
    return Cplx(m_real, -m_imgry);
}

Cplx operator*(const double mult, const Cplx & num)
{
    return num * mult;
}

std::istream & operator>>(std::istream & is, Cplx & num)
{
    cout << "skladowa rzeczywista: ";
    is >> num.m_real;
    cout << "skladowa urojona: ";
    is >> num.m_imgry;
    return is;
}

std::ostream & operator<<(std::ostream & os, const Cplx & num)
{
    os << "(" << num.m_real << "," << num.m_imgry << "i)";
    return os;
}
