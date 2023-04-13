#ifndef R10Z7_H_
#define R10Z7_H_

class Plorg
{
    private:
        static const int Len = 19;
        char m_name[Len];
        int m_coef;
    public:
        Plorg(const char * name = "Plorga", const int coef = 50);
        ~Plorg();
        void Setcoef(const int coef);
        void Showplorg() const;
};

#endif