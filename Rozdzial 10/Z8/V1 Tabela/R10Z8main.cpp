#include <iostream>
#include "R10Z8.h"
void show(Item & item);
int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    List list1;

    if (list1.Emptylist())
        cout << "Lista jest pusta\n";
    else if (list1.Fulllist())
        cout << "Lista jest pelna\n";

    Item temp;
    cout << "podaj liczbe ktora chcesz dodac do listy (q konczy dodawnie)"<< endl;
        
    while (cin >> temp)
    {
        list1.Addtolist(temp);
        cout << "podaj nastepna liczbe ktora chcesz dodac do listy (q konczy dodawnie)"<< endl;
    }

    list1.Visit(show);

    return 0;
}

void show(Item & item)
{
    std::cout<< "Liczba na tej pozycji w liscie to: " << item <<std::endl;
}