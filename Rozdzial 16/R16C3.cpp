#include <iostream>
#include <string>
#include <cctype>
#include <memory>

void upper(std::string & str);
int main(void)
{
    using std::cout;
    using std::endl;

    std::string strr("test");
    cout << strr << endl;
    upper(strr);
    cout << strr << endl;
 
    return 0;
}

void upper(std::string & str)
{
    int size = str.size();
    char tab[size+1];
    
    const char * ptr = str.c_str();
    for (int i = 0; i < size; i++)
        tab[i] = toupper(*(ptr + i));

    str = tab;
}

