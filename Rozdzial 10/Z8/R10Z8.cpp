#include <iostream>
#include "R10Z8.h"

List::List()
{
    m_node.m_number = 0;
    m_node.m_next = NULL;
    m_headptr = NULL;
    m_endptr =  NULL;
    m_amount = 0;
}

List::~List() 
{
    Node * psave;
    while (m_headptr != NULL)
    {
        psave  = m_headptr->m_next;
        delete m_headptr;
        m_headptr = psave;
    }
}


void List::Addtolist(Item & item) 
{
    if (Fulllist())
        std::cout << "Lista jest pelna. Nie mozna dodac nowego elementu\n";
    else
    {

        Node * temp = new Node;
        if (temp == NULL)
        {   
            std::cout << "Brak pamieci. Nie mozna dodac nowego elementu\n";
            return;
        }

        temp->m_number = item;
        temp->m_next = NULL;
        if(m_amount == 0)
            m_headptr = temp;
        else
        {
            m_endptr->m_next = temp;
        }
            
        m_amount++;
        // delete temp;
    }
} 

bool List::Emptylist()
{
    return m_amount == 0;
}

bool List::Fulllist()
{
    return m_amount == MAX;
}

void List::Visit(void (*pf)(Item & item))
{
    Node * trvnode = m_headptr;
    while (trvnode != NULL)
    {
        (*pf)(trvnode->m_number);
        trvnode = trvnode->m_next; 
    }
}