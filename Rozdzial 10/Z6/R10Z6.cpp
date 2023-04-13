#include <iostream>
#include "R10Z6.h"


Move::Move(double a, double b)
{
    x = a;
    y = b;
}

Move::~Move() {}

void Move::Showmove() const
{
    using std::cout;
    using std::endl;

    cout << "x = " << x << " y = " << y << endl;
}


Move Move::Add(const Move & m) const
{
    
    Move obnew(x + m.x, y + m.y);
    return obnew;

}


void Move::Reset(double a, double b)
{
    x = a;
    y = b;
}

