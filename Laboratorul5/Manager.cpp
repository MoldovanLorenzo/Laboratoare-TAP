#include "Manager.h"
#include "Angajat.h"
#include <iostream>
#pragma once

Manager::Manager() {
    this->nrSubordonati=nrSubordonati;
}
Manager::Manager(const Manager& other) {
this->nrSubordonati=other.nrSubordonati;
}
Manager::~Manager() {}
double Manager::getSalar() {
    return Angajat::getSalar() * 1.5;
}