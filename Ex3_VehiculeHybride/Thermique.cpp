#include "Thermique.h"

Thermique::Thermique(string m, string mo, double conso)
    : Vehicule(m, mo), consommationCarburant(conso) {}

void Thermique::afficherThermique() const {
    cout << "Consommation carburant : " << consommationCarburant << " L/100km" << endl;
}
