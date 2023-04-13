#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>

int main(void)
{
    using namespace std;
    const int Size = 10000000;
    srand(time(0));
    vector<int> vi0;
    int temp;
    for(int i = 0; i < Size ; i++)
    {
        temp = rand() % 500;
        vi0.push_back(temp);
    }

    vector<int> vi(vi0);
    list<int> li;
    li.insert(li.begin(),vi0.begin(), vi0.end());
    cout << "vector size: " << vi.size() <<endl;
    cout << "list size: " << li.size() <<endl;
    
    // sort vector
    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "Sortowanie obiektu vector" << endl;
    cout << "Czas jaki uplynal w sekundach to: " << (double) (end - start)/CLOCKS_PER_SEC << endl;

    // sort list
    start = clock();
    li.sort();
    end = clock();
    cout << "Sortowanie obiektu list" << endl;
    cout << "Czas jaki uplynal w sekundach to: " << (double) (end - start)/CLOCKS_PER_SEC << endl;

    // sort list through vector
    li.clear();
    li.insert(li.begin(),vi0.begin(), vi0.end());

    start = clock();
    copy(li.begin(), li.end(), vi.begin());
    sort(vi.begin(), vi.end());
    copy(vi.begin(), vi.end(), li.begin());
    end = clock();
    cout << "Sortowanie obiektu list przez vector" << endl;
    cout << "Czas jaki uplynal w sekundach to: " << (double) (end - start)/CLOCKS_PER_SEC << endl;



    return 0;
}