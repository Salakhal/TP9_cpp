#ifndef COMPTABLE_H
#define COMPTABLE_H
#include <iostream>
using namespace std;

class Comptable {
protected:
    double salaireCompta;
public:
    Comptable(double sC);
    void afficherSalaire() const;
};

#endif
