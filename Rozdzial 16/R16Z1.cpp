#include <iostream>
#include <string>

bool check(std::string & str);

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    std::string word;
    cout << "Podaj slowo: ";
    cin >> word;
    check(word) ? cout << "Palindrom" : cout << "Not palindrom";

    return 0;
}

bool check(std::string & str)
{
    int size = str.size();
    for (int i = 0, j = size - 1; i != j && i <=j; i++, j--)
        if (str[i] != str[j])
            return false;
    return true;

    // std::string::iterator itf, itb;
    // for (itf = str.begin(), itb = str.end() - 1; itf != itb; itf++, itb--)
    //     if (*itf != *itb)
    //         return false;
    // return true;
}

