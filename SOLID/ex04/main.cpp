#include "ILogger.hpp"
#include <iostream>
#include "ostreamLogger.hpp"
#include "header.hpp"
#include "fileLogger.hpp"
#include "constantHeader.hpp"
#include "dateHeader.hpp"
#include <vector>

int main() {
    std::vector<ILogger*> loggers;

    ILogger* std = new OstreamLogger(std::cout);
    ILogger* dateStdHeader = new DateHeader(std);
    ILogger* stdWithHeader = new ConstantHeader(dateStdHeader, "Tatooine : ");

    ILogger* file = new FileLogger("toto.txt");
    ILogger* dateFileHeader = new DateHeader(file);
    ILogger* fileWithHeader = new ConstantHeader(dateFileHeader, "Tatooine : ");
    // ILogger* file =
    //     new ConstantHeader(
    //         new FileLogger("log.txt"),
    //         "[FILE] "
    //     );

    loggers.push_back(std);
    loggers.push_back(dateStdHeader);
    loggers.push_back(stdWithHeader);


    loggers.push_back(file);
    loggers.push_back(dateFileHeader);
    loggers.push_back(fileWithHeader);

    std::vector<std::string> messages;
    messages.push_back("Hello");
    messages.push_back("Dependency Inversion rocks");

    for (size_t j = 0; j < loggers.size(); j++)
        for (size_t i = 0; i < messages.size(); i++)
            loggers[j]->write(messages[i]);
}
