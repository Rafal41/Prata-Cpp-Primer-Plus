// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include "R12Z6.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    // setting things up
    std::srand(std::time(0)); // random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line(qs);
    Queue line2(qs); // line queue holds up to qs people

    cout << "Enter the number of simulation hours: ";
    int hours; // hours of simulation
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour; // average # of arrival per hour
    cin >> perhour;
    double min_per_cust; // average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp; // new customer data
    long turnaways = 0; // turned away by full queue
    long customers = 0; // joined the queue
    long served = 0, served1 = 0, served2 = 0; // served during the simulation
    long sum_line = 0, sum_line1 = 0, sum_line2 = 0; // cumulative line length
    int wait_time = 0, wait_time1 = 0, wait_time2 = 0; // time until autoteller is free
    long line_wait = 0, line_wait1 = 0, line_wait2 = 0; // cumulative time in line


    // running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust)) // have newcomer
        {
            if (line.isfull() && line2.isfull())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle); // cycle = time of arrival
                // cout << "line1.queuecount() = " << (int) line.queuecount() << " line2.queuecount() = " << (int) line2.queuecount() << endl;
                if ((line.queuecount() < line2.queuecount()) || wait_time2 > wait_time1)
                    line.enqueue(temp); // add newcomer to line
                else 
                    line2.enqueue(temp); // add newcomer to line
                // cout << "line1.queuecount() = " << line.queuecount() << " line2.queuecount() = " << line2.queuecount() << endl;
                // cout << "temp.ptime " << temp.ptime() << endl;
            }
        }
        if (wait_time1 <= 0 && !line.isempty())
        {
            line.dequeue(temp); // attend next customer
            wait_time1 = temp.ptime(); // for wait_time minutes
            line_wait1 += cycle - temp.when();
            served1++;
            wait_time += wait_time1;
        }
        if (wait_time2 <= 0 && !line2.isempty())
        {
            line2.dequeue(temp); // attend next customer
            wait_time2 = temp.ptime(); // for wait_time minutes
            line_wait2 += cycle - temp.when();
            served2++;
            wait_time += wait_time2;
        }
        // cout << "Cycle " << cycle << " ";
        // cout << "line1.queuecount() = " << line.queuecount() << " line2.queuecount() = " << line2.queuecount() << endl;
        // cout << "wait_time1 = " << wait_time1 << " wait_time2 = " <<  wait_time2 << endl;
        // cout << "turnaways = " << turnaways << endl;
        if (wait_time1 > 0)
            wait_time1--;
        if (wait_time2 > 0)
            wait_time2--;
        sum_line1 += line.queuecount();
        sum_line2 += line2.queuecount();
    }
    
    served = served1 + served2;
    sum_line = sum_line1 + sum_line2;
    line_wait = line_wait1 + line_wait2;
    // reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers << endl;
        cout << "customers served: " << served << " queue 1: " << served1 << " queue 2: " << served2 << endl;
        cout << "turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl;
        cout << "average queue1 size: "<< (double) sum_line1 / cyclelimit << endl;
        cout << "average queue2 size: "<< (double) sum_line2 / cyclelimit << endl;
        cout << "average wait time: " << (double) line_wait / served << " minutes\n";
        cout << "average wait time queue 1: " << (double) line_wait1 / served1 << " minutes\n";
        cout << "average wait time queue 2: " << (double) line_wait2 / served1 << " minutes\n";
        // cout << "total wait time: " << (double) wait_time << " minutes\n";
    }
    else
        cout << "No customers!\n";
        
    cout << "Done!\n";
    return 0;
}

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}