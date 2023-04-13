#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;
template <class T> int reduce(T ar[], int n);
template <class T> void Show(T & num) { cout << num << " ";}
int main(void)
{
    const int Size = 10;
    long tab[Size];
    for (int i = 0; i < Size; i++)
        tab[i] = (rand() % 10);

    int nsize = reduce(tab,Size);
    cout << "wymiar nowej tabeli wynosi: " << nsize << endl;

    string tabstr[Size] = { "apiary", "beetle", "cereal", "danger", "ensign", "florid", "garage", "health", "insult", "jackal"};
    random_shuffle(tabstr, tabstr + Size);
    nsize = reduce(tabstr,Size);
    cout << "wymiar nowej tabeli wynosi: " << nsize << endl;
    return 0;
}

template <class T> int reduce(T ar[], int n)
{
    cout << "tabela nieposortowana\n";
    for_each(ar, ar + n,Show<T>);               // trzeba skonkretyzowac funkcje Show dla T
    cout << '\n';

    cout << "tabela posortowana\n";
    sort(ar, ar + n);
    for_each(ar, ar + n,Show<T>);
    cout << '\n';

    cout << "tabela skrócona\n";
    T * ptr = unique(ar, ar + n);
    for_each(ar, ptr,Show<T>);
    cout << '\n';

    int nsize = ptr - ar;

    return nsize;

}

