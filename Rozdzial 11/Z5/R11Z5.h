// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14}; // pounds per stone
        enum Mode {STONE, POUNDS}; // modes
        int stone; // whole stones
        Mode mode; // STONE or POUNDS
        double pds_left; // fractional pounds
        double pounds; // entire weight in pounds
    public:
        Stonewt(double lbs); // constructor for double pounds
        Stonewt(int stn, double lbs); // constructor for stone, lbs
        Stonewt(); // default constructor
        ~Stonewt();
        void stone_mode() {mode = STONE;}
        void pounds_mode() {mode = POUNDS;}
        Stonewt operator+(const Stonewt & st) const;
        Stonewt operator-(const Stonewt & st) const;
        Stonewt operator*(const Stonewt & st) const;
        friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};
#endif