#include "Employee.h"
#include "Department.h"

int main() {
    // create employees
    Employee firstEmployee("Teodor Hristov", 8404093266, "Junior");
    Employee secondEmployee("Georgi Dimitrov", 9005103266, "Mid-Senior");
    Employee thirdEmployee("Llyq Petrova", 8804083277, "Mid-Senior");
    Employee fourthEmployee("Ani Vasileva", 9907253469, "Intern");
    Employee fifthEmployee("Ivan Todorov", 8511033147, "Leader");
    Employee sixthEmployee("Vasil Vasilev", 9710235578, "CEO");

    // create vector of employyes
    std::vector<Employee*> employeesVec{ &firstEmployee, &secondEmployee, &thirdEmployee };
    employeesVec.push_back(&fourthEmployee);
    employeesVec.push_back(&fifthEmployee);
    employeesVec.push_back(&sixthEmployee);

    // create two departments
    Department firstDepartment("Programming Department");
    Department* secondDepartment = new Department("Development and Inovation");

    // add employees to department vectors
    for (size_t i = 0; i < employeesVec.size(); ++i) {
        if (i % 2 == 0) {
            firstDepartment.addEmployee(employeesVec[i]);
        }
        else {
            secondDepartment->addEmployee(employeesVec.at(i));
        }
    }

    // display departments
    firstDepartment.displayEmployees();
    secondDepartment->displayEmployees();

    return 0;
}
