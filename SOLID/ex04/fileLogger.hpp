#ifndef FileLogger_HPP
#define FileLogger_HPP

#include <iostream>
#include "ILogger.hpp"
#include <fstream>

class FileLogger : public ILogger {

    std::ofstream file;
    
    public:
        FileLogger(const std::string& fileName) : file(fileName.c_str(), std::ios::app) {}
        ~FileLogger() {
            if (file.is_open())
                file.close();
        }
        void write(std::string& msg) {
            if (file.is_open())
                file << msg << std::endl;
        }
};

#endif