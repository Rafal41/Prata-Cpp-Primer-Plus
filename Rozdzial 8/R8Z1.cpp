#include <iostream>
int count = 0;

void fun(const char * str, int n = 0);

int main(void)
{
    using namespace std;
    char str[40] = "Czesc wam wszytkim!";
    for (int i = 0; i < 5; i++)
        fun(str);
    
    fun(str, 1);
    return 0;
}

void fun(const char * str, int n)
{
    using namespace std;
    int m;
    if (n != 0)
        m = count;
    else 
        m = 1;

    for (int i = 0; i < m; i++)
        cout << str << endl;
    count++;
}
