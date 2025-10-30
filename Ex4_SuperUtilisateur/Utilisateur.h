#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <string>
#include <iostream>
using namespace std;

class Utilisateur {
protected:
    int id;
    string login;
public:
    Utilisateur(int i, string l);
    void afficherUtilisateur() const;
};

#endif
