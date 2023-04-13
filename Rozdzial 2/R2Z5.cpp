#include <iostream>
#define CTOFFCT 1.8
#define CTOFADD 32

double celctofahr(double temp);
int main(void)
{
    using namespace std;
    double temperature;

    cout << "Podaj temperature w stopniach celsjusza: ";
    cin >> temperature;
    
    cout << temperature << " stopnie Celsjusza to " << celctofahr(temperature) << " stopnie Farherneita"<< endl;

    return 0;
}

double celctofahr(double temp)
{
    return CTOFFCT *temp + CTOFADD;
}