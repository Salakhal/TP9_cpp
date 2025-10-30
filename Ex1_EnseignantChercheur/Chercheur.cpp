#include "Chercheur.h"

Chercheur::Chercheur(string domaine) : domaineRecherche(domaine) {}

void Chercheur::afficher() const {
    cout << "Domaine de recherche : " << domaineRecherche << endl;
}
