#pragma once
#include "Punct2D.h"

class Punct3D : public Punct2D {
private:
    double z;

public:
    Punct3D();
    Punct3D(double x, double y, double z);
    ~Punct3D();

    double getZ() const;
    void setZ(double z);
    double distanță(const Punct3D& altPunct) const;
    bool operator<(const Punct3D& altPunct) const;
    bool operator<=(const Punct3D& altPunct) const;
    bool operator>(const Punct3D& altPunct) const;
    bool operator>=(const Punct3D& altPunct) const;
    bool operator==(const Punct3D& altPunct) const;
    bool operator!=(const Punct3D& altPunct) const;
    Punct3D operator+(const Punct3D& altPunct) const;
    Punct3D operator-(const Punct3D& altPunct) const;
    Punct3D operator*(double scalar) const;
    Punct3D operator/(double scalar) const;
    Punct3D& operator+=(const Punct3D& altPunct);
    Punct3D& operator-=(const Punct3D& altPunct);
    Punct3D& operator*=(double scalar);
    Punct3D& operator/=(double scalar);
    Punct3D operator++();
    Punct3D operator--();
    Punct3D operator++(int);
    Punct3D operator--(int);

    friend std::ostream& operator<<(std::ostream& os, const Punct3D& punct);
    friend std::istream& operator>>(std::istream& is, Punct3D& punct);
};
