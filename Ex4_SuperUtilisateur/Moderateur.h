#ifndef MODERATEUR_H
#define MODERATEUR_H
#include "Utilisateur.h"

class Moderateur : virtual public Utilisateur {
protected:
    int niveauModeration;
public:
    Moderateur(int i, string l, int niveau);
    void modererContenu() const;
};

#endif
