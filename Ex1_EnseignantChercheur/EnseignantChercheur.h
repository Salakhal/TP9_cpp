#ifndef ENSEIGNANTCHERCHEUR_H
#define ENSEIGNANTCHERCHEUR_H
#include "Personne.h"
#include "Chercheur.h"

class EnseignantChercheur : public Personne, public Chercheur {
private:
    string grade;
public:
    EnseignantChercheur(string n, string p, string domaine, string g);
    void afficher() const;
};

#endif
