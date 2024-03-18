#ifndef MAMMIFERE_H
#define MAMMIFERE_H

#include "Animal.h"

class Mammifere : public Animal {
private:
    int nombreDePattes;

public:
    Mammifere(std::string nom, int age, std::string sexe, int nombreDePattes);
    void afficherDetails() const;
};

#endif // MAMMIFERE_H
