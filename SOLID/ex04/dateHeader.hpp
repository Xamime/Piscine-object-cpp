#ifndef DateHeader_HPP
#define DateHeader_HPP

#include "header.hpp"
#include <iostream>
#include <fstream>
#include <ctime>

class DateHeader : public Header {
    public:
        DateHeader(ILogger *logger) : Header(logger) {}

        std::string getCurrentDate() {
            std::time_t now = std::time(NULL);
            std::tm* timeinfo = std::localtime(&now);

            char buffer[64];
            std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", timeinfo);

            return std::string(buffer);
        }

        void write(std::string& msg) {
            std::string dateMsg = getCurrentDate() + " " + msg;
            logger->write(dateMsg);
        }
};

#endif