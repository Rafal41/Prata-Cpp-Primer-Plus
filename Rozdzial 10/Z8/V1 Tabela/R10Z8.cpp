#include <iostream>
#include "R10Z8.h"

List::List()
{
    m_pos = 0;
}

List::~List() {}

void List::Addtolist(Item & item) 
{
    if (Fulllist())
        std::cout << "Lista jest pelna. Nie mozna dodac nowego elementu\n";
    else
    {
        m_node[m_pos].m_number = item;
        m_pos++;
    }
} 

bool List::Emptylist()
{
    return m_pos == 0;
}

bool List::Fulllist()
{
    return m_pos == MAX;
}

void List::Visit(void (*pf)(Item & item))
{
    int temp = 0;
    while (temp < m_pos)
    {
        (*pf)(m_node[temp].m_number);
        temp++;
    }
}