#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Vector2
{
    float x;
    float y;

    public:
    Vector2(float x, float y) : x(x), y(y) {}
};

class Graph
{
    list<Vector2> points;
    int size = 0;
    
    public:
    void addPoint(const Vector2& point)
    {
        points.push_back(point);
    }

    Graph() {}
    ~Graph() {}
    void diplay() const 
    {

    }
};
#endif