#ifndef SUPERUTILISATEUR_H
#define SUPERUTILISATEUR_H
#include "Administrateur.h"
#include "Moderateur.h"

class SuperUtilisateur : public Administrateur, public Moderateur {
public:
    SuperUtilisateur(int i, string l, string droits, int niveau);
    void afficherSuperUtilisateur() const;
};

#endif
