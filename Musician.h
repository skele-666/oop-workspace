#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string instrument;
    int experience;

public:
    // Constructors
    Musician();
    Musician(std::string instrument, int experience);
    
    // Public member Functions
    std::string get_instrument();
    int get_experience();
};

#endif
