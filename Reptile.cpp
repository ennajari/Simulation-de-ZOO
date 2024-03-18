#include "Reptile.h"

Reptile::Reptile(std::string _nom, int _age, std::string _sexe, bool _venimeux)
    : Animal(_nom, _age, _sexe), venimeux(_venimeux) {}

void Reptile::afficherDetails() const {
    Animal::afficherDetails();
    std::cout << "Venimeux : " << (venimeux ? "Oui" : "Non") << std::endl;
}
