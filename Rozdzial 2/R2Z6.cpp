#include <iostream>
#define LYRSTOASTR 63240

double lighttoastr(double ligthyrs);
int main(void)
{
    using namespace std;
    double light;

    cout << "Podaj liczbe lat świetlnych: ";
    cin >> light;
    
    cout << light << " lat świetlnych = " << lighttoastr(light) << " jednostek astronomicznych" << endl;

    return 0;
}

double lighttoastr(double ligthyrs)
{
    return LYRSTOASTR*ligthyrs;
}