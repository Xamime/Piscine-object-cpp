#ifndef HourlyEmployee_hpp
#define HourlyEmployee_hpp

#include <iostream>
#include "employee.hpp"

class TempWorker : public Employee {
    int remainingHours;
    public:
        TempWorker(const std::string& name, const int hourlyValue, int remainingHours)
                            : Employee(name, hourlyValue), remainingHours(remainingHours) {}
        int calculatePayroll() {
            if (nbHours > remainingHours)
                return (remainingHours * hourlyValue);
            return nbHours * hourlyValue;
        }
};

#endif