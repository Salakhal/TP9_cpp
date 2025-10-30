#include "SuperUtilisateur.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    int id;
    string login, droits;
    int niveau;

    cout << "=== Création d'un SuperUtilisateur ===" << endl;
    cout << "ID : "; cin >> id; cin.ignore();
    cout << "Login : "; getline(cin, login);
    cout << "Droits d'accès : "; getline(cin, droits);
    cout << "Niveau de modération : "; cin >> niveau;

    SuperUtilisateur su(id, login, droits, niveau);
    cout << endl << "=== Test de l'affichage ===" << endl;
    su.afficherSuperUtilisateur();

    return 0;
}
