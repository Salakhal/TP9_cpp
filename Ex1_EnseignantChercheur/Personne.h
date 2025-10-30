#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
#include <iostream>
using namespace std;

class Personne {
protected:
    string nom;
    string prenom;
public:
    Personne(string n, string p);
    void afficher() const;
};

#endif
