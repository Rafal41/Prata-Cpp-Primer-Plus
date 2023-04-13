// lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double
long double probability(unsigned numbers, unsigned picks);
int main()
{
    using namespace std;
    double total, choices, totalplus, choicesplus;
    cout << "Enter the total number of choices on the game card and the number of picks allowed: ";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "Now enter the total number of choices on the game plus and the number of picks allowed: ";
        while ((cin >> totalplus >> choicesplus) && !(choicesplus <= totalplus))
            cout << "the numbers you entered are not correct. Please enter correct numbers.";
        cout << "You have one chance in ";
        cout << probability(total, choices)*probability(totalplus, choicesplus) ; // compute the odds
        cout << " of winning.\n";
        cout << "Next four numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}
// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ;
    return result;
}