// tempover.cpp -- template overloading
#include <iostream>

template <typename T> // template A
int SumArray(T arr[], int n);

template <typename T> // template B
int SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    // things is an array of int
 
    cout << "Mr. E's things sum: " << SumArray(things, 6) << endl;
    cout << "Mr. E's debts sum: " << SumArray(pd, 3) << endl;

    return 0;
}

template <typename T>
int SumArray(T arr[], int n)
{
    using namespace std;
    int total=0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

template <typename T>
int SumArray(T * arr[], int n)
{
    using namespace std;
    int total = 0;
    for (int i = 0; i < n; i++)
        total += *arr[i];
    return total;
}