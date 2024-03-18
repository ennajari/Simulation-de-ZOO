#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
private:
    bool venimeux;

public:
    Reptile(std::string nom, int age, std::string sexe, bool venimeux);
    void afficherDetails() const;
};

#endif // REPTILE_H
