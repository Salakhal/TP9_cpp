#include "Hybride.h"

Hybride::Hybride(string m, string mo, double conso, double autonomie)
    : Vehicule(m, mo), Thermique(m, mo, conso), Electrique(m, mo, autonomie) {}

void Hybride::afficherCaracteristiques() const {
    cout << "=== Informations Véhicule Hybride ===" << endl;
    afficherVehicule();
    afficherThermique();
    afficherElectrique();
    cout << "===================================" << endl;
}
