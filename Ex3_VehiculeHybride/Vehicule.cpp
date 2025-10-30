#include "Vehicule.h"

Vehicule::Vehicule(string m, string mo) : marque(m), modele(mo) {}

void Vehicule::afficherVehicule() const {
    cout << "Marque : " << marque << endl;
    cout << "Modèle : " << modele << endl;
}
