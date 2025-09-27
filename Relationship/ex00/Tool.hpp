#ifndef TOOL_HPP
#define TOOL_HPP

#include <iostream>
#define YELLOW "\033[33m"
#define END "\033[0m"
using namespace std;

class Worker;

class Tool
{
    protected:
        Worker *owner;
        int numberOfUses;
        string name;
    
    public:
        Tool();
        virtual ~Tool();
        virtual void use() = 0;
        string getName() const;
        void giveTool(Worker *worker);
};

#endif // TOOL_HPP