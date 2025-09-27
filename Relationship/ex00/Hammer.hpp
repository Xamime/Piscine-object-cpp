#ifndef HAMMER
#define HAMMER

#include <iostream>
#include "Tool.hpp"

#define GREEN "\033[32m"
#define END "\033[0m"

using namespace std;

struct Hammer : public Tool
{
    Hammer() {
        name = "hammer";
        owner = NULL;
        cout << GREEN << "Hammer created" << END << endl;
    };
    virtual ~Hammer() {
        cout << GREEN << "Hammer deleted" << END << endl;
    };

    virtual void use() {
        cout << GREEN << "its a Hammer" << END << endl;
    };
};
#endif // !HAMMER