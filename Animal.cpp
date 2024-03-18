#include "Animal.h"

Animal::Animal(std::string _nom, int _age, std::string _sexe, bool _enBonneSante)
    : nom(_nom), age(_age), sexe(_sexe), enBonneSante(_enBonneSante) {}

std::string Animal::getNom() const {
    return nom;
}

void Animal::setNom(std::string _nom) {
    nom = _nom;
}

int Animal::getAge() const {
    return age;
}

void Animal::setAge(int _age) {
    age = _age;
}

std::string Animal::getSexe() const {
    return sexe;
}

void Animal::setSexe(std::string _sexe) {
    sexe = _sexe;
}

bool Animal::getEnBonneSante() const {
    return enBonneSante;
}

void Animal::setEnBonneSante(bool _enBonneSante) {
    enBonneSante = _enBonneSante;
}

void Animal::nourrir() {
    std::cout << "L\'animal \"" << nom << "\" est nourri." << std::endl;
}

void Animal::soigner() {
    std::cout << "L\'animal \"" << nom << "\" est soigne." << std::endl;
}

void Animal::afficherDetails() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Age : " << age << std::endl;
    std::cout << "Sexe : " << sexe << std::endl;
    if (enBonneSante)
        std::cout << "En bonne sante." << std::endl;
    else
        std::cout << "En mauvaise sante." << std::endl;
};

/*---------------Ennajari Abdellah----------------*/
