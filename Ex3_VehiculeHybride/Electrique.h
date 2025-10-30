#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H
#include "Vehicule.h"

class Electrique : virtual public Vehicule {
protected:
    double autonomieBatterie;
public:
    Electrique(string m, string mo, double autonomie);
    void afficherElectrique() const;
};

#endif
