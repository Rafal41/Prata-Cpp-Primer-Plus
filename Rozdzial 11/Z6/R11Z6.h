// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14}; // pounds per stone
        int stone; // whole stones
        double pds_left; // fractional pounds
        double pounds; // entire weight in pounds
    public:
        Stonewt(double lbs); // constructor for double pounds
        Stonewt(int stn, double lbs); // constructor for stone, lbs
        Stonewt(); // default constructor
        ~Stonewt();
        bool operator>(const Stonewt & st) const;
        bool operator<(const Stonewt & st) const;
        bool operator>=(const Stonewt & st) const;
        bool operator<=(const Stonewt & st) const;
        bool operator==(const Stonewt & st) const;
        bool operator!=(const Stonewt & st) const;
        void show_lbs() const; // show weight in pounds format
        void show_stn() const; // show weight in stone format
};
#endif