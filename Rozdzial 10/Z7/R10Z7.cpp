#include <iostream>
#include <cstring>
#include "R10Z7.h"

Plorg::Plorg(const char * name, const int coef)
{
    int length = strlen(name);
    int size = length < Len ? length: Len - 1;
    strncpy(m_name,name, size);
    m_name[size] = '\0';
    m_coef = coef;
}

Plorg::~Plorg() {}

void Plorg::Setcoef(const int coef)
{
    m_coef = coef;
}

void Plorg::Showplorg() const
{
    std::cout << "name= " << m_name << " coef= " << m_coef << std::endl;
}