#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H
#include "Utilisateur.h"

class Administrateur : virtual public Utilisateur {
protected:
    string droitsAcces;
public:
    Administrateur(int i, string l, string droits);
    void gererSysteme() const;
};

#endif
