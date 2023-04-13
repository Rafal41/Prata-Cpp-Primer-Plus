#include <iostream>
#include <cstring>
#define SIZEINT 5
#define SIZEDOUBLE 4
#define SIZECHAR 4
#define SIZESTR 40

template <typename T>
T maxn(T * n, const int m);

template <> 
char * maxn<char *>(char **tab, const int size);
// char * test(char (*tab)[SIZESTR], int size);
int main(void)
{
    using namespace std;
    int tab[SIZEINT];
    double tabdouble[SIZEDOUBLE];
    char * tabchar[SIZECHAR];

    cout << "Podaj 5 wartosci typu int: ";
    for (int i = 0; i < SIZEINT; i++)
        cin >> tab[i];
    cout << "Wartosc maksymalna ze zbioru to: " << maxn(tab,SIZEINT) << endl;

    cout << "Podaj 4 wartosci typu double: ";
    for (int i = 0; i < SIZEDOUBLE; i++)
        cin >> tabdouble[i];
    cout << "Wartosc maksymalna ze zbioru to: " << maxn(tabdouble, SIZEDOUBLE) << endl;
    getchar();
    
    cout << "Podaj 4 lancuchy: ";
    for (int i = 0; i < SIZECHAR; i++)
    {
        tabchar[i] = new char[SIZESTR];
        cin.getline(tabchar[i],SIZESTR);
    }
        
    for (int i = 0; i < SIZECHAR; i++)
        cout << tabchar[i]<< endl;
   
    cout << "Najdluzszy lancuch ze zbioru to: " << maxn(tabchar, SIZECHAR) << endl;

    for (int i = 0; i < SIZECHAR; i++)
        delete tabchar[i];
    return 0;
}


template <typename T>
T maxn( T * n, const int m)
{
    T max = n[0];
    for (int i = 1; i < m; i++)
        max = n[i] > max? n[i]: max;
    return max;
}


template <>  char * maxn<char *>( char **tab, const int size)
{
    char * max = tab[0];
    for (int i = 0; i < size; i++)
        max = strlen(tab[i]) > strlen(max) ? tab[i]: max;
    
    return max;
}


// char * test(char *(*(tab)), int size)
// {
//     char * max = tab[0];
//     for (int i = 0; i < size; i++)
//         max = strlen(tab[i]) > strlen(max) ? tab[i]: max;
    
//     return max;
// }