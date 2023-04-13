// dma.h -- inheritance and dynamic memory allocation
#ifndef R13Z3_H
#define R13Z3_H
#include <iostream>

// Abstract Class Using DMA
class abstractDMA
{
    private:
        char * label;
        int rating;
    public:
        abstractDMA(const char * l = "null", int r = 0);
        abstractDMA(const abstractDMA & rs);
        virtual ~abstractDMA();
        abstractDMA & operator=(const abstractDMA & rs);
        virtual void View() const = 0;
        friend std::ostream & operator<<(std::ostream & os, const abstractDMA & rs);
};

// Base Class Using DMA
class baseDMA : public abstractDMA
{
    public:
        baseDMA(const char * l = "null", int r = 0);
        baseDMA(const baseDMA & rs);
        virtual ~baseDMA();
        baseDMA & operator=(const baseDMA & rs);
        virtual void View() const;
        friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public abstractDMA
{
    private:
        enum {COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
        lacksDMA(const char * c, const abstractDMA & rs);
        virtual void View() const;
        friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

// derived class with DMA
class hasDMA :public abstractDMA
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "none", const char * l = "null", int r = 0);
        hasDMA(const char * s, const abstractDMA & rs);
        hasDMA(const hasDMA & hs);
        ~hasDMA();
        hasDMA & operator=(const hasDMA & rs);
        virtual void View() const;
        friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};
#endif