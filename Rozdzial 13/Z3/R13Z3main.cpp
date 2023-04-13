// usebrass2.cpp -- polymorphic example
// compile with brass.cpp
#include <iostream>
#include <string>
#include "R13Z3.h"

const int CLIENTS = 3;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    abstractDMA * p_clients[CLIENTS];
    char temp[40];
    int tempnum;
    char kind;

    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "Enter label: ";
        cin.getline(temp, 40);
        cout << "Enter rating: ";
        cin >> tempnum;

        cout << "Enter 1 for baseDMA, 2 for lacksDMA and 3 for hasDMA: ";
        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
            cout <<"Enter either 1, 2 or 3: ";
        if (kind == '1')
            p_clients[i] = new baseDMA(temp, tempnum);
        else if (kind == '2')
        {
            char tempcolor[40];
            cout << "Enter color: ";
            cin >> tempcolor;
            p_clients[i] = new lacksDMA(tempcolor, temp, tempnum);
        }
        else
        {
            char tempstyle[40];
            cout << "Enter style: ";
            cin >> tempstyle;
            p_clients[i] = new hasDMA(tempstyle, temp, tempnum);
        }
        while (cin.get() != '\n')
            continue;
    }

    cout << endl;
    for (int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->View();
        cout << endl;
    }
    
    for (int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i]; // free memory
    }

    cout << "Done.\n";
    return 0;
}