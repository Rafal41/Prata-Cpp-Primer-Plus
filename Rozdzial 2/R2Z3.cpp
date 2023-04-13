#include <iostream>

void firstfnc(void);
void secondfnc(void);

int main(void)
{
    firstfnc();
    firstfnc();
    secondfnc();
    secondfnc();
    
    return 0;
}

void firstfnc(void)
{   
    using namespace std;
    cout << "Entliczek pentliczek" << endl;
}

void secondfnc(void)
{   
    using namespace std;
    cout << "Czerwony stoliczek" << endl;
}