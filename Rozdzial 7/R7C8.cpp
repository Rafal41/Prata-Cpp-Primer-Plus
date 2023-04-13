#include <iostream>
int replace (char * str, char c1, char c2);
int main(void)
{
    using namespace std;
    char ch1, ch2;
    char lancuch[40];

    cout << "podaj lancuch: ";
    cin >> lancuch;
    cout << "podaj znak ktory nalezy zastapic: ";
    cin >> ch1;
    cout << "podaj nowy znak: ";
    cin >> ch2;
    cout << lancuch << " " << ch1 << " " << ch2 <<endl;
    replace (lancuch, ch1,ch2); 
    return 0;
}

int replace (char * str, char c1, char c2)
{   
    using namespace std;
    unsigned count = 0;
    cout << *str << " " << c1 << " " << c2 <<endl;
    while (*str)
    {   
        if (*str == c1)
        {
            *str = c2;
            count++;
        }
        str++;
    }
    cout << "liczba zastapien to: "<< count <<endl;
    return count; 
}