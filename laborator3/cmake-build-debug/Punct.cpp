#pragma once
#include "Punct.h"
#include <iostream>
#include <cmath>
#include "Dreapta.h"
using namespace std;

Dreapta Punct:: dreapta;

Punct::Punct() {
    this->x = 0;
    this->y = 0;
}

Punct::Punct(const Punct& other) {
    this->x = other.x;
    this->y = other.y;
}

Punct::~Punct() {}

double distanta(const Punct& punct1, const Punct& punct2) {
    double dx = punct1.x - punct2.x;
    double dy = punct1.y - punct2.y;
    return sqrt(dx * dx + dy * dy);
}
Punct Punct::centruDeGreutate(const vector<Punct>& puncte) {
    double sumaX = 0.0;
    double sumaY = 0.0;

    for (const auto& punct : puncte) {
        sumaX += punct.x;
        sumaY += punct.y;
    }

    if (!puncte.empty()) {
        double mediaX = sumaX / puncte.size();
        double mediaY = sumaY / puncte.size();
        return Punct(mediaX, mediaY);
    } else{
        return Punct();
    }
}

void Punct::afiseazaCoordonate() const {
    cout <<"("<<x<<", "<<y<< ")";
}