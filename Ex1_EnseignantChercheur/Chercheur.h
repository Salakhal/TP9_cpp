#ifndef CHERCHEUR_H
#define CHERCHEUR_H
#include <string>
#include <iostream>
using namespace std;

class Chercheur {
protected:
    string domaineRecherche;
public:
    Chercheur(string domaine);
    void afficher() const;
};

#endif
