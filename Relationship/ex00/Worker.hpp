#ifndef WORKER
#define WORKER

#include "Position.hpp"
#include "Tool.hpp"
#include "Statistic.hpp"
#include <vector>
#include "Workshop.hpp"
#include <algorithm>
#define RED "\033[0;31m"
#define END "\033[0m"

using namespace std;

class Worker
{
    friend void Tool::giveTool(Worker *worker);
    std::string _name;
    Position coordonnee;
    Statistic stat;
    Tool *tool;
    vector<Workshop *> workshops;

    void addTool(Tool *newtool) {
        if (!newtool)
            return;
        if (tool)
            releaseTool();
        tool = newtool;
        cout << RED << _name << " now has a " << tool->getName() << END << endl;
    };
    
    public:

    Worker(std::string name) : _name(name), coordonnee(50,50,10), stat(10,500) {
        cout << RED << _name << " created" << END << endl;
        tool = NULL;
    };

    ~Worker() {
        cout << RED << _name << " deleted" << END << endl;
        workshops.clear();
    };
    
    std::string getName() const {
        return _name;
    };

    void work() {
        if (!workshops.empty()) 
            cout << RED << _name << " execute work" << END << endl;
        else 
            cout << RED << _name << " doesn't have work" << END << endl;
    }

    void removeWorkshop(Workshop *w) {
        for (size_t i = 0; i < workshops.size(); i++) {
            if (workshops[i] == w) {
                workshops.erase(workshops.begin() + i);
                cout << RED << _name << " is removed from " << w->getName() << END << endl;
                return;
            }
        }
    }

    void registerToWorkshop(Workshop *w) {
        if (!w)
            return;
        vector<Workshop *>::iterator it = find(workshops.begin(), workshops.end(), w);
        if (it != workshops.end())
            return;
        workshops.push_back(w);
        w->addWorker(this);
    }

    void useTool() {
        if (tool)
            tool->use();
        else
            cout << RED << _name << " has no tool" << END << endl;
    };

    void releaseTool() {
        cout << RED << _name << " has released his "  << tool->getName() << END << endl;
        tool = NULL;
    };

};


#endif // !Worker