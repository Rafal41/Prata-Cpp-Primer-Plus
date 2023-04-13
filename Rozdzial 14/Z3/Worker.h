// workermi.h -- working classes with MI
#ifndef WORKERMI_H_
#define WORKERMI_H_
#include <string>
#include <iostream>

class Worker // an abstract base class
{
    private:
        std::string fullname;
        long id;
    public:
        Worker() : fullname("no one"), id(0L) {}
        Worker(const std::string & s, long n): fullname(s), id(n) {}
        ~Worker() {} // pure virtual function
        void Set();
        void Show() const;
};


void Worker::Set()
{
    std::cout << "Enter worker's name: ";
    std::getline(std::cin, fullname);
    std::cout << "Enter worker's ID: ";
    std::cin >> id;
    while (std::cin.get() != '\n')
        continue;
}

void Worker::Show() const
{
    std::cout << "Name: " << fullname << "\n";
    std::cout << "Employee ID: " << id << "\n";
}
#endif