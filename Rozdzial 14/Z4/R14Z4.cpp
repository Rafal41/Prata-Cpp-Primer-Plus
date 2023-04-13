#include "R14Z4.h"

void Person::Set()
{
    Get();
}

void Gunslinger::Show() const
{
    Person::Data();
    Data();
}

void Gunslinger::Set()
{
    cout << "Kategoria Gunslinger\n";
    Person::Get();
    Get();
}

void Gunslinger::Data() const
{
    cout << "Czas wyciagnieca rewolweru: " << time << endl;
    cout << "Liczba naciec na rewolwerze: " << cuts << endl;
}

void Gunslinger::Get()
{   
    cout << "Podaj ilosc naciec na rewolwerze: ";
    cin >> cuts;
    cout << "Podaj czas wyciagniecia rewolweru: ";
    cin >> time;
    while (cin.get() != '\n')
        continue;
}


const char * Card::karty[Card::Set] = { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
const char * Card::kolory[Card::Types] = { "Spades", "Hearts", "Clubs", "Diamonds"};

Card::Card()
{
    srand(time(0));
    num = rand() % 13;
    kolor = rand() % 4;
}

void Card::Show() const
{
    cout << "typ karty: " << karty[num] << endl;
    cout << "kolor karty: " << kolory[kolor] << endl;
}

void PokerPlayer::Show() const
{
    Person::Data();
    Data();
}

void PokerPlayer::Set()
{
    cout << "Kategoria PokerPlayer\n";
    Person::Get();
}

void PokerPlayer::Data() const
{
    card.Show();
}


void BadDude::Show() const
{
    Person::Data();
    Data();
}

void BadDude::Set()
{
    cout << "Kategoria BadDude\n";
    Person::Get();
    Get();
}

void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
}

void BadDude::Get()
{   
    Gunslinger::Get();
}