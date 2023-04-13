#include <iostream>
#include "R10Z8.h"

List::List()
{
    m_headptr = NULL;
    m_endptr =  NULL;
}

List::~List() 
{
    Node * temp;
    while (m_headptr != NULL)
    {
        temp = m_headptr->m_next;
        delete m_headptr;
        m_headptr = temp;
    }
}

void List::Addtolist(Item & item) 
{
    if (Fulllist())
        std::cout << "Lista jest pelna. Nie mozna dodac nowego elementu\n";
    else
    {
        Node * temp = new Node;
        temp->m_number = item;
        temp->m_next = NULL;
        if(m_headptr == NULL)
        {
            m_headptr = temp;
            m_endptr = temp;
        }
        else
        {
            m_endptr->m_next = temp;
            m_endptr = temp;
        }
            
    }
} 

bool List::Emptylist()
{
    return m_headptr == 0;
}

bool List::Fulllist()
{
    Node * temp = m_headptr;
    int count = 0;
    while (temp != NULL)
        {
            count++;
            temp = temp->m_next;
        }

    return count == MAX;
}

void List::Visit(void (*pf)(Item & item))
{
    Node * temp = m_headptr;
    while (temp != NULL)
    {
        (*pf)(temp->m_number);
        temp = temp->m_next; 
    }
}