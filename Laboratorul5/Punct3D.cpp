#pragma once
#include "Punct3D.h"
#include <cmath>
#include "Punct2d.h"

Punct3D::Punct3D() : Punct2d()
{
    this->z=z
}

Punct3D::Punct3D(const Punct3D& other) {
    this->z=other.z;
}

Punct3D::~Punct3D() {}

double Punct3D::getZ() const {
    return this->z;
}

void Punct3D::setZ(double z) {
    this->z = z;
}

double Punct3D::distanță(const Punct3D& altPunct) const {
    double difX = this->getX() - altPunct.getX();
    double difY = this->getY() - altPunct.getY();
    double difZ = this->z - altPunct.getZ();
    return std::sqrt(difX * difX + difY * difY + difZ * difZ);
}

bool Punct3D::operator<(const Punct3D& altPunct) const {
}

std::ostream& operator<<(std::ostream& os, const Punct3D& punct) {
    os << "(" << punct.getX() << ", " << punct.getY() << ", " << punct.z << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Punct3D& punct) {
    std::cout << "Introduceti coordonata x: ";
    is >> punct.x;
    std::cout << "Introduceti coordonata y: ";
    is >> punct.y;
    std::cout << "Introduceti coordonata z: ";
    is >> punct.z;
    return is;
}
