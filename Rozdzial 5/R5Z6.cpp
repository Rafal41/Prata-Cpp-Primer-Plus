#include <iostream>
#include <string>
#define ROK 12
#define OKRES 3
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

    string msc[OKRES][ROK] = {{
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
        },
        {
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
        },
        {
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
        }
    };

    int tab[OKRES][ROK];
    int sumatot = 0;
    int sumarok = 0;

    for (int i = 0; i < OKRES; i++)
    {
        sumarok = 0;
        for (int j = 0; j < ROK ; j++)
        {
            cout << "Podaj sprzedaż za miesiac " << msc[i][j] << " : ";
            cin >> tab[i][j];
            sumarok += tab[i][j];
        }
        sumatot += sumarok;
        cout << "Roczna sprzedaz wyniosla: " << sumarok << endl;
    }
    
    cout << "Calkowita sprzedaz wyniosla: " << sumatot << endl;

    return 0;
}

