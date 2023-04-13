//arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <string>

const int Seasons = 4;
const char * Snames[Seasons] =
{"Spring", "Summer", "Fall", "Winter"};

void fill(double * pa);
void show(double * pa);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double * pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> *(pa + i);
    }
}

void show(double * pa)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << *(pa + i) << endl;
        total += *(pa + i);
    }
    cout << "Total Expenses: $" << total << endl;
}