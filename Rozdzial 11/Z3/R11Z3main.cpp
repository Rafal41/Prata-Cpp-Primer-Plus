// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "R11Z3.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;

    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned int cycles;
    unsigned long steptot = 0;
    unsigned long minstp, maxstp;

    cout << "Podaj ilosc prob z jakiej przeprowadzony ma byc eksperyment: ";
    cin >> cycles;

    if (cycles == 0)
    {
        cout << "podano niepoprawna liczbe prob";
        return 0;
    }
    while (cin.get() != '\n')
        continue;    
    

    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;


        for (int i = 0; i < cycles; i++)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }

            steptot += steps;

            if (i == 0)
            {
                minstp = steps;
                maxstp = steps;
            }
            else
            {
                minstp = minstp < steps ? minstp : steps;
                maxstp = maxstp > steps ? maxstp : steps;
            }
          
            cout << "steps   total   min     max"<< endl;
            cout << steps << "    " << steptot << "    " << minstp << "    " <<  maxstp << endl;
        // wypis na konsole
        // result.rect_mode();
        // cout << "After " << steps << " steps, the subject "
        // "has the following location:\n";
        // cout << result << endl;
        // result.polar_mode();
        // cout << " or\n" << result << endl;
        // cout << "Average outward distance per step = "
        // << result.magval()/steps << endl;
            steps = 0;
            result.reset(0.0, 0.0);
        }

        cout << "Srednia liczba krokow dla " << cycles << " cykli to " << steptot / cycles << endl;
        cout << "Minimalna liczba krokow dla " << cycles << " cykli to " << minstp << endl;
        cout << "Maksymalna liczba krokow dla " << cycles << " cykli to " << maxstp << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}