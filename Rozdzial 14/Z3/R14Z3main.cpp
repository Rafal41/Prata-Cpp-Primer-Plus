// workmi.cpp -- multiple inheritance
// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "R14Z3.h"
#include "Worker.h"

const int SIZE = 3;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Worker * lolas[SIZE];

    for (int ct = 0; ct < SIZE; ct++)
    {
        lolas[ct] = new Worker;
        lolas[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }

    Queue<Worker> kju(SIZE);

    cout << "Is queue empty ? " << kju.isempty() << endl;
    cout << "Is queue full ? " << kju.isfull() << endl;
    cout << "Queue size =  ? " << kju.queuecount() << endl;

    for (int i = 0; i < SIZE; i++)
    {
        kju.enqueue(*lolas[i]);
    }

    cout << "Is queue empty ? " << kju.isempty() << endl;
    cout << "Is queue full ? " << kju.isfull() << endl;
    cout << "Queue size =  ? " << kju.queuecount() << endl;

    Worker temp;
    for (int i = 0; i < SIZE; i++)
    {
        kju.dequeue(temp);
        temp.Show();
    }

    cout << "Is queue empty ? " << kju.isempty() << endl;
    cout << "Is queue full ? " << kju.isfull() << endl;
    cout << "Queue size =  ? " << kju.queuecount() << endl;

    for (int i = 0; i < SIZE; i++)
        delete lolas[i];
        
    cout << "Bye.\n";
    return 0;
}