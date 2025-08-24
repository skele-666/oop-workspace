#include "Musician.h"

// Constructors
Musician::Musician() {
    instrument = "kazoo";
    experience = 50000;
}

Musician::Musician(std::string instrument, int experience) {
    this->instrument = instrument;
    this->experience = experience;
}

// Getters
std::string Musician::get_instrument() {
    return instrument;
}

int Musician::get_experience() {
    return experience;
}
