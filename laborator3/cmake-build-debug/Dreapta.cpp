#pragma once
#include "Dreapta.h"
#include <iostream>

Dreapta ::Dreapta() {
    this->n=0;
    this->m=1;
}
Dreapta::Dreapta(const Dreapta& other ) {
    this->n=other.n;
    this->m=other.m;

}
Dreapta::~Dreapta(){
}