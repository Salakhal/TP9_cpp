#include "EnseignantChercheur.h"

EnseignantChercheur::EnseignantChercheur(string n, string p, string domaine, string g)
    : Personne(n, p), Chercheur(domaine), grade(g) {}

void EnseignantChercheur::afficher() const {
    cout << "=== Informations Enseignant-Chercheur ===" << endl;
    Personne::afficher();
    Chercheur::afficher();
    cout << "Grade : " << grade << endl;
    cout << "========================================" << endl;
}
