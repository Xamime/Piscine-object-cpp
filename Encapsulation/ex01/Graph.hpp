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
    Vector2(float x, float y) : x(x), y(y) {
        if (x < 0 || y < 0) {
            throw invalid_argument("Coordinates must be non-negative");
        }
    };
    float getX() const { return x; };
    float getY() const { return y; };
};

class Graph
{
    list<Vector2> points;
    int size;
    
    public:
        Graph() : size(-1) {};
        ~Graph() {}

        void setSize(int s) {
            if (s < 0 || s > 25) {
                cerr << "Size must be between 0 and 25" << endl;
                return ;
            }
            size = s;
        }
        
        void addPoint(float x, float y)
        {
            try {
                Vector2 p(x, y);
                points.push_back(p);
            } catch (const std::exception& e) {
                std::cerr << e.what() << '\n';
            }
            
        }

        void diplay() const 
        {
            if (size == -1) {
                cerr << "Graph size not set." << endl;
                return;
            }
            vector<vector<char> > grid(size + 1, vector<char>(size + 1, '.'));

            for (list<Vector2>::const_iterator it = points.begin(); it != points.end(); ++it) {
                if (it->getX() <= size && it->getY() <= size) {
                    grid[it->getY()][it->getX()] = 'X';
                }
            }
            for (int y = size; y >= 0; y--) {
                cout << y << ' ';
                for (int x = 0; x <= size; x++) {
                    cout << grid[y][x] << ' ';
                }
                cout << endl;
            }
            cout << " ";
            for (int i = 0; i <= size; i++) {
                cout << " " << i;
            }
            cout << endl;
        }
};

#endif