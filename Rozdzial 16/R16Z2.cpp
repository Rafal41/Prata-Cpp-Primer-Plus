#include <iostream>
#include <string>
#include <cctype>

bool check(std::string & str);
// void upper(std::string & str);
int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    std::string word;
    cout << "Podaj slowo: ";
    getline(cin, word);
    // for (int i = 0; i < word.size(); i++)
        // cout << (char)toupper(word[i]);

    check(word) ? cout << "Palindrom" : cout << "Not palindrom";

    return 0;
}

bool check(std::string & str)
{
    std::string temp;
    std::string wht = " \t";
    int ps, start;
    start = 0;
    while((ps = str.find_first_of(wht, start)) != std::string::npos)
    {
        temp.append(str, start, ps-start);
        start = ps+1;
    }
    temp.append(str, start, ps-start);

    std::cout << temp;
    int size = temp.size();
    for (int i = 0, j = size - 1; i != j && i <= j; i++, j--)
        if (toupper(temp[i]) != toupper(temp[j]))
        {
            std::cout << "i= " << i <<" j=" << j << std::endl;
            std::cout << "str[i]= " << temp[i] <<" str[j]= " << temp[j] << std::endl;
            return false;
        }
    
    //  for (int i = 0, j = size - 1; i != j && i <= j; i++, j--)
    //     if (!isalnum(str[i]))
    //         i++;
    //     else if (!isalnum(str[j]))
    //         j++;
    //     else if (toupper(str[i]) != toupper(str[j]))
    //         {
    //             std::cout << "i= " << i <<" j=" << j << std::endl;
    //             std::cout << "str[i]= " << str[i] <<" str[j]= " << str[j] << std::endl;
    //             return false;
    //         }j
    //     else
    //         return true;


    return true;

}




