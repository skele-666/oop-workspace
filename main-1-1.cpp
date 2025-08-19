#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    int n = 5;
    Person* people = createPersonArray(n);

    if (people == nullptr) {
        return 1;
    }

    // Print it out with nice formatting because I'm a neat freak
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": "
                  << people[i].name << std::endl
                  << "Age: " << people[i].age << std::endl;
    }

    delete[] people;
    people = nullptr;
    return 0;
}