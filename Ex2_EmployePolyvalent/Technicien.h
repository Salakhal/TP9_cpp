#ifndef TECHNICIEN_H
#define TECHNICIEN_H
#include <iostream>
using namespace std;

class Technicien {
protected:
    double salaireTech;
public:
    Technicien(double sT);
    void afficherSalaire() const;
};

#endif
