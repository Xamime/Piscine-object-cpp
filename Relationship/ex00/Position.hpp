#ifndef POSITION
#define POSITION
#include <iostream>
using namespace std;

struct Position
{
    int _x;
    int _y;
    int _z;

    Position(int x, int y, int z) : _x(x), _y(y), _z(z) {
        cout << "Position created, ";
    };
    ~Position() {
        cout << "Position deleted" << endl;
    };
};
#endif // !POSITION 