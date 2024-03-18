#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
private:
    std::string nom;
    int age;
    std::string sexe;
    bool enBonneSante;

public:
    Animal(std::string _nom, int _age, std::string _sexe, bool _enBonneSante);

    std::string getNom() const;
    void setNom(std::string _nom);

    int getAge() const;
    void setAge(int _age);

    std::string getSexe() const;
    void setSexe(std::string _sexe);

    bool getEnBonneSante() const;
    void setEnBonneSante(bool _enBonneSante);

    void nourrir();
    void soigner();
    void afficherDetails() const;
};

#endif // ANIMAL_H
