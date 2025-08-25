#include "Orchestra.h"

// CONSTRUCTORS:
Orchestra::Orchestra() {
    max_size = 0;
    size = 0;
    members = nullptr;
}

Orchestra::Orchestra(int size) {
    // if size not full assign it
    // if full no assign
    this->max_size = size;
    this->size = 0;

    if (max_size > 0) {
        members = new Musician[max_size];
    } else {
        members = nullptr;
    }
}

// DESTRUCTOR:
Orchestra::~Orchestra() {
    delete[] members;
    members = nullptr;
}

// GETTER METHODS
int Orchestra::get_current_number_of_members() {
    return size;
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < size; i++) {
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() {
    return members;
}

// SETTER METHODS
bool Orchestra::add_musician(Musician new_musician) {
    // So, basically, if the orchestra is not full, we add the new musician to the array.
    if (size < max_size) {
        members[size] = new_musician;
        size++;
        return true;
    } else {
        return false;
    }
}