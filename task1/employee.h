#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

enum class Gender
{
    male,
    female
};

class Employee
{
public:
    Employee(std::string f_name, std::string l_name, Gender sex, unsigned int age, unsigned int category);
    void promote();
    void demote();
    void printInfo();

private:
    std::string first_name;
    std::string last_name;
    Gender sex;
    unsigned int age;
    unsigned int category;
    std::string getSex();
};

#endif // EMPLOYEE_H
