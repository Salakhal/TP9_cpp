#ifndef HYBRIDE_H
#define HYBRIDE_H
#include "Thermique.h"
#include "Electrique.h"

class Hybride : public Thermique, public Electrique {
public:
    Hybride(string m, string mo, double conso, double autonomie);
    void afficherCaracteristiques() const;
};

#endif
