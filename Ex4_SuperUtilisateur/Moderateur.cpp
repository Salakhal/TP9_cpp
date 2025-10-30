#include "Moderateur.h"

Moderateur::Moderateur(int i, string l, int niveau)
    : Utilisateur(i, l), niveauModeration(niveau) {}

void Moderateur::modererContenu() const {
    cout << "Modération du contenu avec niveau : " << niveauModeration << endl;
}
