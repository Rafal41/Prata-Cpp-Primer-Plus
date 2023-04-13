#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;
int reduce(long ar[], int n);
void Show(long num) { cout << num << " ";}
int main(void)
{
    const int Size = 10;
    long tab[Size];
    for (int i = 0; i < Size; i++)
        tab[i] = (rand() % 10);

    for (int i = 0; i < Size; i++)
        cout << tab[i] << " ";
    cout << '\n';

    int nsize = reduce(tab,Size);
    cout << "wymiar nowej tabeli wynosi: " << nsize << endl;
    
    return 0;
}

int reduce(long ar[], int n)
{
    sort(ar, ar + n);
    for_each(ar, ar + n,Show);
    cout << '\n';
    long * ptr = unique(ar, ar + n);
    for_each(ar, ptr,Show);
    cout << '\n';
    int nsize = ptr - ar;

    return nsize;

}

