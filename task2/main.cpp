#include <iostream>
#include "person.h"

int main() {
    Person person("Alina", "Andreeva", 1960);

    person.changeFirstName(1965, "Polina");
    person.changeLastName(1967, "Sergeeva");
    for (int year : {1900, 1960, 1965, 1990}) {
      std::cout << person.getFullName(year) << std::endl;
    }

    person.changeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
      std::cout << person.getFullName(year) << std::endl;
    }

    person.changeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
      std::cout << person.getFullName(year) << std::endl;
    }

    std::cout << std::endl;

    for (int year : {1959, 1960, 1965, 1967, 1972}) {
      std::cout << person.getFullNameWithHistory(year) << std::endl;
    }

    return 0;
}
