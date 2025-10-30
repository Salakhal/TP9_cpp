#include "Personne.h"

Personne::Personne(string n, string p) : nom(n), prenom(p) {}

void Personne::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Prénom : " << prenom << endl;
}
