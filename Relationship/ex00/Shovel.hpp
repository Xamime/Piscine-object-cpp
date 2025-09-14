#ifndef SHOVEL
#define SHOVEL

#include <iostream>
#include "Tool.hpp"

using namespace std;

struct Shovel : public Tool
{
    

    Shovel() : numberOfUses(10){};
    virtual void use() {
        cout << "its a Shovel" << endl;
    }
};


#endif // !SHOVEL