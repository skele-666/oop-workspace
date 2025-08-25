#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include "Musician.h"

class Orchestra {
private:
int max_size;
int size;
Musician* members; // will be a dynamic array for the orchestra members

public:
// CONSTRUCTORS:
// Default constructor
Orchestra();           

// Constructor for an orchestra of given size
Orchestra(int size);

// DESTRUCTOR:
~Orchestra();

// GETTER METHODS
// Returns the number of musicians who have joined the orchestra
int get_current_number_of_members();

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool has_instrument(std::string instrument);

// returns the array of members of the orchestra
Musician *get_members();

// SETTER METHODS
// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool add_musician(Musician new_musician);
};

#endif
