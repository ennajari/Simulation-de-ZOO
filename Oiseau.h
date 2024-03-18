#ifndef OISEAU_H
#define OISEAU_H

#include "Animal.h"

class Oiseau : public Animal {
private:
    float envergure;

public:
    Oiseau(std::string nom, int age, std::string sexe, float envergure);
    void afficherDetails() const;
};

#endif // OISEAU_H
