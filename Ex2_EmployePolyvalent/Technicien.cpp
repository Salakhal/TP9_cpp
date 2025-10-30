#include "Technicien.h"

Technicien::Technicien(double sT) : salaireTech(sT) {}

void Technicien::afficherSalaire() const {
    cout << "Salaire du technicien : " << salaireTech << " DH" << endl;
}
