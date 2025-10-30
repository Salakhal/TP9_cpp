#include "Administrateur.h"

Administrateur::Administrateur(int i, string l, string droits)
    : Utilisateur(i, l), droitsAcces(droits) {}

void Administrateur::gererSysteme() const {
    cout << "Gestion du système avec droits : " << droitsAcces << endl;
}
