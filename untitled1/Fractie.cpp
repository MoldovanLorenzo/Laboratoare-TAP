#pragma once
#include <iostream>
#include "Fractie.h"

using namespace std;

    Fractie::Fractie(int numarator = 0, int numitor = 1) {
        this->numarator = numarator;
        this->numitor = numitor;
    }

    Fractie::Fractie(const Fractie &other) {
        numarator = other.numarator;
        numitor = other.numitor;
    }

    Fractie::adunare(const Fractie &other) {
        return Fractie(numarator * other.numitor + other.numarator * numitor, numitor * other.numitor);
    }

    Fractie::scadere(const Fractie &other) {
        return Fractie(numarator * other.numitor - other.numarator * numitor, numitor * other.numitor);
    }

    Fractie::inmultire(const Fractie &other) {
        return Fractie(numarator * other.numarator, numitor * other.numitor);

    }

    Fractie::impartire(const Fractie &other) {
        if (other.numarator != 0) {
            return Fractie(numarator * other.numitor, numitor * other.numarator);
        } else {
            cout << "Eroare: Impartirea la zero.\n";
        }
    }

    static int cmmdc(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }


    bool egal(const Fractie &other) {
        if (numarator == other.numarator && numitor == other.numitor) {
            return true;
            cout << "Fractile sunt egale";
        } else {
            return false;
            cout << "Fractile nu sunt egale";
        }
    }

    void print() {
        cout << numarator << "/" << numitor;
    }

    Fractie::reciproca() const {
        if (numarator != 0) {
            return Fractie(numitor, numarator);
        } else {
            cout << " Fractia nu are un numitor valid pentru a calcula reciproca.\n";
        }
    }
    void simplifica()
    {
        int calculcmmdc=cmmdc(numarator,numitor);
        if(calculcmmdc!=0)
        {
            numarator/=calculcmmdc;
            numitor/=calculcmmdc;
        }
    }
};

