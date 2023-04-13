// queue.h -- interface for a queue
#ifndef QUEUE_H_
#define QUEUE_H_
#include <cstdlib>
// This queue will contain Customer items
class Customer
{
    private:
        long arrive; // arrival time for customer
        int processtime; // processing time for customer
    public:
        Customer() { arrive = processtime = 0; }
        void set(long when);
        long when() const { return arrive; }
        int ptime() const { return processtime; }
};
typedef Customer Item;

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}

#endif

