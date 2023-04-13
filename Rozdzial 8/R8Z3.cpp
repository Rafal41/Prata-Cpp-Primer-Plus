#include <iostream>
#include <string>
#include <cctype>

void ustaw(std::string & str);

int main(void)
{
    using namespace std;
    string lan;
    cout << "Podaj lancuch (q, aby skonczyc): ";
    while ( getline(cin, lan) && lan != "q")
    {
        ustaw(lan);
        cout << "Nastepny lancuch (q, aby skonczyc): ";
    }

    cout << "Do widzenia";

    return 0;
}

void ustaw(std::string & str)
{
    int size = str.size();
     for(int i = 0; i <= size; i++)
        str[i] = toupper(str[i]);

    std::cout << str << std::endl;
}

