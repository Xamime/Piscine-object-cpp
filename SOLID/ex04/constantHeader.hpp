#ifndef ConstantHeader_HPP
#define ConstantHeader_HPP

#include "header.hpp"
#include <iostream>
#include <fstream>

class ConstantHeader : public Header {
    std::string string;
    public:
        ConstantHeader(ILogger *logger, std::string string) : Header(logger), string(string)  {}
        void write(std::string& msg) {
            std::string headerMsg = string + msg;
            logger->write(headerMsg);
        }
};

#endif