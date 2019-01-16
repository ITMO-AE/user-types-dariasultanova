#include <iostream>
#include <vector>
#include "employee.h"

int main()
{
    std::vector<Employee> umichWorks;

    Employee emp_1("Dale", "Cooper", Gender::male, 63, 10);
    Employee emp_2("Laura", "Palmer", Gender::female, 40, 5);
    Employee emp_3("Audrey", "Horne", Gender::female, 47, 7);

    umichWorks.push_back(emp_1);
    umichWorks.push_back(emp_2);
    umichWorks.push_back(emp_3);

    std::cout << std::endl << "Welcome to umichWorks! Here are our loyal employees: " << std::endl;
    for (auto employee: umichWorks)
    {
        employee.printInfo();
    }

    umichWorks[0].demote();
    umichWorks[1].promote();
    umichWorks[2].demote();

    std::cout << "Here is the new info for the employees of umichWorks: " << std::endl;
    for (auto employee: umichWorks)
    {
        employee.printInfo();
    }
    return 0;
}
