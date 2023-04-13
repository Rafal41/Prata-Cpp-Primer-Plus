// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype> // or ctype.h
#include "R12Z4.h"
using namespace std;
int main()
{
    using namespace std;
    Stack ob1; // create an empty stack
    ob1.push(5);
    ob1.push(4);
    ob1.push(12);
    ob1.push(1);
    ob1.push(15);
    ob1.push(33);
    ob1.push(13);
    ob1.push(32);
    ob1.push(0);
    ob1.push(9);

    ob1.show();
    Item x;
    ob1.pop(x);
    ob1.show();

    cout << "x= " << x << endl;



    Stack ob2(5);
    ob2.push(33);
    ob2.push(13);
    ob2.push(32);
    ob2.push(0);
    ob2.push(9);
    
    ob2.show();

    ob2 = ob1;
    ob2.show();

    Stack ob3 = ob1;
    ob3.show();
    return 0;
}