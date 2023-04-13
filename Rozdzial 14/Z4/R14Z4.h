#ifndef R14Z4_H_
#define R14Z4_H_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Person
{
    private:
        std::string name;
    protected:
        virtual void Data() const {cout << "imie i nazwisko: " << name << endl;}
        virtual void Get() {cout << "Podaj imie i nazwisko:\n"; getline(cin,name);}
    public:
        Person(const std::string & nm = "brak") : name(nm) {}
        Person(const char * nm) : name(nm) {}
        virtual ~Person() {}
        virtual void Set();
        virtual void Show() const {cout << "imie i nazwisko: " << name << endl;}
};

class Gunslinger : virtual public Person
{
    private:
        int cuts;
        double time;
    protected:
        virtual void Data() const;
        virtual void Get();
    public:
        Gunslinger(const std::string & nm = "brak", const int cts = 0, const double tm = 0) : Person(nm), cuts(cts), time(tm) {}
        Gunslinger(const char * nm, const int cts = 0, const double tm = 0) : Person(nm), cuts(cts), time(tm) {}
        Gunslinger(const Person & prs, const int cts = 0, const double tm = 0) : Person(prs), cuts(cts), time(tm) {}
        virtual ~Gunslinger() {}
        virtual void Set();
        virtual double Draw() const {return time;}
        virtual void Show() const;
};

class Card
{
    private:
        enum {Types = 4};
        enum {Set = 13};
        static const char * karty[Set];
        static const char * kolory[Types];
        int num;
        int kolor;
    public:
        Card();
        virtual ~Card() {}
        virtual void Show() const;
};

class PokerPlayer : virtual public Person
{
    private:
        Card card;
    protected:
        virtual void Data() const;
    public:
        PokerPlayer(const std::string & nm = "brak") : Person(nm), card() {}
        PokerPlayer(const char * nm) : Person(nm), card() {}
        PokerPlayer(const Person & prs) : Person(prs), card() {}
        virtual ~PokerPlayer() {}
        virtual void Set();
        virtual const Card & Draw() const {return card;}
        virtual void Show() const ;
};


class BadDude : public Gunslinger, public PokerPlayer
{
    protected:
        virtual void Data() const;
        virtual void Get();
    public:
        BadDude(const std::string & nm = "brak", const int cts = 0, const double tm = 0): Person(nm), Gunslinger(nm, cts, tm), PokerPlayer(nm) {}
        BadDude(const char * nm , const int cts, const double tm): Person(nm), Gunslinger(nm, cts, tm), PokerPlayer(nm) {}
        BadDude(const Gunslinger & prs): Person(prs), Gunslinger(prs), PokerPlayer(prs) {}
        BadDude(const PokerPlayer & prs): Person(prs), Gunslinger(prs), PokerPlayer(prs) {}
        BadDude(const Person & prs, const int cts, const double tm): Person(prs), Gunslinger(prs, cts, tm), PokerPlayer(prs) {}
        virtual ~BadDude() {}
        virtual void Set();
        double Gdraw() const {return Gunslinger::Draw();}
        const Card & Cdraw() const  { return PokerPlayer::Draw();}
        virtual void Show() const;
};

#endif