// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "R11Z5.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn; // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = STONE;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn +lbs;
    mode = STONE;
}

Stonewt::Stonewt() // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    mode = STONE;
}

Stonewt::~Stonewt() // destructor
{
}

Stonewt Stonewt::operator+(const Stonewt & st) const
{
    return Stonewt(pounds + st.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & st) const
{
    return Stonewt(pounds - st.pounds);
}

Stonewt Stonewt::operator*(const Stonewt & st) const
{
    return Stonewt(pounds * st.pounds);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    if (st.mode == Stonewt::STONE)
        os << "Stone:pounds - " << st.stone << ":" << st.pds_left << std::endl;
    else if (st.mode == Stonewt::POUNDS)
        os << "Pounds - " << st.pounds << std::endl;
    else
        os << "Niepoprawny tryb reprezentacji obiektu";
    return os;
}

