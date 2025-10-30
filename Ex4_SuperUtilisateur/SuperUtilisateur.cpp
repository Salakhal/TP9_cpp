#include "SuperUtilisateur.h"

SuperUtilisateur::SuperUtilisateur(int i, string l, string droits, int niveau)
    : Utilisateur(i, l), Administrateur(i, l, droits), Moderateur(i, l, niveau) {}

void SuperUtilisateur::afficherSuperUtilisateur() const {
    cout << "=== Informations SuperUtilisateur ===" << endl;
    afficherUtilisateur();
    gererSysteme();
    modererContenu();
    cout << "===================================" << endl;
}
