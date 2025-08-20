#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList pl);

int main() {
    int n = 5;
    PersonList persons1 = createPersonList(n);

    std::cout << "Original:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": "
                  << persons1.people[i].name << std::endl
                  << "Age: " << persons1.people[i].age << std::endl;
    }

    PersonList persons2 = deepCopyPersonList(persons1);

    std::cout << "Deep Copied:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": "
                  << persons2.people[i].name << std::endl
                  << "Age: " << persons2.people[i].age << std::endl;
    }

    delete[] persons1.people;
    delete[] persons2.people;
    persons1.people = nullptr;
    persons2.people = nullptr;

    return 0;
}