#include <vector>
#include "person.h"

Person::Person(std::string f_name, std::string l_name, int b_year)
{
    year_full_name.insert(std::make_pair(b_year, FullName{f_name, l_name}));
    birth_year = b_year;
}

void Person::changeFirstName(int year, const std::string& f_name)
{
    if (year < birth_year) return;

    year_full_name.insert(std::make_pair(year, FullName{f_name, ""}));
}

void Person::changeLastName(int year, const std::string& l_name)
{
    if (year < birth_year) return;

    year_full_name.insert(std::make_pair(year, FullName{"", l_name}));
}

std::string Person::getFullName(int year) const
{
    if (year < birth_year) {
        return "No Person";
    }

    std::string f_name;
    std::string l_name;

    for (auto i : year_full_name) {
        if (i.first <= year && i.second.first_name != "") {
            f_name = i.second.first_name;
        }

        if (i.first <= year && i.second.last_name != "") {
            l_name = i.second.last_name;
        }
    }

    if (f_name.empty()) {
       return l_name + " with unknown first name";
    }
    else if (l_name.empty()) {
       return f_name + " with unknown last name";
    }
    else {
       return f_name + " " + l_name;
    }
}


std::string Person::getFullNameWithHistory(int year) const
{
    if (year < birth_year) {
        return "No Person";
    }

    std::string f_name = "";
    std::string l_name = "";
    std::vector<std::string> first_names;
    std::vector<std::string> last_names;

    for (auto i : year_full_name) {
        if (i.first <= year && i.second.first_name != "") {
            first_names.push_back(f_name);
            f_name = i.second.first_name;
        }

        if (i.first <= year && i.second.last_name != "") {
            last_names.push_back(l_name);
            l_name = i.second.last_name;
        }
    }

    std::string first_name;
    std::string last_name;

    if (first_names.size() >= 1) {
        first_name += " (" + first_names[first_names.size() - 1] + ")";
    }

    if (last_names.size() >= 1) {
        last_name += " (" + last_names[last_names.size() - 1] + ")";
    }

    if (f_name.empty()) {
        return l_name + last_name + " with unknown first name";
    }
    else if (l_name.empty()) {
        return f_name + first_name + " with unknown last name";
    }
    else {
        return f_name + first_name + " " + l_name + last_name;
    }
}
