#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string nom;
    int agen;
    string sexe;
    bool enBonneSante;

public:
    Animal(string _nom, int _agen, string _sexe, bool _enBonneSante)
        : nom(_nom), agen(_agen), sexe(_sexe), enBonneSante(_enBonneSante) {}

    string getNom() const { return nom; }
    void setNom(string _nom) { nom = _nom; }

    int getAgen() const { return agen; }
    void setAgen(int _agen) { agen = _agen; }

    string getSexe() const { return sexe; }
    void setSexe(string _sexe) { sexe = _sexe; }

    bool getEnBonneSante() const { return enBonneSante; }
    void setEnBonneSante(bool _enBonneSante) { enBonneSante = _enBonneSante; }

    void nourrir() {
        cout << "L\'animal \"" << nom << "\" est nourri." << endl;
    }

    void soigner() {
        cout << "L\'animal \"" << nom << "\" est soigne." << endl;
    }

    void afficherDetails() const {
        cout << "Nom : " << nom << endl;
        cout << "Age : " << agen << endl;
        cout << "Sexe : " << sexe << endl;
        if (enBonneSante)
            cout << "En bonne sante." << endl;
        else
            cout << "En mauvaise sante." << endl;
    }
};

class Mammifere : public Animal {
private:
    int nombreDePattes;

public:
    Mammifere(string _nom, int _agen, string _sexe, bool _enBonneSante, int _nombreDePattes)
        : Animal(_nom, _agen, _sexe, _enBonneSante), nombreDePattes(_nombreDePattes) {}

    void afficherDetails() const {
        Animal::afficherDetails();
        cout << "Le nombre de pattes du mammifere est : " << nombreDePattes << endl;
    }
};

class Oiseau : public Animal {
private:
    float envergure;

public:
    Oiseau(string _nom, int _agen, string _sexe, bool _enBonneSante, float _envergure)
        : Animal(_nom, _agen, _sexe, _enBonneSante), envergure(_envergure) {}

    void afficherDetails() const {
        Animal::afficherDetails();
        cout << "L\'envergure de l\'oiseau est : " << envergure << endl;
    }
};

class Reptile : public Animal {
private:
    bool venimeux;

public:
    Reptile(string _nom, int _agen, string _sexe, bool _enBonneSante, bool _venimeux)
        : Animal(_nom, _agen, _sexe, _enBonneSante), venimeux(_venimeux) {}

    void afficherDetails() const {
        Animal::afficherDetails();
        if (venimeux)
            cout << "Cet animal est veneneux." << endl;
        else
            cout << "Cet animal n\'est pas veneneux." << endl;
    }
};

int main() {
    Mammifere mammifere("Chien", 5, "Male", true, 4);
    mammifere.afficherDetails();
    cout << endl;

    Oiseau oiseau("Aigle", 10, "Femelle", false, 2.5);
    oiseau.afficherDetails();
    cout << endl;

    Reptile reptile("Serpent", 3, "Male", false, true);
    reptile.afficherDetails();
    cout << endl;

    return 0;
}
