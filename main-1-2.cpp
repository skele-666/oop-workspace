#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main() {
    int n = 4;
    PersonList list = createPersonList(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i + 1 << ": "
                  << list.people[i].name << std::endl
                  << "Age: " << list.people[i].age << std::endl;
    }

    delete[] list.people;
    list.people = nullptr;

    return 0;
}