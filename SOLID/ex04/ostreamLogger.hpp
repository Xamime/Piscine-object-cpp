#ifndef OstreamLogger_HPP
#define OstreamLogger_HPP

#include <iostream>
#include "ILogger.hpp"

class OstreamLogger : public ILogger {
private:
    std::ostream& out;

public:
    OstreamLogger(std::ostream& os) : out(os) {}

    void write(std::string& msg) {
        out << msg << std::endl;
    }
};


#endif