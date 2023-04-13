#include <iostream>
#include <cstring>
#include <new>
struct chaff 
{
    char dross[20];
    int slag;
};
char buffer[40*sizeof(char) + 2*sizeof(int)];
int main(void)
{
    using namespace std;
    chaff * tab = new (buffer) chaff[2];
    char temp[20];
    for (int i = 0; i < 2; i++)
    {
        cout << "Podaj smiec: ";
        cin >> temp;
        temp[20] = '\0';
        strncpy(tab[i].dross, temp,20);

        cout << "Podaj jego wage: ";
        cin >> tab[i].slag;
    }

    for (int i = 0; i < 2; i++)
        cout << "smiec = " << tab[i].dross << ", waga = " << tab[i].slag << endl;

    return 0;

}