#include <iostream>
#define LYRSTOASTR 63240

void displres(int hrs, int min);
int main(void)
{
    using namespace std;
    int hours, minutes;

    cout << "Podaj liczbe godzin: ";
    cin >> hours;
    cout << "Podaj liczbe minut: ";
    cin >> minutes;

    displres(hours, minutes);

    return 0;
}

void displres(int hrs, int min)
{
    using namespace std;

    cout << "Czas: " << hrs << ":" << min << endl;
}