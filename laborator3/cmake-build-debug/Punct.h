#pragma once
#include "Dreapta.h"
#include <vector>

using namespace std;
class Punct {
private:
    double x;
    double y;
    static Dreapta dreapta;

public:
    Punct();
    Punct(const Punct& other);
    ~Punct();

    friend double distanta(const Punct& punct1, const Punct& punct2);
    static Dreapta getDreaptaStatica();
    static Punct centruDeGreutate(const vector<Punct>& puncte);
    void afiseazaCoordonate() const;
};
