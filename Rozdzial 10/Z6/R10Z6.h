#ifndef R10Z6_H_
#define R10Z6_H_

class Move
{
    private:
        double x;
        double y;
    public:
        Move(double a = 0, double b = 0);
        ~Move();
        void Showmove() const;
        Move Add(const Move & m) const;
        void Reset(double a = 0, double b = 0);
};


#endif