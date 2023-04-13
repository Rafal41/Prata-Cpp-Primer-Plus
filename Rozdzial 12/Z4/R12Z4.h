// stack.h -- class definition for the stack ADT
#ifndef R12Z4_H_
#define R12Z4_H_

typedef unsigned long Item;

class Stack
{
    private:
        enum {MAX = 10}; // constant specific to class
        Item * pitems; // holds stack items
        int size;
        int top; // index for top stack item
    public:
        Stack(int n = MAX);
        Stack(const Stack & st);
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        // push() returns false if stack already is full, true otherwise
        bool push(const Item & item); // add item to stack
        // pop() returns false if stack already is empty, true otherwise
        bool pop(Item & item); // pop top into item
        Stack & operator=(const Stack & st);
        void show() const;
};

#endif