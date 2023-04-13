// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;
// function prototypes
double * fill_array(double * begin, double * end);
void show_array(double * begin, double * end); // don't change data
void revalue(double r, double * begin, double * end);

int main()
{
    using namespace std;
    double properties[Max];
    double * size = fill_array(properties, properties + Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
        }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double * fill_array(double * begin, double * end)
{
    using namespace std;
    double temp;
    double * wsk;
    int i;
    for (wsk = begin, i = 0; wsk < end; wsk++, i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
                break;
        }
        else if (temp < 0) // signal to terminate
            break;
        *wsk = temp;
    }
    return wsk;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(double * begin, double * end)
{
    using namespace std;
    int i;
    for (double *wsk = begin, i = 0; wsk < end; wsk++, i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *wsk << endl;
    }
}
// multiplies each element of ar[] by r
void revalue(double r, double * begin, double * end)
{
    for (double *wsk = begin; wsk < end; wsk++)
        *wsk *= r;
}