#ifndef Employee_hpp
#define Employee_hpp

#include <iostream>

class Employee {
    protected: 
        std::string name;
        int hourlyValue;
        int nbHours;

    public:
        Employee(const std::string name, int hourlyValue) : name(name), hourlyValue(hourlyValue), nbHours(0) {}
        virtual ~Employee() {}
        int executeWorkday() {
            nbHours += 7;
            return 7;
        }
        virtual int calculatePayroll() = 0;

        std::string get_name() {
            return name;
        }
};



#endif