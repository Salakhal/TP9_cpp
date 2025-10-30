#ifndef EMPLEEPOLYVALENT_H
#define EMPLEEPOLYVALENT_H
#include "Technicien.h"
#include "Comptable.h"

class EmployePolyvalent : public Technicien, public Comptable {
public:
    EmployePolyvalent(double sT, double sC);
    void afficherTousSalaires() const;
};

#endif
