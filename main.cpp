#include <iostream>
#include "Animal.h"
#include "Mammifere.h"
#include "Oiseau.h"
#include "Reptile.h"

int main() {
    // Création d'animaux de différentes classes dérivées
    Mammifere chien("Chien", 5, "Mâle", 4);
    Oiseau aigle("Aigle", 10, "Femelle", 2.5);
    Reptile serpent("Serpent", 3, "Mâle", true);

    // Affichage des détails des animaux
    std::cout << "Détails du chien :" << std::endl;
    chien.afficherDetails();
    std::cout << std::endl;

    std::cout << "Détails de l'aigle :" << std::endl;
    aigle.afficherDetails();
    std::cout << std::endl;

    std::cout << "Détails du serpent :" << std::endl;
    serpent.afficherDetails();
    std::cout << std::endl;

    return 0;
}
