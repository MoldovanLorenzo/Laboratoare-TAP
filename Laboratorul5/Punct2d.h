#pragma once
#include <iostream>

class Punct2d {
protected:
    double x;
    double y;

public:
    Punct2d();
    Punct2d(const Punct2d& other;
    virtual ~Punct2d();

    double getX() const;
    double getY() const;

    double distanță(const Punct2d& altPunct) const;

    friend std::ostream& operator<<(std::ostream& os, const Punct2d& punct);
    friend std::istream& operator>>(std::istream& is, Punct2d& punct);
};
