#pragma once
#include <iostream>
using namespace std;
class Fractie {
public:
    int numarator;
    int numitor;
public:
    Fractie();
    Fractie(const Fractie& other);
    ~Fractie();
    int adunare();
    int scadere();
    int inmultire();
    int impartire();
    int cmmdc();
    bool egal();
    void simplifica();
    string reciproca();

}