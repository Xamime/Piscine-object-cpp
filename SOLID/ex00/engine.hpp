#pragma once

#include <iostream>

class Engine {
    
    public:
    void start() {
        std::cout << "start motor\n";
    };

    void stop() 
    {
        std::cout << "stop motor\n";
    };
};