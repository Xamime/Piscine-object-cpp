#include <iostream>
#include "employee.hpp"
#include "employeeManagement.hpp"
#include "hourlyEmployee.hpp"
#include "salariedEmployee.hpp"

using namespace std;

void declareAbsence(AbsentHours& e, int hours) {
    e.addAbsentHours(hours);
}

int main() {

    Employee *jean = new TempWorker("jean", 8, 150);
    ContractEmployee *toto = new ContractEmployee("toto", 8);
    Apprentice *boule = new Apprentice("boule", 5, 70);
    declareAbsence(*toto, 15);
    declareAbsence(*boule, 15);
    EmployeeManager manage;

    manage.addEmployee(jean);
    manage.addEmployee(boule);
    manage.addEmployee(toto);
    for (int i = 0; i < 23; i++) // ~1 month without weekend
        manage.executeWorkday();
    // manage.removeEmployee(toto);
    manage.calculatePayroll();
    delete jean;
    delete toto;
    delete boule;
    return 0;
}