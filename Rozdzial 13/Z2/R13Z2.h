#ifndef R13Z2_H_
#define R13Z2_H_

// base class
class Cd { // represents a CD disk
    private:
        char * performers;
        char * label;
        int selections; // number of selections
        double playtime; // playing time in minutes
    public:
        Cd();
        Cd(const char * s1, const char * s2, const int n, const double x);
        Cd(const Cd & d);
        virtual ~Cd() {};
        Cd & operator=(const Cd & d);
        virtual void Report() const; // reports all CD data
};

class Classic : public Cd { // represents a CD disk
    private:
        char * maincomp;
    public:
        Classic();
        Classic(const char * comp, const char * s1, const char * s2, const int n, const double x);
        Classic(const Classic & d);
        // Classic(char * comp, const Cd & disk );
        virtual ~Classic() {};
        Classic & operator=(const Classic & d);
        virtual void Report() const; // reports all CD data

};
#endif