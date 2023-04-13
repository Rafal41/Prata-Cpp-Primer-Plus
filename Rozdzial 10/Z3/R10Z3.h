#ifndef R10Z3_H
#define R10Z3_H

class Golf 
{
    private:
        static const int Len = 40;
        char m_fullname[Len];
        int m_handicap;
    public:
        Golf(const char * fullname = "brak", const int handicap = 0);
        ~Golf();
        int Setgolf();
        void Showgolf() const;
};

#endif