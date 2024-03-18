#include "Oiseau.h"

Oiseau::Oiseau(std::string _nom, int _age, std::string _sexe, float _envergure)
    : Animal(_nom, _age, _sexe), envergure(_envergure) {}

void Oiseau::afficherDetails() const {
    Animal::afficherDetails();
    std::cout << "Envergure : " << envergure << " mètres" << std::endl;
}
