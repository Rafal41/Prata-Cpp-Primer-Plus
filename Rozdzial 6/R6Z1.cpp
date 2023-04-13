#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
    using namespace std;
    char ch;
    string str;

    cout << "wpisuj dane z klawiatury (@ konczy) ";
    while ((ch = cin.get()) != '@')
    {   
        if (isdigit(ch))
            continue;
        else if (isupper(ch))
            str += tolower(ch);
        else if (islower(ch))
            str += toupper(ch);
    }

    cout << "wpisane znaki to: " << str;
    return 0;
}

