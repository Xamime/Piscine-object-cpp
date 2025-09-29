#ifndef SHOVEL
#define SHOVEL

#include <iostream>
#include "Tool.hpp"
#include "Worker.hpp"

using namespace std;

struct Shovel : public Tool
{

    Shovel() {
        name = "shovel";
        numberOfUses = 3;
        owner = NULL;
        cout << YELLOW << "Shovel created" << END << endl;
    };
    
    ~Shovel() {
        cout << YELLOW << "Shovel deleted" << END << endl;
    };

    virtual void use() {
        cout << YELLOW << "its a Shovel" << END << endl;
        if (numberOfUses == 0) {
            cout << YELLOW << "Shovel is broken" << END << endl;
            return;
        }
        numberOfUses--;

    };

    
};


#endif // !SHOVEL