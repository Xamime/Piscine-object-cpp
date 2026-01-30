#ifndef Header_HPP
#define Header_HPP

#include <iostream>
#include "ILogger.hpp"
#include <fstream>

class Header : public ILogger {
    protected:
        ILogger *logger;

    public:
        Header(ILogger *logger) : logger(logger) {}
        virtual ~Header() {}
};

#endif