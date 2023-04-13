#include <iostream>
#include <cstring>

using namespace std;

struct stringy {
    char * str;
    int ct;
};

void set(stringy & instance, const char * str);
void show(const stringy & instance, int num = 1);
void show(const char * str, int num = 1);
int main(void)
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Gotowe!");
    delete beany.str;
    return 0;

}

void set(stringy & instance, const char * str)
{
    int size = strlen(str);
    char * wsk = new char[size+1];
    instance.str = wsk;
    strncpy(instance.str, str, size);
    instance.str[size]= '\0';
    instance.ct = size;
}

void show(const stringy & instance, int num)
{
    for (int i = 0; i < num; i++)
        std::cout << instance.str << std::endl;
}

void show(const char * str, int num)
{
    for (int i = 0; i < num; i++)
        std::cout << str << std::endl;
}

