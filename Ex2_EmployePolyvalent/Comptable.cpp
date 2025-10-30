#include "Comptable.h"

Comptable::Comptable(double sC) : salaireCompta(sC) {}

void Comptable::afficherSalaire() const {
    cout << "Salaire du comptable : " << salaireCompta << " DH" << endl;
}
