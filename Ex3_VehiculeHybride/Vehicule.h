#ifndef VEHICULE_H
#define VEHICULE_H
#include <string>
#include <iostream>
using namespace std;

class Vehicule {
protected:
    string marque;
    string modele;
public:
    Vehicule(string m, string mo);
    void afficherVehicule() const;
};

#endif
