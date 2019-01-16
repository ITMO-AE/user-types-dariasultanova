#include "employee.h"
#include <iostream>

Employee::Employee(std::string f_name, std::string l_name, Gender sex, unsigned int age, unsigned int category):
    first_name(f_name),
    last_name(l_name),
    sex(sex),
    age(age),
    category(category)
{
}

Employee::~Employee()
{
}

void Employee::promote()
{
    category++;
}

void Employee::demote()
{
    category--;
}

std::string Employee::getSex()
{
    if (sex == Gender::male)
        return "Male";
    else
        return "Female";
}

void Employee::printInfo()
{
    std::cout << "First Name: " << first_name << std::endl;
    std::cout << " Last Name: " << last_name << std::endl;
    std::cout << "       Sex: " << getSex() << std::endl;
    std::cout << "       Age: " << age << std::endl;
    std::cout << "  Category: " << category << std::endl << std::endl;
}
