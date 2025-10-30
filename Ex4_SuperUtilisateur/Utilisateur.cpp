#include "Utilisateur.h"

Utilisateur::Utilisateur(int i, string l) : id(i), login(l) {}

void Utilisateur::afficherUtilisateur() const {
    cout << "ID : " << id << endl;
    cout << "Login : " << login << endl;
}
