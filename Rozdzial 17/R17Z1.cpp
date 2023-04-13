#include <iostream>

int main(void)
{   
    using namespace std;
    int count = 0;
    char ch;
    cout << "Podaj jakis tekst, a ja zlicze jego znaki. Znak $ konczy" << endl;
    while (cin.get(ch) && ch != '$')    
        count++;
    cin.putback(ch);
    cout << " liczba znakow wynosi = " << count << endl;

    return 0;
}