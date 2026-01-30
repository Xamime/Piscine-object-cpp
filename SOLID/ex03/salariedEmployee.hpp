#ifndef SalariedEmployee_hpp
#define SalariedEmployee_hpp

#include <iostream>
#include "employee.hpp"

class AbsentHours {
    public:
        virtual void addAbsentHours(int hours) = 0;
        virtual ~AbsentHours() {}
};

class ContractEmployee : public Employee,
                         public AbsentHours {
    int absentHours;

    public:
        ContractEmployee(const std::string& name, const int hourlyValue)
                                : Employee(name, hourlyValue), absentHours(0) {}

        void addAbsentHours(int hours) {
            absentHours += hours;
        } 

        int calculatePayroll() {
            int money = hourlyValue * (nbHours - absentHours);
            if (money < 0)
                return 0;
            return money;
        }
};

class Apprentice : public Employee,
                   public AbsentHours {
    int absentHours;
    int schoolHours;
    public:
        Apprentice(const std::string& name, const int hourlyValue, const int schoolHours)
                            : Employee(name, hourlyValue), absentHours(0), schoolHours(schoolHours) {}

        void addAbsentHours(int hours) {
            absentHours += hours;
        }

        int calculatePayroll() {
            int schoolPaid = schoolHours / 2;
            int money = hourlyValue * (nbHours - absentHours);
            money += hourlyValue * schoolPaid;
            if (money < 0)
                return 0;
            return money;
        }
};

#endif