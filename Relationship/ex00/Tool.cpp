#include "Tool.hpp"
#include "Worker.hpp"

Tool::Tool() : numberOfUses(0) {
    cout << "Tool created" << endl;
}

Tool::~Tool() {
    cout << "Tool deleted" << endl;
}

void Tool::giveTool(Worker *worker) {
    if (!worker)
        return;
    if (owner)
        owner->releaseTool();
    owner = worker;
    cout << YELLOW << name << " given to " << worker->getName() << END << endl;
    owner->addTool(this);
}

string Tool::getName() const {
    return name;
};