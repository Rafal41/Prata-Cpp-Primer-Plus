// workmi.cpp -- multiple inheritance
// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "R14Z4.h"

const int SIZE = 5;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person * lolas[SIZE];
    int ct;

    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the  category:\n"
        << "g: gunslinger p: pokerplayer "
        << "b: baddude q: quit\n";
        cin >> choice;
        
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;

        switch(choice)
        {
            case 'g':   lolas[ct] = new Gunslinger;
                        break;
            case 'p':   lolas[ct] = new PokerPlayer;
                        break;
            case 'b':   lolas[ct] = new BadDude;
                        break;
        }
        cin.get();
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    for (i = 0; i < ct; i++)
        delete lolas[i];

    cout << "Bye.\n";
    return 0;
}

// int main(void)
// {
//     Gunslinger ob1("Rafal Nowak", 5, 3);
//     PokerPlayer ob2("Tomasz Hajnos");

//     ob1.Show();
//     ob2.Show();

//     BadDude ob3("Krzys Kaczmarczyk",2, 1);
//     ob3.Show();

//     return 0;
// }