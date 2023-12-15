#include <iostream>
#include "Carte.h"
#pragma once;

Carte::Carte() {
    this->autor=autor;
    this->titlu=titlu;
    this->id=id;
    this->pret=pret;
}
Carte::Carte(const Carte &other) {
    this->autor=other.autor;
    this->titlu=other.titlu;
    this->id=other.id;
    this->pret=other.pret;
}
Carte::~Carte() {}