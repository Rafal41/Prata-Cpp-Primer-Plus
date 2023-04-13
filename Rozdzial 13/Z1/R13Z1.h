#ifndef R13Z1_H_
#define R13Z1_H_

// base class
class Cd { // represents a CD disk
    private:
        char performers[50];
        char label[20];
        int selections; // number of selections
        double playtime; // playing time in minutes
    public:
        Cd();
        Cd(const char * s1, const char * s2, const int n, const double x);
        virtual ~Cd() {};
        virtual void Report() const; // reports all CD data
};

class Classic : public Cd { // represents a CD disk
    private:
        char maincomp[50];
    public:
        Classic();
        Classic(const char * comp, const char * s1, const char * s2, const int n, const double x);
        // Classic(char * comp, const Cd & disk );
        virtual ~Classic() {};
        virtual void Report() const; // reports all CD data

};
#endif