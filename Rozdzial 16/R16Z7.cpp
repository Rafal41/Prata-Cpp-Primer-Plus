#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>


std::vector<int> Lotto(const int total, const int choice);
void show(int var) { std::cout << var << " ";}
int main(void)
{
    using namespace std;

    vector<int> winners;
    winners = Lotto(49,6);
    for_each(winners.begin(), winners.end(), show);
    return 0;
}

std::vector<int> Lotto(const int total, const int choice)
{
    using namespace std;
    std::srand(std::time(0));
    vector<int> temp(total);
    for (int i = 0; i < total; i++)
        temp[i]= i + 1;
    random_shuffle(temp.begin(), temp.end());
    vector<int> result(temp.begin(), temp.begin() + choice);
    sort(result.begin(), result.end());
    return result;
}