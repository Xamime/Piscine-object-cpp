#ifndef STATISTIC
#define STATISTIC

#include <iostream>
using namespace std;

struct Statistic
{
    int _level;
    int _exp;

    Statistic(int exp, int level) : _level(level), _exp(exp) {
        cout << "Statistic created" << endl;
    };
    ~Statistic() {
        cout << "Statistic deleted, ";
    };
};
#endif // !STATISTIC