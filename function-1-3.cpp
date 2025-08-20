#include "Person.h"

PersonList createPersonList(int n) {
    PersonList list;

    list.numPeople = n;
    list.people = new Person[n];

    for (int i = 0; i < n; i++) {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    return list;
}

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newList;

    newList.numPeople = pl.numPeople;

    // Check if there are people in it and the pointer isn't cooked
    if (pl.numPeople > 0 && pl.people != nullptr) {
        // Create brand new Person(s) so it isn't shallow copy.
        newList.people = new Person[pl.numPeople];

        for (int i = 0; i < pl.numPeople; i++) {
            newList.people[i].name = pl.people[i].name;
            newList.people[i].age = pl.people[i].age;
        }
    } else { // pl.numPeople or pl.people is not valid
        newList.people = nullptr;
    }

    return newList;
}