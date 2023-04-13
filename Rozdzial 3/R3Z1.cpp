#include <iostream>

int main(void)
{
    using namespace std;
    float wzrost;
    const float fttocm = 30.48;
    const float intocm = 2.54;
    int stopy;
    float cale;

    cout << "Podaj wzrost w centymetrach: ";
    cin >> wzrost;
    stopy = wzrost / fttocm;
    cale = (wzrost - stopy*fttocm)/intocm;

    cout << wzrost << "cm to " << stopy << "ft "<< cale << "in";

    return 0;
}

