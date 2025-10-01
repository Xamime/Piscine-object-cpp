#include "Workshop.hpp"
#include "Worker.hpp"

Workshop::Workshop(string name) : name(name) {
    cout << "Workshop " << name << " created" << endl;
};

Workshop::~Workshop() {
    cout << "Workshop " << name << " deleted" << endl;
    workers.clear();
};

void Workshop::addWorker(Worker *newworker) {
    if (!newworker)
        return;
    if (find(workers.begin(), workers.end(), newworker) != workers.end()) {
        // cout << name << " already has this worker : " << newworker->getName() << endl;
        return;
    }
    cout << name << " now has a new worker : " << newworker->getName() << endl;
    workers.push_back(newworker);
    newworker->registerToWorkshop(this);
};

const string Workshop::getName() const {
    return name;
};

void Workshop::releaseWorker(Worker *worker) {
    if (!worker)
        return;
    for (size_t i = 0; i < workers.size(); i++) {
        if (workers[i] == worker) {
            workers.erase(workers.begin() + i);
            cout << name << " has released a worker : " << worker->getName() << endl;
            worker->removeWorkshop(this);
            return;
        }
    }
    cout << name << " has no such worker named : " << worker->getName() << endl;

};
void Workshop::executeWorkDay() {
    for (size_t i = 0; i < workers.size(); i++) {
        workers[i]->work();
    }
}