#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Worker;

class Workshop
{
    string name;
    vector<Worker *> workers;

    public:
        Workshop(string name);
        ~Workshop();
        void addWorker(Worker *newworker);
        string getName() const;
        void releaseWorker(Worker *worker);
};

#endif // !WORKSHOP_HPP