#ifndef THERMIQUE_H
#define THERMIQUE_H
#include "Vehicule.h"

class Thermique : virtual public Vehicule {
protected:
    double consommationCarburant;
public:
    Thermique(string m, string mo, double conso);
    void afficherThermique() const;
};

#endif
