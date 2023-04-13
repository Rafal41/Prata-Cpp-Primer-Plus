#include "R13Z4.h"

int main(void)
{
    Port ob1("Gallo", "lekko brazowy", 20);
    VintagePort ob2("Cockburn", "slomkowy", 50, "wybitne", 1945);

    ob1.Show();
    ob2.Show();

    cout << ob1 << endl;
    cout << ob2 << endl;

    ob1 += 10;
    ob2 += 10;

    cout << ob1 << endl;
    cout << ob2 << endl;

    ob1 -= 20;
    ob2 -= 20;

    cout << ob1 << endl;
    cout << ob2 << endl;

    cout << ob1.BottleCount() << endl;
    cout << ob2.BottleCount() << endl;


    Port kop(ob1);
    cout << "kopiowanie " << kop << endl;

    Port przyp;
    cout << przyp << endl;
    przyp = kop;
    cout << przyp << endl;

    VintagePort kopvp(ob2);
    cout << kopvp << endl;

    VintagePort przypvp;
    cout << przypvp << endl;
    przypvp = kopvp;
    cout << przypvp << endl;

    ob1 = ob2;
    cout << ob1 << endl;
    cout << ob2 << endl;

    Port mix(ob2);
    cout << ob1 << endl;
    cout << ob2 << endl;



    return 0;
}