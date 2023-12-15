#pragma once;
#include <iostream>
using namespace std;
class Carte {
public:
    string autor;
    string titlu;
    int id;
    double pret;
public:
    Carte();
    Carte(const Carte& other);
    ~Carte();

};
