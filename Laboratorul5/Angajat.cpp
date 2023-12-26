#pragma once
#include "Angajat.h"
#include <iostream>

Angajat::Angajat() {
    this->tarifOra=tarifOra;
    this->nrOre=nrOre;
}

Angajat::Angajat(const Angajat &other) {
    this->tarifOra=other.tarifOra;
    this->nrOre=other.nrOre;
}
Angajat::~Angajat() {}

double Angajat::getTarifOra() {
    return tarifOra;
}

double Angajat::getSalar() {
    return tarifOra*nrOre;
}
std::istream& operator>>(std::istream& input, Angajat& angajat) {
    std::cout << "Introdu numarul de ore: ";
    input >> angajat.nrOre;
    return input;
}

std::ostream& operator<<(std::ostream& output, const Angajat& angajat) {
    output << "Tarif pe ora: " << angajat.getTarifOra() << "\n";
    output << "Numar de ore: " << angajat.nrOre << "\n";
    output << "Salariu: " << angajat.getSalar() << "\n";
    return output;
}