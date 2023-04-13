#ifndef R10Z4_H_
#define R10Z4_H_

namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
        private:
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        public:
        Sales();
        Sales(const double ar[]);
        ~Sales();
        void Setsales();
        void Showsales() const;
    };
}

#endif