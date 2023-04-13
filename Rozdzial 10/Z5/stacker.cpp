// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype> // or ctype.h
#include "stack.h"

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    Item po;
    double total = 0.0;
    cout << "Please enter A to add a client order, P to process an order, or Q to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;

        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch(ch)
        {
            case 'A':
            case 'a':   cout << "Enter a client name to add: ";
                        cin.getline(po.fullname,NAMESIZE);
                        // cin.get();
                        cout << "Enter a client payment: ";
                        cin >> po.payment;
                        if (st.isfull())
                            cout << "stack already full\n";
                        else
                            st.push(po);
                        break;
            case 'P':
            case 'p':   if (st.isempty())
                        cout << "stack already empty\n";
                        else 
                        {
                            st.pop(po);
                            cout << "PO #" << po.fullname << " popped\n";
                            total += po.payment;
                            cout << "total = " << total << endl;
            
                        }
                        break;
        }
        cout << "Please enter A to add a purchase order, P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}