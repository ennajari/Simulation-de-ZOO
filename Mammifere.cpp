#include "Mammifere.h"

Mammifere::Mammifere(std::string _nom, int _age, std::string _sexe, int _nombreDePattes)
    : Animal(_nom, _age, _sexe), nombreDePattes(_nombreDePattes) {}

void Mammifere::afficherDetails() const {
    Animal::afficherDetails();
    std::cout << "Nombre de pattes : " << nombreDePattes << std::endl;
}
