#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n = 5;
    PersonList persons1 = createPersonList(n);

    std::cout << "Original:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": "
                  << persons1.people[i].name << std::endl
                  << "Age: " << persons1.people[i].age << std::endl;
    }

    PersonList persons2 = shallowCopyPersonList(persons1);

    std::cout << "Shallow Copied:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": "
                  << persons2.people[i].name << std::endl
                  << "Age: " << persons2.people[i].age << std::endl;
    }

    // Don't need to delete persons2.people since it's pointing to
    // the same array...
    delete[] persons1.people;
    persons1.people = nullptr;
    persons2.people = nullptr;

    return 0;
}