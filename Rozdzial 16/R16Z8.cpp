#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

void show(std::string name) { std::cout << name << '\n';}
int main(void)
{
    using namespace std;

    vector<string> Bpeers;
    string temp;
    cout << "Podaj znajomych ktorych zaprasza Bolek (q kończy) " << endl; 
    while (getline(cin, temp) && temp != "q")
    {
        temp[0]= toupper(temp[0]);
        Bpeers.push_back(temp);
        cout << "podaj nastepnego znajomego Bolka (q kończy) "<< endl; 
    }
    sort(Bpeers.begin(), Bpeers.end());
    cout << "Oto lista kulegow Bolka: " << endl;
    for_each(Bpeers.begin(), Bpeers.end(), show);

    vector<string> Lpeers;
    cout << "Podaj znajomych ktorych zaprasza Lolek (q kończy) "<< endl; 
    while (getline(cin, temp) && temp != "q")
    {
        Lpeers.push_back(temp);
        cout << "podaj nastepnego znajomego Lolka (q kończy) "<< endl; 
    }
    sort(Lpeers.begin(), Lpeers.end());
    cout << "Oto lista kulegow Lolka: " << endl;
    for_each(Lpeers.begin(), Lpeers.end(), show);

    vector<string> guests(Bpeers);
    guests.insert(guests.end(), Lpeers.begin(), Lpeers.end());
    sort(guests.begin(), guests.end());
    vector<string>::iterator iterend = unique(guests.begin(), guests.end());
    cout << "Oto wspolna lista znajomych Bolka i Lolka: " << endl;
    for_each(guests.begin(), iterend, show);

    return 0;
}

