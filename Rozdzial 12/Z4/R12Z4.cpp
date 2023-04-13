// stack.cpp -- Stack member functions
#include "R12Z4.h"
#include <iostream>

Stack::Stack(int n) // create an empty stack
{
    pitems = new Item[n];
    for (int i = 0; i < n; i++)
        pitems[i] = 0;
    size = n;
    top = 0;
}

Stack::Stack(const Stack & st)
{
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false;
}

Stack & Stack::operator=(const Stack & st)
{
    if (this == &st)
        return *this;

    delete [] pitems; 
      
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = st.top;

    return *this;
}

void Stack::show() const
{
    for (int i = 0; i < size; i++)
        std::cout << pitems[i] << "  ";
    std::cout << '\n';
}