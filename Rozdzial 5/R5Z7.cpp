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

    struct car {
        string marka;
        unsigned int rokbud;
    };

    unsigned int liczbadoskat;
    cout << "Ile samochodow chcesz skatalogowac? ";
    cin >> liczbadoskat;
    
    car *wskcar = new car[liczbadoskat];
    for (int i = 0; i < liczbadoskat; i++)
    {
        cin.get();
        cout << "Samochod #" << i+1 << endl;
        cout << "Prosze podac marke: ";
        getline(cin,wskcar[i].marka); 
        cout << "Rok produkcji: ";
        cin >> wskcar[i].rokbud;
    }

    for (int i = 0; i < liczbadoskat; i++)
        cout << wskcar[i].rokbud << " " << wskcar[i].marka << endl;

    return 0;
}

