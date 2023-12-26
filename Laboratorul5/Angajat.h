#pragma once
#include <iostream>

using namespace std;

class Angajat {
public:
    double tarifOra = 5.5;
    int nrOre;
public:
    Angajat();
    Angajat(const Angajat& other);
    ~Angajat();
    double getSalar();
    double getTarifOra();
    friend std::istream& operator>>(std::istream& input, Angajat& angajat);

    friend std::ostream& operator<<(std::ostream& output, const Angajat& angajat);
};

