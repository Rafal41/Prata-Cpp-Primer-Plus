// dma.cpp --dma class methods
#include "R13Z3.h"
#include <iostream>
#include <cstring>
using namespace std;

// abstractDMA methods
abstractDMA::abstractDMA(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

abstractDMA::abstractDMA(const abstractDMA & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

abstractDMA::~abstractDMA()
{
    delete [] label;
}

abstractDMA & abstractDMA::operator=(const abstractDMA & rs)
{
    if (this == &rs)
        return *this;

    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

void abstractDMA::View() const
{
    cout << "Label: " << label << std::endl;
    cout << "Rating: " << rating << std::endl;

}
std::ostream & operator<<(std::ostream & os, const abstractDMA & rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// baseDMA methods
baseDMA::baseDMA(const char * l, int r) : abstractDMA(l,r)
{
   
}

baseDMA::baseDMA(const baseDMA & rs) : abstractDMA(rs)
{

}

baseDMA::~baseDMA()
{
    // abstractDMA::~abstractDMA();
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    
    if (this == &rs)
        return *this;
    abstractDMA::operator=(rs);

    return *this;
}

void baseDMA::View() const
{
    abstractDMA::View();
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << (const abstractDMA &) rs; 
    return os;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r) : abstractDMA(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const abstractDMA & rs): abstractDMA(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
    abstractDMA::View();
    cout << "Color: " << color << std::endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ls)
{
    os << (const abstractDMA &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r) : abstractDMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const abstractDMA & rs) : abstractDMA(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : abstractDMA(hs) // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;

    abstractDMA::operator=(hs); // copy base portion
    delete [] style; // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

void hasDMA::View() const
{
    abstractDMA::View();
    cout << "Style: " << style << std::endl;
}
std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
    os << (const abstractDMA &) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}