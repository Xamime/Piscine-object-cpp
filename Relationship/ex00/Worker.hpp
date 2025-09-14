#ifndef WORKER
#define WORKER

#include "Shovel.hpp"
#define RED "\033[0;31m"
#define END "\033[0m"

using namespace std;

struct Position
{
    int _x;
    int _y;
    int _z;

    Position(int x, int y, int z) : _x(x), _y(y), _z(z){};
};

struct Statistic
{
    int _level;
    int _exp;

    Statistic(int exp, int level) : _level(level), _exp(exp){};
};

class Worker
{
    std::string _name;
    Position coordonnee;
    Statistic stat;
    Shovel *shovel;
    
    public:

    Worker(std::string name) : _name(name), coordonnee(50,50,10), stat(10,500) {
        shovel = NULL;
        showInfo();
    };

    ~Worker() {
        cout << RED << _name << " deleted" << END << endl;
    };

    void showInfo() const {
        cout << "NAME : " << _name << endl;
        cout << "POS x, y, z : " << coordonnee._x << " " << coordonnee._y << " " << coordonnee._z << endl;
        cout << "STATS level, exp : " << stat._exp << " " << stat._level << endl;
        if (shovel)
            cout << "SHOVEL : True" << endl;
        else
            cout << "SHOVEL : False" << endl;

    }

};


#endif // !Worker