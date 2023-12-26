#pragma once
#include "Punct2D.h"
#include <cmath>


Punct2d::Punct2d(double x, double y){
    this->x=x;
    this->y=y;
}
Punct2d::Punct2d( const Punct2d& other) {
    this->x=other.x;
    this->y=other.y;
}

Punct2d::~Punct2d() {}

double Punct2d::getX() const {
    return x;
}

double Punct2d::getY() const {
    return y;
}

double Punct2d::distanță(const Punct2d& altPunct) const {
    double difX = this->x - altPunct.x;
    double difY = this->y - altPunct.y;
    return std::sqrt(difX * difX + difY * difY);
}

std::ostream& operator<<(std::ostream& os, const Punct2d& punct) {
    os << "(" << punct.getX() << ", " << punct.getY() << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Punct2d& punct) {
    std::cout << "Introduceti coordonata x: ";
    is >> punct.x;
    std::cout << "Introduceti coordonata y: ";
    is >> punct.y;
    return is;
}
