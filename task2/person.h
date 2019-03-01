#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <map>

struct FullName
{
    std::string first_name;
    std::string last_name;
};

class Person
{
public:
    Person(std::string f_name, std::string l_name, int b_year);
    void changeFirstName(int year, const std::string& f_name);
    void changeLastName(int year, const std::string& l_name);
    std::string getFullName(int year) const;
    std::string getFullNameWithHistory(int year) const;

private:
    std::map <int, FullName> year_full_name;
    int birth_year;
};

#endif // PERSON_H
