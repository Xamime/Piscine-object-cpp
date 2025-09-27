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
        Workshop(string name) : name(name) {
            cout << "Workshop created" << endl;
        };

        ~Workshop() {
            cout << "Workshop deleted" << endl;
            workers.clear();
        };

        void addWorker(Worker *newworker) {
            if (!newworker)
                return;
            if (find(workers.begin(), workers.end(), newworker) != workers.end()) {
                cout << name << " already has this worker" << endl;
                return;
            }
            workers.push_back(newworker);
            cout << name << " now has a new worker" << endl;
        };

        string getName() const {
            return name;
        };

        void releaseWorker(Worker *worker) {
            if (!worker)
                return;
            for (size_t i = 0; i < workers.size(); i++) {
                if (workers[i] == worker) {
                    workers.erase(workers.begin() + i);
                    cout << name << " has released a worker" << endl;
                    return;
                }
            }
            cout << name << " has no such worker" << endl;
        };
};

#endif // !WORKSHOP_HPP