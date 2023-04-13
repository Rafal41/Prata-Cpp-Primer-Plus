#include <iostream>
#include <string>
#define ROK 12
int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::string;

    // const char * msc[ROK] = {
    //     "styczen",
    //     "luty",
    //     "marzec",
    //     "kwiecien",
    //     "maj",
    //     "czerwiec",
    //     "lipiec",
    //     "sierpien",
    //     "wrzesien",
    //     "pazdziernik",
    //     "listopad",
    //     "grudzien"
    // };

    string msc[ROK] = {
        "styczen",
        "luty",
        "marzec",
        "kwiecien",
        "maj",
        "czerwiec",
        "lipiec",
        "sierpien",
        "wrzesien",
        "pazdziernik",
        "listopad",
        "grudzien"
    };

    int tab[ROK];
    int suma = 0;

    for (int i = 0; i < ROK ; i++)
    {
        cout << "Podaj sprzedaż za miesiac " << msc[i] << " : ";
        cin >> tab[i];
        suma += tab[i];
    }
    
    cout << "Roczna sprzedaz wyniosla: " << suma << endl;

    return 0;
}

