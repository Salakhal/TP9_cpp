#include "EmployePolyvalent.h"
#include <iostream>

EmployePolyvalent::EmployePolyvalent(double sT, double sC)
    : Technicien(sT), Comptable(sC) {}

void EmployePolyvalent::afficherTousSalaires() const {
    cout << "=== Détails des salaires ===" << endl;
    Technicien::afficherSalaire();
    Comptable::afficherSalaire();
    cout << "============================" << endl;
}
