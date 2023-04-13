//arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <string>

const int Seasons = 4;
const char * Snames[Seasons] =
{"Spring", "Summer", "Fall", "Winter"};

struct seasons {
    double exp[Seasons];
};

void fill(seasons * pa);
void show(seasons * pa);

int main()
{
    seasons expenses;
    fill(&expenses);
    show(&expenses);
    return 0;
}

void fill(seasons * pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->exp[i];
    }
}

void show(seasons * pa)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << pa->exp[i] << endl;
        total += pa->exp[i];
    }
    cout << "Total Expenses: $" << total << endl;
}