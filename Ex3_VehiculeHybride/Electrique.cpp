#include "Electrique.h"

Electrique::Electrique(string m, string mo, double autonomie)
    : Vehicule(m, mo), autonomieBatterie(autonomie) {}

void Electrique::afficherElectrique() const {
    cout << "Autonomie batterie : " << autonomieBatterie << " km" << endl;
}
