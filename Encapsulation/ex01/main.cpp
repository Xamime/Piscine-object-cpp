#include <iostream>
#include "Graph.hpp"

int main()
{
    Graph graph;
    
    graph.setSize(6);
    graph.addPoint(0.6, 0);
    graph.addPoint(1, 1);
    graph.addPoint(2, 2);
    graph.addPoint(3, 3);
    graph.addPoint(4, 4);
    graph.addPoint(5, 5);
    graph.addPoint(6, 6);
    graph.addPoint(3, 3);
    graph.diplay();
    return (0);
}