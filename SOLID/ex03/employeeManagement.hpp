#ifndef EmployeeManagement_hpp
#define EmployeeManagement_hpp

#include <iostream>
#include "employee.hpp"
#include <vector>
#include <algorithm>

class EmployeeManager {
    private:

        std::vector<Employee*> employees;
    public:

        void addEmployee(Employee* employee) {
            if (find(employees.begin(), employees.end(), employee) == employees.end()) {
                employees.push_back(employee);
                std::cout << "employee " << employee->get_name() << " added\n";
            }
            else {
                std::cout << "employee " << employee->get_name() << " already added\n";
            }
        }
        void removeEmployee(Employee* employee) {
            std::vector<Employee*>::iterator it = find(employees.begin(), employees.end(), employee);
            if (it != employees.end()) {
                employees.erase(it);
                std::cout << "employee " << employee->get_name() << " erased\n";
            }
            else {
                std::cout << "no employee " << employee->get_name() << " in the list\n";
            }
        }
        void executeWorkday() const {
            for (std::vector<Employee*>::const_iterator it = employees.begin(); it != employees.end(); it++) {
                (*it)->executeWorkday();
            }
        }
        void calculatePayroll() const {
            for (std::vector<Employee*>::const_iterator it = employees.begin(); it != employees.end(); it++) {
                std::cout << (*it)->get_name() << " get paid " << (*it)->calculatePayroll() << " euros\n";
            }
        }
};

#endif