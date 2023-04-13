#ifndef R14Z1_H_
#define R14Z1_H_
#include <string>
#include <iostream>
#include <valarray>
#include "Pair.h"



class Wine : private std::string, private Pair< std::valarray<int>, std::valarray<int> >
{
    private:
        typedef std::valarray<int> ArrayInt;
        typedef Pair<ArrayInt,ArrayInt> PairArray;

        // std::string name;
        // PairArray data;
        int count;
    public:
        Wine();
        Wine(const char * l, int y, const int yr[], const int bot[]);
        Wine(const char * l, int y);
        ~Wine() {}
        void GetBottles();
        std::string & Label();
        int sum();
        void Show() const;

};

#endif